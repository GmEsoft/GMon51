;MCS-80552 SFR file
;Written by O Meurice
;(*) denotes bit addressable registers
;(#) denotes read only registers
;(&) modified 04-jan-96 for I2C by Jean Morren
;
t3      define  0ffh    ;Timer 3
pwmp    define  0feh    ;Pulse Width Modulation Prescaler
pwm1    define  0fdh    ;Pulse Width Modulation register 1
pwm0    define  0fch    ;Pulse width Modulation register 1
;
ip0     define  0b8h    ;Interrupt Priority 0  (* b8h --> bfH)
;px0     define  ip0.0
;pt0     define  ip0.1
;px1     define  ip0.2
;pt1     define  ip0.3
ps0     define  ip0.4
ps1     define  ip0.5
pad     define  ip0.6
;
ip1     define  0f8h    ;Interrupt Priority 1  (* f8h --> ffH)
pct0    define  ip1.0
pct1    define  ip1.1
pct2    define  ip1.2
pct3    define  ip1.3
pcm0    define  ip1.4
pcm1    define  ip1.5
pcm2    define  ip1.6
pt2     define  ip1.7
;
rte     define  0efh    ;Reset/Toggle Enable
;tp47,tp46,rp45,rp44,rp43,rp42,rp41,rp40
;
ste     define  0eeh    ;SeT Enable
;tg47,tg46,sp45,sp44,sp43,sp42,sp41,sp40
;
tmh2    define  0edh    ;TiMer High 2  (#)
tml2    define  0ech    ;TiMer Low 2   (#)
ctcon   define  0ebh    ;CapTure CONtrol
;ctn3,ctp3,ctn2,ctp2,ctn1,ctp1,ctn0,ctp0
;
tm2con  define  0eah    ;TiMer 2 CONtrol
;t2is1,t2is0,t2er,t2b0,t2p1,t2p0,t2ms1,t2ms0
;
ien0    define  0a8h
;
;ie (8052) labels redefinition to ien0 (80552)
;
ead     define  ien0.6   ;(&)
es1     define  ien0.5   ;(&)
es0     define  ien0.4   ;(&)
;
ien1    define  0e8h    ;Interrupt ENable 1  (* e8h --> efh)
ect0    define  ien1.0
ect1    define  ien1.1
ect2    define  ien1.2
ect3    define  ien1.3
ecm0    define  ien1.4
ecm1    define  ien1.5
ecm2    define  ien1.6
et2     define  ien1.7
;
s1adr   define  0dbh    ;Serial 1 ADRess  (*)
gc      define  s1adr.0 ; |<-- slave address -->|gc|
;
s1dat   define  0dah    ;Serial 1 DATa
s1sta   define  0d9h    ;Serial 1 STAtus  (#)
;sc4,sc3,sc2,sc1,sc0,0,0,0
;
s1con   define  0d8h    ;Serial 1 CONtrol  (* d8h --> dfh)
cr0     define  s1con.0
cr1     define  s1con.1
aa      define  s1con.2
si      define  s1con.3
sto     define  s1con.4
sta     define  s1con.5
ens1    define  s1con.6
;
cth3    define  0cfh    ;CapTure High 3  (#)
cth2    define  0ceh    ;CapTure High 2  (#)
cth1    define  0cdh     ;CapTure High 1  (#)
cth0    define  0cch    ;CapTure High 0  (#)
cmh2    define  0cbh    ;CoMpare High 2
cmh1    define  0cah    ;CoMpare High 3
cmh0    define  0c9h    ;CoMpare High 0
tm2ir   define  0c8h    ;TiMer 2 Interrupt flag Register  (* c8h --> cfh)
cti0    define  tm2ir.0
cti1    define  tm2ir.1
cti2    define  tm2ir.2
cti3    define  tm2ir.3
cmi0    define  tm2ir.4
cmi1    define  tm2ir.5
cmi2    define  tm2ir.6
t2ov    define  tm2ir.7
;
adch    define  0c6h    ;Analog to Digital Converter High  (#)
adcon   define  0c5h    ;ADc CONtrol  not bit adressable !!!
;adc.1,adc.0,adex,adci,adcs,aadr2,aadr1,aadr0
;
p5      define  0c4h    ;Port 5 (#)
;adc7,adc6,adc5,adc4,adc3,adc2,adc1,adc0
;
p4      define  0c0h    ;Port 4  (* c0h --> c7h)
cmsr0   define  p4.0
cmsr1   define  p4.1
cmsr2   define  p4.2
cmsr3   define  p4.3
cmsr4   define  p4.4
cmsr5   define  p4.5
cmt0    define  p4.6
cmt1    define  p4.7
;
ctl3    define  0afh    ;CapTure Low 3  (#)
ctl2    define  0aeh    ;CapTure Low 2  (#)
ctl1    define  0adh    ;CapTure Low 1  (#)
ctl0    define  0ach    ;CapTure LOw 0  (#)
cml2    define  0abh    ;CoMpare Low 2
cml1    define  0aah    ;CoMpare Low 1
cml0    define  0a9h    ;CoMpare Low 0
;
s0buf   define  99h     ;Serial 0 data BUFfer
;
ct0i    define  p1.0
ct1i    define  p1.1
ct2i    define  p1.2
ct3i    define  p1.3
t2      define  p1.4
rt2     define  p1.5
scl     define  p1.6
sda     define  p1.7
;
pcon    define  87h     ;Power CONtrol






