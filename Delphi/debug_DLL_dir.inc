 { --------------- this const defines the debug DLL directory ----------
   --------------- used to debug DLL inside Visual C++ debugger --------}
{$IFDEF FPC}
    {$MESSAGE  '******* WARNING: FPC not support full DLL path in external function definitions ******'}
    DLL_DIR = '';
{$ELSE}
DLL_DIR = 'D:\GDS\progC\ocvWrapper46\bin\Debug\x86\';
{$ENDIF}

