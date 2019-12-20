@echo off

echo == Generating GMON2VEC.INC from GMON2.MAP and GMON2.LST ==

setlocal enabledelayedexpansion

echo ;=====  Vectors definition for GMON2 =====>gmon2vec.inc

echo.>>gmon2vec.inc
echo ;----- User interrupt handlers and user code entry point>>gmon2vec.inc

for /F "tokens=1,2,3" %%a in ( GMON2.MAP ) do (
	if "%%a" == "ramcoda" (
		set _VEC=X
		echo == ramcoda found ==
	) else if "!_VEC!%%b" == "Y" (
		set _VEC=N
		echo == Vectors end ==
	) else if "!_VEC! %%a" == "X LOCALS" (
		set _VEC=Y
		echo == Vectors begin ==
	) else if "!_VEC!" == "Y" (
		echo %%a	equ	%%bH >>gmon2vec.inc
		echo %%a	equ	%%bH
	)
)

echo.>>gmon2vec.inc
echo ;----- GMON2 Utilities vectors>>gmon2vec.inc

for /F "tokens=1,2,3,4,5*" %%a in ( GMON2.LST ) do (
	if "%%c" == "<VEC>" (
		set _VEC=Y
		echo == Vectors begin ==
	) else if "%%c" == "</VEC>" (
		set _VEC=N
		echo == Vectors end ==
	) else if "!_VEC!" == "Y" (
		echo %%e	equ	%%bh		%%f>>gmon2vec.inc
		echo %%e	equ	%%bh		%%f
	)
)

pause
