@echo on
@call "C:\Program Files\Microsoft Visual Studio 14.0\Common7\Tools\VsDevCmd.bat"

@echo off
if exist build rd /s /q build
mkdir build
cd build
cmake -G"NMake Makefiles" ..\
dir
nmake
cd ..
