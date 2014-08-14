@echo off
echo Please wait
erase *ultim*
copy  .\NT\GCC\*.* .
copy  .\src\*.* . 
copy  .\NT\GCC\endian.h   .\tst\.
if %1==-static  GOTO STATIC
if %1==-dll  GOTO DLL 
:STATIC
     echo Creating ultimate.lib 
     make -f Makefile.Cygwin.static
	 GOTO COMMON 
:DLL
        echo Creating ultimate.lib and ultimate.dll
        make -f Makefile.Cygwin.dll
		GOTO COMMON
:COMMON
erase *.h
erase *.c
erase *.o
erase *.tbl
copy .\src\MathLib.h .

