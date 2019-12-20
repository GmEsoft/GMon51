@echo off
echo == Assembling and linking MP04 ==
call loadfix a8051 mp04 mp04 mp04
call loadfix xlink -f 552.xcl mp04 -o mp04 -l mp04.map -x
pause
