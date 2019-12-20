@echo off
set OPT_P=/P1:9600
if not "%1" == "" if exist %1     set OPT_M=/M:%1
if not "%1" == "" if exist %1.hex set OPT_M=/M:%1
start sim51 /H:gmon2.a03 %OPT_M% /S:sfr552 /S:gmon2 /x:FFFF /c:2000 /G /F /R %OPT_P%
