{-----------------------------------------------------------------------------
 Unit Name: unFileIterator
 Author:    g.desanctis
 Date:      19-Oct-2017
 Purpose:   This class process all files included in one directory (not in
     subdirectories). For every file, is called the method ProcessFile of a
     class derived from TFileIteratorBase.
-----------------------------------------------------------------------------}

unit unFileIterator;

interface

uses {$IFDEF MSWINDOWS} Windows,{$ENDIF} SysUtils;

type
  TFileIteratorBase = class(TObject)
  private
    pnprogr: Integer;

  public
    function processFile(filename: string): Boolean;  virtual;

    property fileNumProgr: integer  read pnprogr write pnprogr;
  end;



  TFileIteratorFunc = function(filename: string): Boolean of object;

  TFileIterator = class(TObject)
  private
    pdir: string;
    pobjfunc: TFileIteratorBase;
    pext: string;
    pnprogr: Integer;
    sr: TSearchRec;
    searchWild: string;

  protected

  public
    constructor Create(dir: string);
    procedure process();
    procedure setObjFunc(obj: TFileIteratorBase);
    property extension: string read pext write pext;
    property fileProgr: integer read pnprogr ;
  end;


implementation
// ---------------- TFileIteratorBase -----------------
function TFileIteratorBase.processFile(filename: string): Boolean;
begin
  result := False;
end;
//-----------------------------------------------------
// ---------------- TFileIterator ---------------------
constructor TFileIterator.Create(dir: string);
begin
  Assert((dir>''), 'Directory must be not empty');
  inherited Create();
  pdir := dir;
  if pdir[Length(pdir)]<>'\' then
    pdir := pdir + '\';
  pobjfunc := nil;
  pext := '.BMP;.JPG;.PNG';
end;

procedure TFileIterator.setObjFunc(obj: TFileIteratorBase);
var
  punt: Pointer;
begin
  if not (Assigned(obj)) then
  begin
    pobjfunc := nil;
    Exit;
  end;
  pobjfunc := obj;
end;

procedure TFileIterator.process();
var
  ret: Boolean;
  fn : string;
begin
  Assert(Assigned(pobjfunc), 'Object with file process function not assigned');
  searchWild := '*';
  pnprogr := 0;
  if FindFirst(pdir+searchWild, faAnyFile, sr) = 0 then
  begin
    repeat
      begin
        fn := sr.Name;
        if (fn <> '.') and (fn <> '..') then
           if (pext='') or (Pos(UpperCase(ExtractFileExt(fn)), pext)>0) then
              begin
                Inc(pnprogr);
                pobjfunc.fileNumProgr := pnprogr;
                ret := pobjfunc.processFile(pdir+fn);
              end;
     end;
    until FindNext(sr) <> 0;
    FindClose(sr);
  end; // if FindFirst()
end;
//-----------------------------------------------------

end.
