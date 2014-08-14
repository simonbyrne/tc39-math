@echo off
copy .\nt\cl\*.* .
copy .\src\*.*  .
if %1==-static GOTO STATIC 
if %1==-dll    GOTO SHARED 
:STATIC
     echo Creating ultimate.lib
     nmake -f Makefile.NT.CLstatic 
     GOTO COMMON
:SHARED
     echo Creating ultimate.dll and ultimate.lib
     nmake -f Makefile.NT.CLdll  
     GOTO COMMON
:COMMON
del /F /Q *.h
del /F /Q *.c
del /F /Q *.obj
del /F /Q *.def
del /F /Q *.tbl
copy .\nt\cl\endian.h .\tst\
copy .\src\MathLib.h .



