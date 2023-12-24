@echo off
set COMPILER=C:\ProgramData\MATLAB\SupportPackages\R2023b\3P.instrset\mingw_w64.instrset\bin\gcc
                set CXXCOMPILER=C:\ProgramData\MATLAB\SupportPackages\R2023b\3P.instrset\mingw_w64.instrset\bin\g++
                set COMPFLAGS=-c -fexceptions -fno-omit-frame-pointer -m64 -DMATLAB_MEX_FILE  -DMATLAB_MEX_FILE 
                set CXXCOMPFLAGS=-c -fexceptions -fno-omit-frame-pointer -m64 -DMATLAB_MEX_FILE  -DMATLAB_MEX_FILE 
                set OPTIMFLAGS=-O2 -fwrapv -DNDEBUG
                set DEBUGFLAGS=-g
                set LINKER=C:\ProgramData\MATLAB\SupportPackages\R2023b\3P.instrset\mingw_w64.instrset\bin\gcc
                set CXXLINKER=C:\ProgramData\MATLAB\SupportPackages\R2023b\3P.instrset\mingw_w64.instrset\bin\g++
                set LINKFLAGS=-m64 -Wl,--no-undefined -shared -static -L"C:\Program Files\MATLAB\R2023b\extern\lib\win64\mingw64" -llibmx -llibmex -llibmat -lm -llibmwlapack -llibmwblas -Wl,"C:\Program Files\MATLAB\R2023b/extern/lib/win64/mingw64/mexFunction.def"
                set LINKDEBUGFLAGS=-g
                set NAME_OUTPUT=-o "%OUTDIR%%MEX_NAME%%MEX_EXT%"
set PATH=C:\ProgramData\MATLAB\SupportPackages\R2023b\3P.instrset\mingw_w64.instrset\bin;C:\Program Files\MATLAB\R2023b\extern\include\win64;C:\Program Files\MATLAB\R2023b\extern\include;C:\Program Files\MATLAB\R2023b\simulink\include;C:\Program Files\MATLAB\R2023b\lib\win64;%MATLAB_BIN%;%PATH%
set INCLUDE=C:\ProgramData\MATLAB\SupportPackages\R2023b\3P.instrset\mingw_w64.instrset\include;;%INCLUDE%
set LIB=C:\ProgramData\MATLAB\SupportPackages\R2023b\3P.instrset\mingw_w64.instrset\lib;;%LIB%
set LIBPATH=C:\Program Files\MATLAB\R2023b\extern\lib\win64;%LIBPATH%

gmake SHELL="cmd" -f vdynblksskidpad_sfun.gmk
