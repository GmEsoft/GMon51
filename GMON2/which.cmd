@echo off
set XPATH=.;%PATH%
for %%c in (%1. %1.bat %1.cmd %1.exe %1.com) do if not "%%~$XPATH:c" == "" echo %%~$XPATH:c
