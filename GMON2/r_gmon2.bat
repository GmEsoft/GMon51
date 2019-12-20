@echo off
cls
if not "%1" == "" if exist %1     set OPT_M=/M:%1
if not "%1" == "" if exist %1.hex set OPT_M=/M:%1
start sim51 /H:gmon2.a03 %OPT_M% /S:sfr552 /S:gmon2 /x:4000 /c:2000 /F /R
