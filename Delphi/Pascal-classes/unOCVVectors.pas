{
  This unit contains classes encapsulating the various vector Opencv classes.

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
  {$WARN 05093 Off } {result variable of a managed type does not seem to be initialized}
  {$WARN 05094 Off } {result variable of a managed type does not seem to be initialized}
  {$WARN 06018 Off } {Unreachable code}
{$ENDIF}
unit unOCVVectors;

interface
uses
      {$IFDEF FPC}
        Sysutils,
      {$ELSE}
        System.SysUtils,
      {$ENDIF}
      OPENCVWrapper;
type
    TOcvVecCreate<T> = function(n: Integer): T; cdecl;
    TOcvVecDelete<T> = procedure(v: T); cdecl;
    TOcvVecLength<T> = function(v: T): Integer; cdecl;
    TOcvVecSet<T, U> = procedure(v: T; ind: Integer; val: U); cdecl;
    TOcvVecGet<T, U> = function(v: T; ind: Integer): U; cdecl;
    TOcvVecToArray<T, U>   = procedure(v: T;  outar: TArray<U>) cdecl;
    TOcvVecFromArray<T, U> = procedure(v: T; inpar: TArray<U>); cdecl;


    TOcvVector<T, U> = class
    private
       internVector: T;

       ocvCreate: TOcvVecCreate<T>;
       ocvDelete: TOcvVecDelete<T>;
       ocvLength: TOcvVecLength<T>;
       ocvGet:    TOcvVecGet<T, U>;
       ocvSet:    TOcvVecSet<T, U>;
       // only some vector types have these functions
       ocvFromArray: TOcvVecFromArray<T, U>;
       ocvToArray:   TOcvVecToArray<T, U>;

       procedure setOcvFunctions();
       function getLength(): Integer;
       function getToFromArray(): Boolean;
       function getItem(i: Integer): U;
       procedure setItem(i: Integer; val: U);
    public
       //** Create a new vector: T is Opencv vector type, U is element type, n is number of elements
       constructor Create(n: Integer);  overload;
       //** Create a new vector from existing pointer of Opencv type T
       constructor Create(ocvVec: T);   overload;
       destructor  Destroy; override;

       //**  Fill an array from vector elements; if the returned array has length 0, then
       //**  the function is not defined for this vector type
       function toArray(): TArray<U>;
       //**  Fill vector elements from an array; if returned value is 0, then
       //**  the function is not defined for this vector type
       function fromArray(inpar: TArray<U>): Integer;

       //** Return the internal pointer to Opencv vector
       property pCvVector: T read internVector ;
       //** Return the length (size) of vector
       property length: Integer read getLength;
       //** Return True if to/from array functions are defined for this vector type, else False
       property hasToFromArray: Boolean read getToFromArray;
       //** Set or get a vector element, of type U
       property item[i: Integer]: U read getItem write setItem;
    end;



    {$INCLUDE OcvVecTypes.inc}


implementation



{$INCLUDE OCVVecDetails.inc}


constructor TOcvVector<T, U>.Create(n: Integer);
begin
  inherited Create;
  setOcvFunctions;
  internVector:=  ocvCreate(n);
end;

constructor TOcvVector<T, U>.Create(ocvVec: T);
begin
  inherited Create;
  internVector:=ocvVec;
  setOcvFunctions;
end;

destructor TOcvVector<T, U>.Destroy;
begin
  ocvDelete(internVector);
  inherited Destroy;
end;

function TOcvVector<T, U>.getLength(): Integer;
begin
   Result:= ocvLength(internVector);
end;

function TOcvVector<T, U>.getToFromArray(): Boolean;
begin
  Result:= Assigned(ocvToArray) and Assigned(ocvFromArray);
end;

procedure TOcvVector<T, U>.setItem(i: Integer; val: U);
begin
  ocvSet(internVector, i, val);
end;

function TOcvVector<T, U>.getItem(i: Integer): U;
begin
   Result:= ocvGet(internVector, i);
end;

function TOcvVector<T, U>.toArray(): TArray<U>;
begin
  SetLength(Result,  0);
  if Assigned(ocvToArray) then
  begin
      SetLength(Result,  getLength());
      ocvToArray(internVector, @Result[0]);
  end;
end;

function TOcvVector<T, U>.fromArray(inpar: TArray<U>): Integer;
begin
  Result:=0;
  if Assigned(ocvToArray) then
  begin
          ocvFromArray(internVector, @inpar[0]);
          Result:=getLength();
  end;
end;

end.
