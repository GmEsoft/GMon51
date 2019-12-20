@echo off

echo == Assembling and linking GMON2 ==

call loadfix a8051 gmon2 gmon2 gmon2
call loadfix xlink -f 552.xcl gmon2 -o gmon2 -l gmon2.map -x

pause
