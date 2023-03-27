{ AutoDestroy: automatic call of delete for some OpencvWrapper classes,
               when the class pointer exits from scope

  Based on idea from:

  https://sudonull.com/post/178897-Delphi-Automatic-destruction-of-objects-upon-exiting-the-method

  Copyright (C) 2023 Giandomenico De Sanctis gidesay@yahoo.com

  This source is free software; you can redistribute it and/or modify it under
  the terms of the GNU General Public License as published by the Free
  Software Foundation; either version 2 of the License, or (at your option)
  any later version.

  This code is distributed in the hope that it will be useful, but WITHOUT ANY
  WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
  FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more
  details.

  A copy of the GNU General Public License is available on the World Wide Web
  at <http://www.gnu.org/copyleft/gpl.html>. You can also obtain it by writing
  to the Free Software Foundation, Inc., 51 Franklin Street - Fifth Floor,
  Boston, MA 02110-1335, USA.
}
unit AutoDestroy;

interface
uses
  OpenCvWrapper;
type
      IObjectDestroyer<T> = interface(IInterface)
      ['{4DE81104-08B2-4821-960E-8935AC9B8F5E}']
        function GetPtr: T;
        property AsPtr: T read GetPtr;
      end;

      function CvMatAuto(AObject: PCvMat_t): IObjectDestroyer<PCvMat_t>;


implementation
type
      TObjectDestroyer<T> = class(TInterfacedObject, IObjectDestroyer<T>)
      private
        FObject: T;
      protected
        function GetPtr: T;
      public
        constructor Create(AObject: T);
      end;

      TMatDestroyer = class(TObjectDestroyer<PCvMat_t>)
      public
        destructor Destroy; override;
      end;




{******************************************************************************}
{******************** TObjectDestroyer ****************************************}
{******************************************************************************}
    constructor TObjectDestroyer<T>.Create(AObject: T);
    begin
      inherited Create();
      FObject:=AObject;
    end;


    function TObjectDestroyer<T>.GetPtr: T;
    begin
      Result := FObject;
    end;

{******************************************************************************}
{******************** TMatDestroyer *******************************************}
{******************************************************************************}

    destructor TMatDestroyer.Destroy;
    begin
      pCvMatDelete(FObject);
      inherited Destroy;
    end;


function CvMatAuto(AObject: PCvMat_t): IObjectDestroyer<PCvMat_t>;
begin
  Result:=TMatDestroyer.Create(AObject);
end;

end.
