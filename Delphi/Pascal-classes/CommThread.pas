{The unit contains classes that build a threaded queue
 with workers and results list } 

unit CommThread;
{$IFDEF FPC}
{$MODE Delphi}
{$ENDIF}

interface

uses
  {$IFDEF LCL}
  Windows, Classes, SysUtils, SyncObjs, lazCollections;
  {$ELSE}
  Winapi.Windows, System.Classes, System.SysUtils, System.SyncObjs, System.Generics.Collections;
  {$ENDIF}

type
  {$IFDEF FPC}
  TMessageProc = TThreadMethod;
  TThreadProcedure = TThreadMethod;
  TEvent = TSimpleEvent;
  {$ELSE}
  TMessageProc = TThreadMethod;
  {$ENDIF}

  TMessageQueue<T> = class
  strict private
    FEvent   :  TEvent;
    {$IFDEF FPC}
    FQueue   : TLazThreadedQueue<T>;
    {$ELSE}
    FQueue   : TThreadedQueue<T>;
    {$ENDIF}
    FReceiver: TMessageProc;
  strict protected
    procedure DispatchMessages;
    function  MakeCallback(): TThreadProcedure;
  public
    constructor Create(numItems: integer;
      const messageReceiver: TMessageProc);
    destructor Destroy; override;
    function Receive(var value: T): boolean;
    function Send(const value: T): boolean;
    procedure Shutdown();
    function popValue(): T;
    property Event: TEvent read FEvent;
  end;

  TCommThread<TToThread, TToMain> = class(TThread)
  strict private
    FToThread: TMessageQueue<TToThread>;
    FToMain  : TMessageQueue<TToMain>;
  protected
    procedure ProcessMessage(const data: TToThread); virtual; abstract;
    function SendToMain(const value: TToMain): boolean;
    procedure TerminatedSet; override;
  public
    constructor Create(AQueueToThread: TMessageQueue<TToThread>;
      AQueueToMain: TMessageQueue<TToMain>);
    procedure Execute; override;
  end;

  TSingleCommThread<TToThread, TToMain> = class(TCommThread<TToThread, TToMain>)
  strict private
    FToThreadQueue: TMessageQueue<TToThread>;
    FToMainQueue: TMessageQueue<TToMain>;
  public
    constructor Create(numItems: integer;
      const messageReceiver: TMessageProc);
    destructor Destroy; override;
    function SendToThread(const value: TToThread): boolean;
  end;

implementation

{ TMessageQueue<T> }

constructor TMessageQueue<T>.Create(numItems: integer;
  const messageReceiver: TMessageProc);
begin
  inherited Create;
  {$IFDEF LCL}
  FQueue := TLazThreadedQueue<T>.Create(numItems, 1, 1);
  {$ELSE}
  FQueue := TThreadedQueue<T>.Create(numItems, 1, 1);
  {$ENDIF}
  FReceiver := messageReceiver;
  FEvent:=nil;
  if not assigned(FReceiver) then
    FEvent := TEvent.Create();
end;

destructor TMessageQueue<T>.Destroy;
begin
  FreeAndNil(FQueue);
  FreeAndNil(FEvent);
  inherited;
end;

procedure TMessageQueue<T>.Shutdown();
begin
  FQueue.DoShutDown;
  if assigned(FEvent) then
    FEvent.SetEvent;
end;

function TMessageQueue<T>.popValue(): T;
begin
   if not(FQueue.ShutDown)  then
     FQueue.PopItem(Result);
end;


procedure TMessageQueue<T>.DispatchMessages;
begin
  if not(FQueue.ShutDown) then
    TThread.Queue(TThread.CurrentThread, MakeCallback());
end;

function TMessageQueue<T>.MakeCallback(): TThreadProcedure;
begin
  if Assigned(FReceiver) then
         Result:=fReceiver ;
end;

function TMessageQueue<T>.Receive(var value: T): boolean;
begin
  if (FQueue.ShutDown) then
    Result:=False
  else
    Result :=  (FQueue.PopItem(value) = wrSignaled);
end;

function TMessageQueue<T>.Send(const value: T): boolean;
begin
  Result:=False;
  Result := not(FQueue.ShutDown) and (FQueue.PushItem(value) = wrSignaled);
  if assigned(FEvent) then
    FEvent.SetEvent;
  if not(FQueue.ShutDown) and Assigned(FReceiver) then
    DispatchMessages;
end;

{ TCommThread<TToThread, TToMain> }

constructor TCommThread<TToThread, TToMain>.Create(AQueueToThread: TMessageQueue<TToThread>;
      AQueueToMain: TMessageQueue<TToMain>);
begin
  inherited Create(false);
  FToThread := AQueueToThread;
  FToMain := AQueueToMain;
end;


procedure TCommThread<TToThread, TToMain>.Execute;
var
  data: TToThread;
begin
  while FToThread.Event.WaitFor(INFINITE) = wrSignaled do begin
    if Terminated then
      break;
    FToThread.Event.ResetEvent;
    while (FToThread.Receive(data)) do
      if (Terminated) then
        Break
      else
        ProcessMessage(data);
  end;
end;

function TCommThread<TToThread, TToMain>.SendToMain(
  const value: TToMain): boolean;
begin
  if not(Terminated) then
     Result := FToMain.Send(value)
  else
      Result:=False;

end;

procedure TCommThread<TToThread, TToMain>.TerminatedSet;
begin
  FToThread.Event.SetEvent;
  inherited;
end;

{ TSingleCommThread<TToThread, TToMain> }

constructor TSingleCommThread<TToThread, TToMain>.Create(numItems: integer;
  const messageReceiver: TMessageProc);
begin
  FToThreadQueue := TMessageQueue<TToThread>.Create(numItems, nil);
  FToMainQueue := TMessageQueue<TToMain>.Create(numItems, messageReceiver);
  inherited Create(FToThreadQueue, FToMainQueue);
end;

destructor TSingleCommThread<TToThread, TToMain>.Destroy;
begin
  inherited;
  FreeAndNil(FToThreadQueue);
  FreeAndNil(FToMainQueue);
end;

function TSingleCommThread<TToThread, TToMain>.SendToThread(
  const value: TToThread): boolean;
begin
  Result := FToThreadQueue.Send(value);
end;

end.
