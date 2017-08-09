rmdir /S /Q %~dp0..\build_
rmdir /S /Q %~dp0..\debug
rmdir /S /Q %~dp0..\release

del /Q %~dp0..\bin\*.exe
del /Q %~dp0..\bin\*.a
del /Q %~dp0..\bin\*.dll
del /Q %~dp0..\Makefile*
del /Q %~dp0..\*.Debug
del /Q %~dp0..\*.Release
del /Q %~dp0..\*.user
del /Q %~dp0..\*.autosave

pause
