{
  This unit contains  classes encapsulating the various Ptr Opencv classes.

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
{$IFDEF FPC}
  {$mode Delphi}
  {$WARN 06018 Off } {Unreachable code}
{$ENDIF}
unit unOCVPtrs;

interface
uses
      {$IFDEF FPC}
        Sysutils,
      {$ELSE}
        System.SysUtils,
      {$ENDIF}
      OPENCVWrapper;
type
    TOcvPtrCreate<T>     = function(): T; cdecl;
    TOcvPtrDelete<T, U>  = procedure(p: T; ob: U); cdecl;
    TOcvPtrConvert<T, U> = function(p: T): U; cdecl;

    TOcvPtr<T, U> = class
    private
       internPtr: T;
       internClassObj: U;

       ocvCreate: TOcvPtrCreate<T>;
       ocvDelete: TOcvPtrDelete<T, U>;
       ocvConvert: TOcvPtrConvert<T, U>;

       procedure setOcvFunctions();
    public
       //** Create a new Ptr: T is Opencv Ptr type, U is wrapper struct type pointed by T
       constructor Create();  overload;
       //** Create a new Ptr from existing  Opencv Ptr of type T
       constructor Create(ocvPtr: T);   overload;
       destructor  Destroy; override;

       //** Return the internal pointer to Opencv Ptr
       property pCvPtr: T read internPtr ;
       //** Return the internal pointer to  wrapper struct pointed by internPtr
       property pCvClassObj: U read internClassObj ;
    end;



    {$INCLUDE OcvPtrTypes.inc}


implementation



{$INCLUDE OCVPtrDetails.inc}


constructor TOcvPtr<T, U>.Create();
begin
  inherited Create;
  setOcvFunctions;
  internPtr:=  ocvCreate();
  internClassObj:=ocvConvert(internPtr);
end;

constructor TOcvPtr<T, U>.Create(ocvPtr: T);
begin
  inherited Create;
  internPtr:=ocvPtr;
  setOcvFunctions;
  internClassObj:=ocvConvert(internPtr);
end;

destructor TOcvPtr<T, U>.Destroy;
begin
  ocvDelete(internPtr, internClassObj);
  inherited Destroy;
end;


end.
