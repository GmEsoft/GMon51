;=====  Vectors definition for GMON2 =====

;----- User interrupt handlers and user code entry point
ramcodastart	equ	2000H 
rstvec	equ	2000H 
int0vec	equ	2003H 
tmr0vec	equ	200BH 
int1vec	equ	2013H 
tmr1vec	equ	201BH 
serintvec	equ	2023H 
sio1vec	equ	202BH 
t2cap0vec	equ	2033H 
t2cap1vec	equ	203BH 
t2cap2vec	equ	2043H 
t2cap3vec	equ	204BH 
adccomvec	equ	2053H 
t2com0vec	equ	205BH 
t2com1vec	equ	2063H 
t2com2vec	equ	206BH 
tmr2vec	equ	2073H 
chksig	equ	20FEH 
usercode	equ	2100H 

;----- GMON2 Utilities vectors
stime	equ	0076h		;write time to RTC OKI MSM6242
ltime	equ	0079h		;read time from RTC OKI MSM6242
snap	equ	007Ch		;snap registers
add16	equ	007Fh		;op1(16b) = word@r0 + word@r1 ; r0 = #op1
sub16	equ	0082h		;op1(16b) = word@r0 - word@r1 ; r0 = #op1
mul16	equ	0085h		;prod(16b) = word@r0 * word@r1 ; r0 = #prod
div16	equ	0088h		;word@r0 = dword@r0 / word@r1 ; word@r1 = dword@r0 mod word@r1 
abs16	equ	008Bh		;word@r0 = abs( word@r0 )
neg16	equ	008Eh		;word@r0 = -word@r0
hex16	equ	0091h		;hex disp dptr
dsp32d	equ	0094h		;dec disp dword@r0
dsp32h	equ	0097h		;hex disp dword@r0
dsp16d	equ	009Ah		;dec disp word@r0
dsp16h	equ	009Dh		;hex disp word@r0
iniacc	equ	00A0h		;init buffer for bin to bcd conversion
bindec	equ	00A3h		;convert byte@r0 to bcd in buffer; ++r0
dspx	equ	00A6h		;disp bcd value in buffer
link	equ	00A9h		;link interrupt vector
add16s	equ	00ACh		;add word @r1 to word @r0
clr16	equ	00AFh		;clear word@r0
shl16	equ	00B2h		;left shift word@r0
get16	equ	00B5h		;hex read word@r0 without echo until non-hex char
get2h	equ	00B8h		;hex read byte@r0 without echo until non-hex char
get2he	equ	00BBh		;hex read byte@r0 with echo until non-hex char
echo	equ	00BEh		;echo byte, add <lf> to <cr>
get16i	equ	00C1h		;hex read word@r0 with prompt 'H>' and echo until non-hex char
get10i	equ	00C4h		;dec read word@r0 with prompt 'D>' and echo until non-hex char
get1d	equ	00C7h		;dec read 1 digit without echo
get1de	equ	00CAh		;dec read 1 digit with echo
get1h	equ	00CDh		;hex read 1 digit without echo
get1he	equ	00D0h		;hex read 1 digit with echo
stxt	equ	00D3h		;disp null terminated text @dptr
blank	equ	00D6h		;disp blank
byte	equ	00D9h		;hex disp byte in A
crlf	equ	00DCh		;disp CR/LF
getupc	equ	00DFh		;read char to A and convert to upper case
upcase	equ	00E2h		;convert char in A to upper case
snd	equ	00E5h		;disp char in A
getchr	equ	00E8h		;read char to A; Ctrl-D invokes debugger
testc	equ	00EBh		;test if char received (A = 0 if true)
dbgbrk	equ	00EEh		;break into debugger
dbgsnap	equ	00F1h		;snapshot SFRs via debugger
dbgcont	equ	00F4h		;continue from debugger
DASM1	equ	00F7h		;disasemble code from 18:19 to 1A:1B
DDISA	equ	00FAh		;disp char in A
DDISNL	equ	00FDh		;disp new line (A saved)
DHEXB	equ	0100h		;hex disp byte in A
DHEXW	equ	0103h		;hex disp word in R2:R3
WAITKI	equ	0106h		;wait char from serial line; Ctrl-C aborts
DHITKI	equ	0109h		;get char from serial line with XON/XOFF; Ctrl-C aborts
