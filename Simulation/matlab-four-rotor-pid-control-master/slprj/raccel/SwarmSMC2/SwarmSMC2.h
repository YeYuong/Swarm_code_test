#ifndef RTW_HEADER_SwarmSMC2_h_
#define RTW_HEADER_SwarmSMC2_h_
#ifndef SwarmSMC2_COMMON_INCLUDES_
#define SwarmSMC2_COMMON_INCLUDES_
#include <stdlib.h>
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "rtwtypes.h"
#include "sigstream_rtw.h"
#include "simtarget/slSimTgtSigstreamRTW.h"
#include "simtarget/slSimTgtSlioCoreRTW.h"
#include "simtarget/slSimTgtSlioClientsRTW.h"
#include "simtarget/slSimTgtSlioSdiRTW.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "raccel.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "rt_logging_simtarget.h"
#include "dt_info.h"
#include "ext_work.h"
#endif
#include "SwarmSMC2_types.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"
#include <stddef.h>
#include "rtw_modelmap_simtarget.h"
#include "rt_defines.h"
#include <string.h>
#define MODEL_NAME SwarmSMC2
#define NSAMPLE_TIMES (3) 
#define NINPUTS (0)       
#define NOUTPUTS (0)     
#define NBLOCKIO (268) 
#define NUM_ZC_EVENTS (0) 
#ifndef NCSTATES
#define NCSTATES (156)   
#elif NCSTATES != 156
#error Invalid specification of NCSTATES defined in compiler command
#endif
#ifndef rtmGetDataMapInfo
#define rtmGetDataMapInfo(rtm) (*rt_dataMapInfoPtr)
#endif
#ifndef rtmSetDataMapInfo
#define rtmSetDataMapInfo(rtm, val) (rt_dataMapInfoPtr = &val)
#endif
#ifndef IN_RACCEL_MAIN
#endif
typedef struct { real_T nkrg0rp1tj ; real_T fn5ghhd2tl ; real_T m4yvyw4wkm ;
real_T gjlgsb5ud2 ; real_T dovkmcjvrg ; real_T dhaayoyjqs ; real_T fqvyzg1ikz
; real_T my2qvxq4vi ; real_T gw3i35j4jt ; real_T gmm2zbtxb5 ; real_T
foedhs1o3a ; real_T fl25pm05gl ; real_T dhmwksclha ; real_T noumlvysto ;
real_T mkdgvwendj ; real_T h1tqpswb1i ; real_T ejvulga4w5 ; real_T hzqxysogc2
; real_T p5kow5ymrx ; real_T hz1yuulqw0 ; real_T gvk0o2svme ; real_T
cgbastyn2k ; real_T p13raq01zn ; real_T k2emhbdmfl ; real_T lmuwp5via1 ;
real_T ht4btdihlj ; real_T m3cwptyuss ; real_T aasmc5aubg ; real_T onwlyvksy1
; real_T hgrck5k2qn ; real_T cvnxsgbslf ; real_T akqkcnnrg1 ; real_T
a2bgnwhqmj ; real_T nsotti14ar ; real_T dew2sklnjf ; real_T mjx4alvhfz ;
real_T gtsyjuxrau ; real_T dagpv2viuj ; real_T gf15uxwtsm ; real_T olropwoagx
; real_T fyllvvykfx ; real_T adb2qyporg ; real_T eod1xw3jx5 ; real_T
inino4sn3n ; real_T l4cyjj3vsn ; real_T cdjr00kipb ; real_T mxf343uhx5 ;
real_T hfuamunkkc ; real_T ktg1ni3yrr ; real_T emq054pzbi ; real_T nzubxg3nw3
; real_T bbkw4ewb4z ; real_T c4cweg1v0h ; real_T gogffxxbnf ; real_T
mx2cm2pvr4 ; real_T i4qo4t3inx ; real_T co21hzofmv ; real_T ifpr5jmyf1 ;
real_T ohwv2asfpz ; real_T kllvqw0sro ; real_T cb4fxdwmq5 ; real_T lpbzqjcprk
; real_T nmk23uk2rt ; real_T h2xdtfiq14 ; real_T fhgdzl1ux5 ; real_T
dtzbyd4h2j ; real_T b4yzfc1ead ; real_T mlfhsuf1dc ; real_T ecrx5ucekw ;
real_T jw5qymyu2m ; real_T fqteuw4yxc ; real_T blzrr2dl3p ; real_T kpbyqxbm3j
; real_T erks3kjsiv ; real_T kba1gnwoqz ; real_T lt1w2y2www ; real_T
pkkav2dgfu ; real_T a2sufne1el ; real_T ffw4fd21fw ; real_T burl4etjnv ;
real_T coaqjxrgps ; real_T c15m2hah5x ; real_T m41hci1djw ; real_T mdf4wtsctx
; real_T osuw2n2p5c ; real_T okts5kdm5o ; real_T mk4pik4iwf ; real_T
c3brafoy2k ; real_T ouzmvhy1gu ; real_T pq3as3h2ng ; real_T g4oiivzehy ;
real_T l3ijkqzkh1 ; real_T d4vwxf2jbr ; real_T a42b4qlkos ; real_T p3gscgvcwg
; real_T ajzh3ehner ; real_T a5pbo201xh ; real_T hegyf5vyzy ; real_T
e3ouvrfmhd ; real_T kokm05sank ; real_T nedsdxrz0d ; real_T grop1jv2fl ;
real_T a0nxandghd ; real_T pvkiijd32j ; real_T dhlf45dvej ; real_T gmiml41ahh
; real_T bprns2hfy5 ; real_T ighjzzaorr ; real_T pifpto3vrs ; real_T
buzwp2qk0c ; real_T fhwcynxoam ; real_T gagetyfvke ; real_T eoxpu4hzbr ;
real_T kjihy01gxn ; real_T a2cuz4plc3 ; real_T eemrvpv0ou ; real_T llsiikbjsb
; real_T ieswaokbbs ; real_T ht55zbzfl3 ; real_T loxq2gzg5d ; real_T
n0zrk5x0qd ; real_T fxkutufqvt ; real_T bqmfichlii ; real_T bvqsnkcgtl ;
real_T p5zejio25u ; real_T k1n0tqzloq ; real_T elq41p5fyk ; real_T iskktr4j12
; real_T fju0kavd21 ; real_T kgpvjsrcvv ; real_T guz0wqnnqa ; real_T
lmucwinbfn ; real_T idi4whozok ; real_T epn1xunf0k ; real_T nyhs3wxqky ;
real_T cfkwt4rup1 ; real_T p2h10oncgq ; real_T klwi41ft0p ; real_T ixcs0kb5cd
; real_T ii4tea1b5f ; real_T fm4y3ciqlx ; real_T abbyqwzn2p ; real_T
e3lde0qeyw ; real_T ihej1dufhd ; real_T ld3lnycffc ; real_T pmn2jinf1c ;
real_T m23o2msgfd ; real_T damv1eafhe ; real_T no4p0gupxp ; real_T ljqvy22dik
; real_T npu5vs3ku4 ; real_T agh1kwbpao ; real_T l45te5hz52 ; real_T
digls4x4pq ; real_T eclcbu2vsx ; real_T hgu05vg5ey ; real_T b2ndeegab5 ;
real_T gzexghqqmo ; real_T av5yyqtlqj ; real_T noefdhhzfu ; real_T kzsg1fqtyq
; real_T kwmuy04gkx ; real_T gd5vxikjkr ; real_T frzlwgxrx5 ; real_T
hvsg45qqtb ; real_T ipvxqb0no1 ; real_T drxzhltnzx ; real_T pzj42wytaw ;
real_T gotvrd1vif ; real_T isgzklolke ; real_T ff5mcoixhb ; real_T kkydadivym
; real_T namigiwbdi ; real_T mracf5jvtq ; real_T med3sdiiqq ; real_T
ox1enmqque ; real_T l5ytux2wku ; real_T nfpwdpoxim ; real_T hjojlg0ri5 ;
real_T iypnm5k2l0 ; real_T pcnfbwkpz5 ; real_T gjtd0nf3yk ; real_T m0xb24biyp
; real_T nbabvypszj ; real_T ch4uam4zhi ; real_T bhvrcdxqst ; real_T
kxxwyujbhf ; real_T ib50hx4r55 ; real_T d3zfzrw4bi ; real_T jfdgkrfi4h ;
real_T n1je2tac3l ; real_T p5bhm1alpr ; real_T igvbfe0ygp ; real_T hhlbdzptb2
; real_T g3mbejedbn ; real_T pyr2tnvc0u ; real_T fiqq3mnurr ; real_T
muautdnlvc ; real_T fd0ifozzzi ; real_T gc4vdbdowg ; real_T pe1rpjuvjl ;
real_T nfcrfmczg0 ; real_T co5el4lvj3 ; real_T obgc5k0p33 ; real_T dqmjmxx1rh
; real_T jxuw3gofsa ; real_T cjqsc2yb0r ; real_T lhnyhfj4ax ; real_T
odpucuep24 ; real_T e3qoxdem5b ; real_T ksoaeoigyx ; real_T oispyu5oso ;
real_T jsto1jr5xg ; real_T kt5xgzm5wk ; real_T khk5ku0koj ; real_T k1puzszxy5
; real_T jvr4p53sde ; real_T j1xjnt2uqz ; real_T jn5pbppnc1 ; real_T
cgmyxly24o ; real_T fy4gmkc2r2 ; real_T kn0q25hdzu ; real_T k53z01ef4w ;
real_T beyiwh2ufn ; real_T m4khsgkfuv ; real_T bh5zn5qbok ; real_T brlxhg14if
; real_T nu1cnqvuqs ; real_T broln0hw2t ; real_T dtg5wvfw12 ; real_T
ikvsnzuqkx ; real_T mehc4ezk5i ; real_T fvuuli3ztl ; real_T ct0ubq0p0f ;
real_T n2t2mlsekr ; real_T hozjtrrg3w ; real_T hcpmnd4tvl ; real_T dly0u2si3d
; real_T grifkcmi1k ; real_T l4chavwt1y ; real_T pidyrnfhb3 ; real_T
n0btpczb4e ; real_T icn3tc3wmy ; real_T e1mg3zha3r ; real_T gqiev5b33f ;
real_T k1js0bv5xd ; real_T eoisisc0h1 ; real_T m550tb0xb0 ; real_T aa3he3tbbh
; real_T p1bin1tn4s ; real_T azguj351yz ; real_T psd0qi2uaw ; real_T
jkr1aqos5k ; real_T kgsz3eq5q3 ; real_T fsigdbugsv ; real_T miesiu5v0m ;
real_T mehi2jgtqv ; real_T l24o5drtvc ; real_T myc5fy31uv ; real_T ct235dqmgw
; real_T cflmg0gnmi ; real_T jahc5xdouv ; real_T ass5152o0p ; real_T
ewudaddp3p ; real_T bv4n4wscc2 ; real_T gx5fpzjouv ; real_T gz0h3zz2zn ;
real_T kcyjdevu1q ; } B ; typedef struct { real_T d1w1ptz3pi ; real_T
eswhoiqpgv ; real_T arilnfbogf ; real_T kva0zescbq ; real_T hgj1s3xddi ;
real_T lzpxk2xcrl ; real_T kdhn3disiv ; real_T b350d4lkxg ; real_T djd0izxljn
; real_T b1tjfatcvu ; real_T gp4qxs0jny ; real_T cjugb23rv3 ; real_T
fd0y4m0axt ; real_T dtzaql1t41 ; real_T dv0pjwza2t ; real_T hag2tmzxq4 ;
real_T azzm52nqwi ; real_T fkjod2apq5 ; real_T oyrlkmn3mo ; real_T gtrm0fav21
; real_T orwknhwt4c ; real_T nxu23jmfq3 ; real_T ciurdviajr ; real_T
lqnqkoaiiq ; real_T jznxtwrdhr ; real_T plk4jigknp ; real_T ns4o4be1dk ;
real_T is4uwefdli ; real_T jdb2xhicuf ; real_T eiahtdjei5 ; real_T nfmtckz5ig
; real_T oe5wqb2qpx ; real_T hnlz54wdxg ; real_T biumseuk2t ; real_T
hi3ccp4tdk ; real_T djewj0wij2 ; real_T px2bsuejyw ; real_T b4ma5udaih ;
real_T mzfqs1evtc ; real_T kjc3mzi05m ; real_T hfcw5k2d4i ; real_T dds1lvrxbl
; real_T pzqvd5drtk ; real_T bex0xz0uof ; real_T jh2zw2mkrg ; real_T
nls23awnpg ; real_T mqewdswekk ; real_T hl3xxenjxg ; real_T ix3yptllqh ;
real_T mgirnwhnpt ; real_T efzvv4xbrg ; real_T nedh5efh1d ; real_T fyesrwfyxs
; real_T okkbu2wqmk ; real_T npcngz0wrj ; real_T es1ux2mjsf ; real_T
jicbjxqfry ; real_T lypptgpmwb ; real_T ixuvrapcqk ; real_T pjef5afbxz ;
real_T nbm4ws3vkn ; real_T fmlsxd0jl0 ; real_T imedkbs3vt ; real_T m0gui1x1iv
; real_T e3rgb100pi ; real_T ndznpin2w5 ; real_T im03fvpgjh ; real_T
g101uqyqvk ; struct { void * LoggedData ; } emij3gu2p3 ; struct { void *
LoggedData ; } gqywp2i1cj ; struct { void * LoggedData ; } jcih5scivl ;
struct { void * LoggedData ; } djmy4rykzy ; struct { void * LoggedData ; }
kcwgw5xtnl ; struct { void * LoggedData ; } dfpn3zqanc ; struct { void *
LoggedData ; } aecsxjta3a ; struct { void * LoggedData ; } bmjbmlzigk ;
struct { void * LoggedData ; } lvdkfnekhn ; struct { void * LoggedData ; }
k4dvsu2hoq ; struct { void * LoggedData ; } b05g2vycgb ; struct { void *
LoggedData [ 2 ] ; } ltkqdhy2or ; struct { void * LoggedData ; } bitx3tzpad ;
struct { void * LoggedData ; } a0dp0zea50 ; struct { void * LoggedData ; }
blnkf3ela2 ; struct { void * LoggedData ; } ieq2b1poip ; struct { void *
LoggedData ; } auc0fgvvai ; struct { void * LoggedData [ 2 ] ; } ioy5gw0nyq ;
struct { void * LoggedData [ 2 ] ; } ezs1ottncw ; struct { void * LoggedData
; } jvqvovht1y ; struct { void * LoggedData ; } mngitkl3hh ; struct { void *
LoggedData ; } ez1u0egtjx ; struct { void * LoggedData ; } byo5dndcaz ;
struct { void * LoggedData ; } a2t52w5ff2 ; struct { void * LoggedData ; }
gzs0zfonp5 ; struct { void * LoggedData ; } eqxi2w1rhr ; struct { void *
LoggedData ; } oxaetcp2kq ; struct { void * LoggedData ; } pvcytqwuwj ;
struct { void * LoggedData ; } bw00xf1e4z ; struct { void * LoggedData ; }
g3cxmpqo3e ; struct { void * LoggedData ; } cj1ftv2g0u ; struct { void *
LoggedData [ 2 ] ; } fnmysz1ebd ; struct { void * LoggedData ; } dbygebv5my ;
struct { void * LoggedData ; } ldchl0bqka ; struct { void * LoggedData [ 2 ]
; } iblb5vrl2s ; struct { void * LoggedData ; } kv5ct042gj ; struct { void *
LoggedData ; } jzevdhd5gh ; struct { void * LoggedData ; } a3bokyllqf ;
struct { void * LoggedData [ 2 ] ; } fmt0z2qdpu ; struct { void * LoggedData
; } lkthlaoju2 ; struct { void * LoggedData [ 2 ] ; } izkgyus134 ; struct {
void * LoggedData ; } grning0a4q ; struct { void * LoggedData ; } ojsvnrtorh
; struct { void * LoggedData ; } hhbsauo334 ; struct { void * LoggedData ; }
nqhxyptfeo ; struct { void * LoggedData ; } emginq5lgs ; struct { void *
LoggedData ; } ftbyprsivm ; struct { void * LoggedData [ 3 ] ; } hb2ly1w1ok ;
struct { void * LoggedData [ 3 ] ; } kwzfrzkiii ; struct { void * LoggedData
; } oj54dfzsok ; struct { void * LoggedData ; } cpcosbs5dc ; struct { void *
LoggedData ; } pkafefk0zo ; struct { void * LoggedData ; } hjddojjly1 ;
struct { void * LoggedData ; } egjon0r3te ; struct { void * LoggedData ; }
ijm0xqiufe ; struct { void * LoggedData ; } prcn5v5pk1 ; struct { void *
LoggedData ; } gatb1sv0cv ; struct { void * LoggedData ; } mf5eku412j ;
struct { void * LoggedData ; } kunld0dpg1 ; struct { void * LoggedData ; }
oi1iazky4a ; struct { void * LoggedData ; } ij3q2suy5j ; struct { void *
LoggedData [ 2 ] ; } ptfoi1d3sw ; struct { void * LoggedData ; } lrhytrivyz ;
struct { void * LoggedData ; } e2bludozsl ; struct { void * LoggedData ; }
jbto4hm0de ; struct { void * LoggedData ; } gwc0ski0eq ; struct { void *
LoggedData ; } b2cpxdd2mj ; struct { void * LoggedData ; } i0ozqbl1ot ;
struct { void * LoggedData [ 2 ] ; } cyo2oxktx5 ; struct { void * LoggedData
[ 2 ] ; } er1ksuzlgo ; struct { void * LoggedData ; } djmeuqsgto ; struct {
void * LoggedData [ 2 ] ; } clf33poe52 ; struct { void * LoggedData ; }
a11v0c1vzo ; struct { void * LoggedData [ 2 ] ; } hd5knwtqiy ; struct { void
* LoggedData [ 2 ] ; } ffzgghejqn ; struct { void * LoggedData ; } eamfxesd0i
; struct { void * LoggedData ; } cnde1smlfk ; struct { void * LoggedData ; }
e2sqwk5ff5 ; struct { void * LoggedData ; } nv5ni0aokg ; struct { void *
LoggedData ; } bvkrmrdpzf ; struct { void * LoggedData ; } oqiz45wia0 ;
struct { void * AQHandles ; } cvepqulsyo ; struct { void * AQHandles ; }
ger1swbgma ; struct { void * AQHandles ; } ga4t3zelrc ; struct { void *
AQHandles ; } d4n3os3ohs ; struct { void * AQHandles ; } olwfo1ugp5 ; struct
{ void * AQHandles ; } gtuoyzkuzx ; struct { void * AQHandles ; } d41yioycvk
; struct { void * AQHandles ; } byipnpz0u1 ; struct { void * AQHandles ; }
do54evbx0n ; struct { void * AQHandles ; } a2bbryrbza ; struct { void *
AQHandles ; } nvefxlsyrk ; struct { void * AQHandles ; } ko23np5x5x ; struct
{ void * AQHandles ; } f30xrwjxf1 ; struct { void * AQHandles ; } fz1gqd4d4r
; struct { void * AQHandles ; } kqtugum2z4 ; struct { void * AQHandles ; }
lvqusllkau ; struct { void * AQHandles ; } icta4fc2c5 ; struct { void *
AQHandles ; } iyfvfn4ifq ; struct { void * LoggedData ; } eompyhxfbj ; struct
{ void * LoggedData ; } pwtb02p4mo ; struct { void * LoggedData ; }
msyldogcqg ; struct { void * LoggedData ; } nugkxooboj ; struct { void *
LoggedData ; } naa201uhm0 ; struct { void * LoggedData ; } f3tp3c34hn ;
struct { void * LoggedData ; } pm2vntnivm ; struct { void * LoggedData ; }
enrvsy4qqx ; struct { void * LoggedData ; } eirzgrargf ; struct { void *
LoggedData ; } plh0uauhan ; struct { void * LoggedData ; } mh4vudwhio ;
struct { void * LoggedData ; } dlhyyhp1zr ; struct { void * LoggedData ; }
jsbqc1wa02 ; struct { void * LoggedData ; } fqiweivfcc ; struct { void *
LoggedData ; } odhb1mdfpo ; struct { void * LoggedData ; } keapkl3vp3 ;
struct { void * LoggedData ; } eah42kb1gz ; struct { void * LoggedData ; }
ohn21m3mkw ; struct { void * LoggedData ; } csxkf4svoz ; struct { void *
LoggedData ; } cfcsqc1m2e ; struct { void * LoggedData ; } a4rjw0u5k3 ;
struct { void * AQHandles ; } olwfo1ugp5k ; struct { void * LoggedData ; }
cvlfsg20ho ; struct { void * LoggedData [ 2 ] ; } a1nnhfj0xc ; struct { void
* AQHandles ; } olwfo1ugp5kj ; struct { void * LoggedData ; } mxqa0hq30g ;
struct { void * AQHandles ; } olwfo1ugp5kjg ; struct { void * LoggedData ; }
fvpv2wxktk ; struct { void * LoggedData ; } bb3njhiaz1 ; struct { void *
LoggedData ; } n0yy2ofhzi ; struct { void * LoggedData ; } np3bhbz2d5 ;
struct { void * LoggedData ; } muelx4rias ; struct { void * LoggedData ; }
o3paxaie1n ; struct { void * LoggedData ; } fs5gvdsrqo ; } DW ; typedef
struct { real_T lmp1jlws1q ; real_T dvsvf5wljn ; real_T pjq3y0vbqc ; real_T
muultjrzks ; real_T l2m5ltsubp ; real_T oqbdmgd0ck ; real_T nw0blrtueg ;
real_T b5w4zdghl5 ; real_T d1vv0rjnt2 ; real_T l3pq51pl0v ; real_T derj2qzpjf
; real_T ig1kllb5t1 ; real_T m33tqgudkc ; real_T ou0e404rmu ; real_T
cxw3eeosyw ; real_T ev5tiefchl ; real_T ifchgpw41h ; real_T nwkcijvubd ;
real_T lua2wyjxlz ; real_T hoe45xg5l1 ; real_T pvts5x1qi0 ; real_T dfdozw0qju
; real_T pwzhugspii ; real_T bw5bxl3emz ; real_T la0kq4504w ; real_T
al3wmpyaa1 ; real_T nt03o0lbau ; real_T mjgjmcyafa ; real_T ju3cx4z2kg ;
real_T mxt02um1sk ; real_T h5bds2funr ; real_T obu1t4d3fm ; real_T dxslzurzcr
; real_T cgymruyhg4 ; real_T mfkdlg3wcn ; real_T mhgsfskkwq ; real_T
gzcp4vv3sa ; real_T h0r5nq1np1 ; real_T ozr1b5mdiv ; real_T k2dc21zk5j ;
real_T czddacw2q5 ; real_T dkzvp0zlco ; real_T j3b1dd4rrz ; real_T lwywyqed5i
; real_T b5odf1vso5 ; real_T o1gw4caqxa ; real_T gzyfptfl3t ; real_T
m5y0b1f4ds ; real_T li3l2cwoj1 ; real_T lbblib2jj3 ; real_T ixqfbvvrqq ;
real_T irzbjopfdt ; real_T e2ng2yt2cq ; real_T ewln0r2fz3 ; real_T ngyoiwrxa1
; real_T frk2bafzxw ; real_T f3kt0qvhxp ; real_T d1dqkqdeq2 ; real_T
pviwr55jyx ; real_T ctyxh2raia ; real_T ipbbbqqcmt ; real_T lu2ujrk2ss ;
real_T lhu2d3f2ic ; real_T bvjygku5w3 ; real_T awijrgo5wm ; real_T huag3gyiah
; real_T l4w55j32bm ; real_T gywjrxv55s ; real_T etb0rkmw41 ; real_T
j21i42iaxm ; real_T lmhoguyign ; real_T kfxedfgmub ; real_T jdy4bhdf2w ;
real_T ik24wcoua3 ; real_T hkz0a2vtcs ; real_T do2eu3ewib ; real_T o0mzlxndfd
; real_T muzcxum1ac ; real_T lsji1c25s5 ; real_T nwyypn00k3 ; real_T
adlq2c0wq1 ; real_T i4cw2jspdx ; real_T of00aunqxu ; real_T lwagfwnwie ;
real_T pjvklj4szi ; real_T acnidcfmgv ; real_T lijh2swrpw ; real_T jppvzfe0an
; real_T g5w4koxf0l ; real_T fow5rkn0z1 ; real_T lgduvgp5n3 ; real_T
fypx2u0nu4 ; real_T fy55ynfqoc ; real_T fmatfc2vzb ; real_T ghwaun2q4z ;
real_T grsxmlptlz ; real_T lhv23sybik ; real_T phxnmexg5m ; real_T eon1excs1b
; real_T b0h1snyqm3 ; real_T dey1qh2tff ; real_T kctwtdh12v ; real_T
kjzjtgp2iz ; real_T flstcqpmom ; real_T o5c0ah2apc ; real_T o0rr4etxc1 ;
real_T jwvpzqa0r5 ; real_T n3lfk4kfkd ; real_T kxrzrzcrxq ; real_T kjlmncixpi
; real_T j3ycbllr1p ; real_T eqelhjati2 ; real_T jqtzx31zch ; real_T
fhtwvoc0b2 ; real_T jf4ybj03im ; real_T la1zyfaj31 ; real_T bg2txxrlvm ;
real_T gm5iqrsymu ; real_T nwlxtpgtgk ; real_T gd4laa4feb ; real_T nqvlxtcqv3
; real_T fndb2brp1l ; real_T nv44eqthra ; real_T nyrhlyopms ; real_T
cxtj11s55z ; real_T ehadcyaees ; real_T dgwu2bgatn ; real_T ggjcmhsrmo ;
real_T dw2opfbpq2 ; real_T iwolbcbvo0 ; real_T ix5bvh54da ; real_T da5ubbeqhs
; real_T krepniuh0b ; real_T kjxmjp3orc ; real_T gledeu45c1 ; real_T
g1lkjatm4p ; real_T cs2mamav0r ; real_T lyfoylyp5z ; real_T c31qtbt14e ;
real_T d0jgzgn4lu ; real_T ltkpug5sy2 ; real_T mv4nouezpl ; real_T l3ukeljw21
; real_T magrozyij1 ; real_T lueloh21s1 ; real_T dbyhcjasi5 ; real_T
cnlosicvyb ; real_T jnl1six2fc ; real_T lehjmsphyv ; real_T ee4q0hpg5w ;
real_T nueeodfbss ; real_T c2ou34j4st ; real_T pjv4cmmakb ; real_T gn1w3zxddg
; real_T bkgm0k2m5i ; real_T hrngp2ds5w ; } X ; typedef struct { real_T
lmp1jlws1q ; real_T dvsvf5wljn ; real_T pjq3y0vbqc ; real_T muultjrzks ;
real_T l2m5ltsubp ; real_T oqbdmgd0ck ; real_T nw0blrtueg ; real_T b5w4zdghl5
; real_T d1vv0rjnt2 ; real_T l3pq51pl0v ; real_T derj2qzpjf ; real_T
ig1kllb5t1 ; real_T m33tqgudkc ; real_T ou0e404rmu ; real_T cxw3eeosyw ;
real_T ev5tiefchl ; real_T ifchgpw41h ; real_T nwkcijvubd ; real_T lua2wyjxlz
; real_T hoe45xg5l1 ; real_T pvts5x1qi0 ; real_T dfdozw0qju ; real_T
pwzhugspii ; real_T bw5bxl3emz ; real_T la0kq4504w ; real_T al3wmpyaa1 ;
real_T nt03o0lbau ; real_T mjgjmcyafa ; real_T ju3cx4z2kg ; real_T mxt02um1sk
; real_T h5bds2funr ; real_T obu1t4d3fm ; real_T dxslzurzcr ; real_T
cgymruyhg4 ; real_T mfkdlg3wcn ; real_T mhgsfskkwq ; real_T gzcp4vv3sa ;
real_T h0r5nq1np1 ; real_T ozr1b5mdiv ; real_T k2dc21zk5j ; real_T czddacw2q5
; real_T dkzvp0zlco ; real_T j3b1dd4rrz ; real_T lwywyqed5i ; real_T
b5odf1vso5 ; real_T o1gw4caqxa ; real_T gzyfptfl3t ; real_T m5y0b1f4ds ;
real_T li3l2cwoj1 ; real_T lbblib2jj3 ; real_T ixqfbvvrqq ; real_T irzbjopfdt
; real_T e2ng2yt2cq ; real_T ewln0r2fz3 ; real_T ngyoiwrxa1 ; real_T
frk2bafzxw ; real_T f3kt0qvhxp ; real_T d1dqkqdeq2 ; real_T pviwr55jyx ;
real_T ctyxh2raia ; real_T ipbbbqqcmt ; real_T lu2ujrk2ss ; real_T lhu2d3f2ic
; real_T bvjygku5w3 ; real_T awijrgo5wm ; real_T huag3gyiah ; real_T
l4w55j32bm ; real_T gywjrxv55s ; real_T etb0rkmw41 ; real_T j21i42iaxm ;
real_T lmhoguyign ; real_T kfxedfgmub ; real_T jdy4bhdf2w ; real_T ik24wcoua3
; real_T hkz0a2vtcs ; real_T do2eu3ewib ; real_T o0mzlxndfd ; real_T
muzcxum1ac ; real_T lsji1c25s5 ; real_T nwyypn00k3 ; real_T adlq2c0wq1 ;
real_T i4cw2jspdx ; real_T of00aunqxu ; real_T lwagfwnwie ; real_T pjvklj4szi
; real_T acnidcfmgv ; real_T lijh2swrpw ; real_T jppvzfe0an ; real_T
g5w4koxf0l ; real_T fow5rkn0z1 ; real_T lgduvgp5n3 ; real_T fypx2u0nu4 ;
real_T fy55ynfqoc ; real_T fmatfc2vzb ; real_T ghwaun2q4z ; real_T grsxmlptlz
; real_T lhv23sybik ; real_T phxnmexg5m ; real_T eon1excs1b ; real_T
b0h1snyqm3 ; real_T dey1qh2tff ; real_T kctwtdh12v ; real_T kjzjtgp2iz ;
real_T flstcqpmom ; real_T o5c0ah2apc ; real_T o0rr4etxc1 ; real_T jwvpzqa0r5
; real_T n3lfk4kfkd ; real_T kxrzrzcrxq ; real_T kjlmncixpi ; real_T
j3ycbllr1p ; real_T eqelhjati2 ; real_T jqtzx31zch ; real_T fhtwvoc0b2 ;
real_T jf4ybj03im ; real_T la1zyfaj31 ; real_T bg2txxrlvm ; real_T gm5iqrsymu
; real_T nwlxtpgtgk ; real_T gd4laa4feb ; real_T nqvlxtcqv3 ; real_T
fndb2brp1l ; real_T nv44eqthra ; real_T nyrhlyopms ; real_T cxtj11s55z ;
real_T ehadcyaees ; real_T dgwu2bgatn ; real_T ggjcmhsrmo ; real_T dw2opfbpq2
; real_T iwolbcbvo0 ; real_T ix5bvh54da ; real_T da5ubbeqhs ; real_T
krepniuh0b ; real_T kjxmjp3orc ; real_T gledeu45c1 ; real_T g1lkjatm4p ;
real_T cs2mamav0r ; real_T lyfoylyp5z ; real_T c31qtbt14e ; real_T d0jgzgn4lu
; real_T ltkpug5sy2 ; real_T mv4nouezpl ; real_T l3ukeljw21 ; real_T
magrozyij1 ; real_T lueloh21s1 ; real_T dbyhcjasi5 ; real_T cnlosicvyb ;
real_T jnl1six2fc ; real_T lehjmsphyv ; real_T ee4q0hpg5w ; real_T nueeodfbss
; real_T c2ou34j4st ; real_T pjv4cmmakb ; real_T gn1w3zxddg ; real_T
bkgm0k2m5i ; real_T hrngp2ds5w ; } XDot ; typedef struct { boolean_T
lmp1jlws1q ; boolean_T dvsvf5wljn ; boolean_T pjq3y0vbqc ; boolean_T
muultjrzks ; boolean_T l2m5ltsubp ; boolean_T oqbdmgd0ck ; boolean_T
nw0blrtueg ; boolean_T b5w4zdghl5 ; boolean_T d1vv0rjnt2 ; boolean_T
l3pq51pl0v ; boolean_T derj2qzpjf ; boolean_T ig1kllb5t1 ; boolean_T
m33tqgudkc ; boolean_T ou0e404rmu ; boolean_T cxw3eeosyw ; boolean_T
ev5tiefchl ; boolean_T ifchgpw41h ; boolean_T nwkcijvubd ; boolean_T
lua2wyjxlz ; boolean_T hoe45xg5l1 ; boolean_T pvts5x1qi0 ; boolean_T
dfdozw0qju ; boolean_T pwzhugspii ; boolean_T bw5bxl3emz ; boolean_T
la0kq4504w ; boolean_T al3wmpyaa1 ; boolean_T nt03o0lbau ; boolean_T
mjgjmcyafa ; boolean_T ju3cx4z2kg ; boolean_T mxt02um1sk ; boolean_T
h5bds2funr ; boolean_T obu1t4d3fm ; boolean_T dxslzurzcr ; boolean_T
cgymruyhg4 ; boolean_T mfkdlg3wcn ; boolean_T mhgsfskkwq ; boolean_T
gzcp4vv3sa ; boolean_T h0r5nq1np1 ; boolean_T ozr1b5mdiv ; boolean_T
k2dc21zk5j ; boolean_T czddacw2q5 ; boolean_T dkzvp0zlco ; boolean_T
j3b1dd4rrz ; boolean_T lwywyqed5i ; boolean_T b5odf1vso5 ; boolean_T
o1gw4caqxa ; boolean_T gzyfptfl3t ; boolean_T m5y0b1f4ds ; boolean_T
li3l2cwoj1 ; boolean_T lbblib2jj3 ; boolean_T ixqfbvvrqq ; boolean_T
irzbjopfdt ; boolean_T e2ng2yt2cq ; boolean_T ewln0r2fz3 ; boolean_T
ngyoiwrxa1 ; boolean_T frk2bafzxw ; boolean_T f3kt0qvhxp ; boolean_T
d1dqkqdeq2 ; boolean_T pviwr55jyx ; boolean_T ctyxh2raia ; boolean_T
ipbbbqqcmt ; boolean_T lu2ujrk2ss ; boolean_T lhu2d3f2ic ; boolean_T
bvjygku5w3 ; boolean_T awijrgo5wm ; boolean_T huag3gyiah ; boolean_T
l4w55j32bm ; boolean_T gywjrxv55s ; boolean_T etb0rkmw41 ; boolean_T
j21i42iaxm ; boolean_T lmhoguyign ; boolean_T kfxedfgmub ; boolean_T
jdy4bhdf2w ; boolean_T ik24wcoua3 ; boolean_T hkz0a2vtcs ; boolean_T
do2eu3ewib ; boolean_T o0mzlxndfd ; boolean_T muzcxum1ac ; boolean_T
lsji1c25s5 ; boolean_T nwyypn00k3 ; boolean_T adlq2c0wq1 ; boolean_T
i4cw2jspdx ; boolean_T of00aunqxu ; boolean_T lwagfwnwie ; boolean_T
pjvklj4szi ; boolean_T acnidcfmgv ; boolean_T lijh2swrpw ; boolean_T
jppvzfe0an ; boolean_T g5w4koxf0l ; boolean_T fow5rkn0z1 ; boolean_T
lgduvgp5n3 ; boolean_T fypx2u0nu4 ; boolean_T fy55ynfqoc ; boolean_T
fmatfc2vzb ; boolean_T ghwaun2q4z ; boolean_T grsxmlptlz ; boolean_T
lhv23sybik ; boolean_T phxnmexg5m ; boolean_T eon1excs1b ; boolean_T
b0h1snyqm3 ; boolean_T dey1qh2tff ; boolean_T kctwtdh12v ; boolean_T
kjzjtgp2iz ; boolean_T flstcqpmom ; boolean_T o5c0ah2apc ; boolean_T
o0rr4etxc1 ; boolean_T jwvpzqa0r5 ; boolean_T n3lfk4kfkd ; boolean_T
kxrzrzcrxq ; boolean_T kjlmncixpi ; boolean_T j3ycbllr1p ; boolean_T
eqelhjati2 ; boolean_T jqtzx31zch ; boolean_T fhtwvoc0b2 ; boolean_T
jf4ybj03im ; boolean_T la1zyfaj31 ; boolean_T bg2txxrlvm ; boolean_T
gm5iqrsymu ; boolean_T nwlxtpgtgk ; boolean_T gd4laa4feb ; boolean_T
nqvlxtcqv3 ; boolean_T fndb2brp1l ; boolean_T nv44eqthra ; boolean_T
nyrhlyopms ; boolean_T cxtj11s55z ; boolean_T ehadcyaees ; boolean_T
dgwu2bgatn ; boolean_T ggjcmhsrmo ; boolean_T dw2opfbpq2 ; boolean_T
iwolbcbvo0 ; boolean_T ix5bvh54da ; boolean_T da5ubbeqhs ; boolean_T
krepniuh0b ; boolean_T kjxmjp3orc ; boolean_T gledeu45c1 ; boolean_T
g1lkjatm4p ; boolean_T cs2mamav0r ; boolean_T lyfoylyp5z ; boolean_T
c31qtbt14e ; boolean_T d0jgzgn4lu ; boolean_T ltkpug5sy2 ; boolean_T
mv4nouezpl ; boolean_T l3ukeljw21 ; boolean_T magrozyij1 ; boolean_T
lueloh21s1 ; boolean_T dbyhcjasi5 ; boolean_T cnlosicvyb ; boolean_T
jnl1six2fc ; boolean_T lehjmsphyv ; boolean_T ee4q0hpg5w ; boolean_T
nueeodfbss ; boolean_T c2ou34j4st ; boolean_T pjv4cmmakb ; boolean_T
gn1w3zxddg ; boolean_T bkgm0k2m5i ; boolean_T hrngp2ds5w ; } XDis ; typedef
struct { rtwCAPI_ModelMappingInfo mmi ; } DataMapInfo ; struct P_ { real_T
PIDController2_D ; real_T PIDController_D ; real_T PIDController1_D ; real_T
PIDController2_D_kj3bnjvbc0 ; real_T PIDController_D_d15uoiwa50 ; real_T
PIDController1_D_ec5g1qhnwo ; real_T PIDController2_D_nscrao354l ; real_T
PIDController2_D_ivk4ytgd1g ; real_T PIDController_D_os4cpveuwu ; real_T
PIDController1_D_gdgmituo3o ; real_T PIDController2_D_dfmo4lhky4 ; real_T
PIDController_D_fxccfyhj1s ; real_T PIDController1_D_lmix2bvziz ; real_T
PIDController2_D_hutlxbnxkq ; real_T PIDController_D_bnpdwpgf2r ; real_T
PIDController1_D_ipmgxlwt3s ; real_T PIDController2_D_g4w5zspqgm ; real_T
PIDController_D_jkhgbbl1en ; real_T PIDController1_D_ak3x55jqvu ; real_T
PIDController2_D_jd4dbxg05c ; real_T PIDController_D_nfc3vqrqbv ; real_T
PIDController1_D_bamu5r44om ; real_T PIDController2_D_j3uc0srlnp ; real_T
PIDController_D_j25iff5xf3 ; real_T PIDController1_D_f4uld0erm5 ; real_T
PIDController2_D_gdgwgqzkmc ; real_T PIDController_D_a55inr2dcg ; real_T
PIDController1_D_mqahdjnni4 ; real_T PIDController2_D_mmcjie0otp ; real_T
PIDController_D_en2uccolf0 ; real_T PIDController1_D_mndun3qwqh ; real_T
PIDController2_D_hnorqfxruw ; real_T PIDController1_D_f0yhnp32nq ; real_T
PIDController_D_n0ajifbrzl ; real_T PIDController1_D_lllqr1ay3g ; real_T
PIDController_D_n1dlg551nt ; real_T PIDController1_D_cclgetqhq2 ; real_T
PIDController2_D_n2borjb1u3 ; real_T PIDController_D_iafklpacew ; real_T
PIDController1_D_m0zns5ehtd ; real_T PIDController_D_nue2ikh2gu ; real_T
PIDController_I ; real_T PIDController1_I ; real_T PIDController2_I ; real_T
PIDController_I_iwejwkej3m ; real_T PIDController1_I_ggyoqvdi4k ; real_T
PIDController2_I_b5qoeiglnj ; real_T PIDController_I_jo0orsgtwc ; real_T
PIDController1_I_eexygojq0h ; real_T PIDController2_I_pm4rorrqog ; real_T
PIDController_I_jljb1hxi4k ; real_T PIDController1_I_kk4n15ernz ; real_T
PIDController2_I_b31xx2z4ae ; real_T PIDController_I_ctexg1ydk0 ; real_T
PIDController1_I_g3r3n5sujh ; real_T PIDController2_I_k3epcgcoj0 ; real_T
PIDController_I_dlmuknchuh ; real_T PIDController1_I_hetisvzriu ; real_T
PIDController2_I_ndlknojsy1 ; real_T PIDController_I_idhehcr2gu ; real_T
PIDController1_I_ardc14cci2 ; real_T PIDController2_I_njw5wvp51l ; real_T
PIDController_I_ke1xzatdh3 ; real_T PIDController1_I_jtbtiij5aw ; real_T
PIDController2_I_by2qqgl4bd ; real_T PIDController_I_ipvz3he1ra ; real_T
PIDController1_I_fjas3a3wnf ; real_T PIDController2_I_ipt1mcpolc ; real_T
PIDController_I_alqsqkfago ; real_T PIDController1_I_ausr5ezv4y ; real_T
PIDController2_I_d2jywvs4bf ; real_T PIDController1_I_juvnexjmae ; real_T
PIDController_I_l4hu2imemx ; real_T PIDController1_I_npnz5gp3zv ; real_T
PIDController2_I_edyryjr1ey ; real_T PIDController_I_p4emzoziav ; real_T
PIDController1_I_kn5hf4wlm1 ; real_T PIDController2_I_eda3w3pnmo ; real_T
PIDController_I_ka53buzhsv ; real_T PIDController1_I_dhlda2mmxa ; real_T
PIDController2_I_bl0dg5wd5d ; real_T PIDController_I_fb0qkr15vv ; real_T
PIDController2_InitialConditionForFilter ; real_T
PIDController_InitialConditionForFilter ; real_T
PIDController1_InitialConditionForFilter ; real_T
PIDController2_InitialConditionForFilter_bihta5lqek ; real_T
PIDController_InitialConditionForFilter_lmhtoe3njt ; real_T
PIDController1_InitialConditionForFilter_bs1b4aw1p1 ; real_T
PIDController2_InitialConditionForFilter_en0izqklf0 ; real_T
PIDController2_InitialConditionForFilter_jwfobmpi1c ; real_T
PIDController_InitialConditionForFilter_pi2squh4ih ; real_T
PIDController1_InitialConditionForFilter_kmsdvwdf3m ; real_T
PIDController2_InitialConditionForFilter_g0oftxmj3a ; real_T
PIDController_InitialConditionForFilter_hp3eqk4ff5 ; real_T
PIDController1_InitialConditionForFilter_pajeulinwu ; real_T
PIDController2_InitialConditionForFilter_ajsr1gcclx ; real_T
PIDController_InitialConditionForFilter_jdtq01u0hx ; real_T
PIDController1_InitialConditionForFilter_e5pnbc3vtr ; real_T
PIDController2_InitialConditionForFilter_dlk0zcvwml ; real_T
PIDController_InitialConditionForFilter_cnipdysl5i ; real_T
PIDController1_InitialConditionForFilter_psmuwl2ggt ; real_T
PIDController2_InitialConditionForFilter_p4g1s3metf ; real_T
PIDController_InitialConditionForFilter_m4mghgay1j ; real_T
PIDController1_InitialConditionForFilter_kb2kl5oeqz ; real_T
PIDController2_InitialConditionForFilter_pd4m1hvilk ; real_T
PIDController_InitialConditionForFilter_kgltz54nbv ; real_T
PIDController1_InitialConditionForFilter_axd024yf43 ; real_T
PIDController2_InitialConditionForFilter_eqcztveeov ; real_T
PIDController_InitialConditionForFilter_pahdswfqmx ; real_T
PIDController1_InitialConditionForFilter_hdfns1sxqq ; real_T
PIDController2_InitialConditionForFilter_gqusy3k4kp ; real_T
PIDController_InitialConditionForFilter_cpdt0v4ia1 ; real_T
PIDController1_InitialConditionForFilter_ia5a3zow3c ; real_T
PIDController2_InitialConditionForFilter_abjibwbfny ; real_T
PIDController_InitialConditionForFilter_alfqriok00 ; real_T
PIDController1_InitialConditionForFilter_edcjoi3q45 ; real_T
PIDController_InitialConditionForFilter_o14mxov0mo ; real_T
PIDController1_InitialConditionForFilter_fwycow5gb3 ; real_T
PIDController_InitialConditionForFilter_h0gegwcbv4 ; real_T
PIDController1_InitialConditionForFilter_d52pz1y1uv ; real_T
PIDController2_InitialConditionForFilter_mj1tjascp5 ; real_T
PIDController_InitialConditionForFilter_j3evzf1gez ; real_T
PIDController1_InitialConditionForFilter_hl4ak4lbqb ; real_T
PIDController2_InitialConditionForIntegrator ; real_T
PIDController_InitialConditionForIntegrator ; real_T
PIDController1_InitialConditionForIntegrator ; real_T
PIDController2_InitialConditionForIntegrator_c5bt5fi51p ; real_T
PIDController_InitialConditionForIntegrator_cjvlfsjldh ; real_T
PIDController1_InitialConditionForIntegrator_dveacu2tra ; real_T
PIDController2_InitialConditionForIntegrator_hw4t2ehg5d ; real_T
PIDController2_InitialConditionForIntegrator_lqya4mqhuz ; real_T
PIDController_InitialConditionForIntegrator_ngy0ewyeg5 ; real_T
PIDController1_InitialConditionForIntegrator_g32cn1dkfm ; real_T
PIDController2_InitialConditionForIntegrator_pbsngr4knz ; real_T
PIDController_InitialConditionForIntegrator_avsteu0oht ; real_T
PIDController1_InitialConditionForIntegrator_dvkc14r1w0 ; real_T
PIDController2_InitialConditionForIntegrator_dsfjn3toh3 ; real_T
PIDController_InitialConditionForIntegrator_ahqtbrbvjw ; real_T
PIDController1_InitialConditionForIntegrator_o5oicxyhtt ; real_T
PIDController2_InitialConditionForIntegrator_azyc2l4qmp ; real_T
PIDController_InitialConditionForIntegrator_i0pcwuwujv ; real_T
PIDController1_InitialConditionForIntegrator_pn3q4lemuu ; real_T
PIDController2_InitialConditionForIntegrator_osgdcreqgv ; real_T
PIDController_InitialConditionForIntegrator_lcb4fxxjq2 ; real_T
PIDController1_InitialConditionForIntegrator_nz4dig1fgw ; real_T
PIDController2_InitialConditionForIntegrator_k1rnok2v3s ; real_T
PIDController_InitialConditionForIntegrator_i5kl1tulff ; real_T
PIDController1_InitialConditionForIntegrator_iw4k32gvre ; real_T
PIDController2_InitialConditionForIntegrator_krl2pziuvw ; real_T
PIDController_InitialConditionForIntegrator_lcvuquuzji ; real_T
PIDController1_InitialConditionForIntegrator_ch0immbnrm ; real_T
PIDController2_InitialConditionForIntegrator_muqkshfigt ; real_T
PIDController_InitialConditionForIntegrator_f3bhxtqksc ; real_T
PIDController1_InitialConditionForIntegrator_hlkt1bv1hz ; real_T
PIDController2_InitialConditionForIntegrator_pmy2x4di4c ; real_T
PIDController_InitialConditionForIntegrator_oha42fu24c ; real_T
PIDController1_InitialConditionForIntegrator_h55owygxwq ; real_T
PIDController_InitialConditionForIntegrator_dochlmuieg ; real_T
PIDController1_InitialConditionForIntegrator_mfds2g0sdm ; real_T
PIDController_InitialConditionForIntegrator_eeeasmnvlu ; real_T
PIDController1_InitialConditionForIntegrator_mjg4ehekhg ; real_T
PIDController2_InitialConditionForIntegrator_hbrtunelxg ; real_T
PIDController_InitialConditionForIntegrator_g04d5mrrz5 ; real_T
PIDController1_InitialConditionForIntegrator_c4jhblkgrn ; real_T _Ixx ;
real_T u_Ixx ; real_T u_Ixx_kmwcqzgly3 ; real_T u_Ixx_pihstiyd01 ; real_T
u_Ixx_dvy1soow50 ; real_T u_Ixx_joq3szosob ; real_T Quadrotor1_Ixx ; real_T
Quadrotor2_Ixx ; real_T Quadrotor3_Ixx ; real_T Quadrotor_Ixx ; real_T
Quadrotor1_Ixx_gja45mis01 ; real_T Quadrotor2_Ixx_aoohkqt1h3 ; real_T _Iyy ;
real_T u_Iyy ; real_T u_Iyy_hbpkv0uula ; real_T u_Iyy_c1lnfcrzch ; real_T
u_Iyy_gcgfjsioj0 ; real_T u_Iyy_avtouev4uw ; real_T Quadrotor1_Iyy ; real_T
Quadrotor2_Iyy ; real_T Quadrotor3_Iyy ; real_T Quadrotor_Iyy ; real_T
Quadrotor1_Iyy_go5t3hyvk4 ; real_T Quadrotor2_Iyy_n3rhz1tmo1 ; real_T _Izz ;
real_T u_Izz ; real_T u_Izz_apevdj43i0 ; real_T u_Izz_kun2sqo1kd ; real_T
u_Izz_ebnkzvnqgi ; real_T u_Izz_nd4b3hpkmx ; real_T Quadrotor1_Izz ; real_T
Quadrotor2_Izz ; real_T Quadrotor3_Izz ; real_T Quadrotor_Izz ; real_T
Quadrotor1_Izz_g5r1ijlx4u ; real_T Quadrotor2_Izz_g5qpxysxej ; real_T
PIDController2_N ; real_T PIDController_N ; real_T PIDController1_N ; real_T
PIDController2_N_akbmimslr4 ; real_T PIDController_N_fj1olopwer ; real_T
PIDController1_N_n0m4mdlpuq ; real_T PIDController2_N_fv1xb02dkc ; real_T
PIDController2_N_b2cjespzjz ; real_T PIDController_N_gwi2qcwymh ; real_T
PIDController1_N_mhmwfw4hux ; real_T PIDController2_N_mpslhyucvp ; real_T
PIDController_N_m5rsvcxufh ; real_T PIDController1_N_car1jg421l ; real_T
PIDController2_N_hk3wqjttfe ; real_T PIDController_N_nq5smeuvru ; real_T
PIDController1_N_ju5pdg3n40 ; real_T PIDController2_N_gwanukygue ; real_T
PIDController_N_bgper011ra ; real_T PIDController1_N_gfjurlmhit ; real_T
PIDController2_N_lijdwwumlg ; real_T PIDController_N_fbnnaabg4e ; real_T
PIDController1_N_la5vcck0qb ; real_T PIDController2_N_p1gigoimhs ; real_T
PIDController_N_f1gx0hhzn2 ; real_T PIDController1_N_alytnhrrnb ; real_T
PIDController2_N_kspzcbkt2u ; real_T PIDController_N_n1mma2zzum ; real_T
PIDController1_N_fadqx0c2zi ; real_T PIDController2_N_jtg1f1vkx4 ; real_T
PIDController_N_d4mtfv0ek2 ; real_T PIDController1_N_it2rbpjfrk ; real_T
PIDController2_N_i4bf0y2l3i ; real_T PIDController_N_pdt2hohbcl ; real_T
PIDController1_N_ceq3duwmmd ; real_T PIDController_N_j1rqxncrvn ; real_T
PIDController1_N_kwhnf3hzry ; real_T PIDController_N_ktqb1csp5j ; real_T
PIDController1_N_kjcbsdgiu4 ; real_T PIDController2_N_oqf2t3gvk0 ; real_T
PIDController_N_lpv1bmh4cb ; real_T PIDController1_N_gcwx5scc5y ; real_T
PIDController2_P ; real_T PIDController_P ; real_T PIDController1_P ; real_T
PIDController2_P_j2giwegaza ; real_T PIDController_P_gbmiz0skct ; real_T
PIDController1_P_aq34folxbs ; real_T PIDController2_P_ol1hffxhtt ; real_T
PIDController2_P_owpotzqpw4 ; real_T PIDController_P_ju5f4j1frg ; real_T
PIDController1_P_c4vjhd1ziq ; real_T PIDController2_P_dlj4ikvxns ; real_T
PIDController_P_dusajknfah ; real_T PIDController1_P_ehab1cvw21 ; real_T
PIDController2_P_erzbkakobn ; real_T PIDController_P_l3dvp4gzhj ; real_T
PIDController1_P_oaxjkkp4ew ; real_T PIDController2_P_kp1lf3scwu ; real_T
PIDController_P_bdo03lnhov ; real_T PIDController1_P_m1rpi1feq5 ; real_T
PIDController2_P_evzc3v5wmi ; real_T PIDController_P_kxl1kqc3oq ; real_T
PIDController1_P_jpyfdfnh5b ; real_T PIDController2_P_co0pzormut ; real_T
PIDController_P_gyvdwyvumv ; real_T PIDController1_P_dcdjyqoctb ; real_T
PIDController2_P_pxk5annt0u ; real_T PIDController_P_og1ahp3bam ; real_T
PIDController1_P_fxqhy440cw ; real_T PIDController2_P_fj0sy20p12 ; real_T
PIDController_P_lbmuewtbrb ; real_T PIDController1_P_kwxf55bpha ; real_T
PIDController2_P_chxrbh4rsl ; real_T PIDController1_P_dwv3e2afl1 ; real_T
PIDController_P_gglswmusll ; real_T PIDController_P_lyogmo2kkp ; real_T
PIDController2_P_g3eqpktwgi ; real_T PIDController_P_bkixrkfemw ; real_T
PIDController_P_jiphsdjxxr ; real_T _g ; real_T u_g ; real_T u_g_afxrjuatq2 ;
real_T uPID_g ; real_T Quadrotor1_g ; real_T Quadrotor2_g ; real_T
Quadrotor3_g ; real_T _g_itsbn0zy4d ; real_T u_g_mh2axwg4d0 ; real_T
Quadrotor_g ; real_T Quadrotor1_g_ddytjpfru3 ; real_T Quadrotor2_g_eqcrrzybmj
; real_T _m ; real_T fantheta1_m ; real_T _m_ezmi533ezn ; real_T fantheta3_m
; real_T uPID_m ; real_T fantheta2_m ; real_T u_m ; real_T fantheta5_m ;
real_T u_m_koewvqbti3 ; real_T fantheta_m ; real_T _m_acbzxt22m1 ; real_T
fantheta4_m ; real_T u_m_p214vildz5 ; real_T Switch3_Threshold ; real_T
Switch3_Threshold_oorgqpvcvo ; real_T Switch3_Threshold_nk3dncxebe ; real_T
Integrator1_IC ; real_T Saturation_UpperSat ; real_T Saturation_LowerSat ;
real_T Integrator1_IC_njked3y5ka ; real_T Saturation1_UpperSat ; real_T
Saturation1_LowerSat ; real_T Integrator5_IC ; real_T
Integrator1_IC_heq4ih3sop ; real_T Integrator1_IC_ggm3f24kg1 ; real_T
Integrator_IC ; real_T Integrator_IC_lqzn20lau3 ; real_T
Integrator1_IC_mm1y0ejde0 ; real_T Saturation2_UpperSat ; real_T
Saturation2_LowerSat ; real_T Integrator3_IC ; real_T
Integrator3_IC_nnhhmqfjhs ; real_T Integrator2_IC ; real_T
Integrator2_IC_onz01dod3h ; real_T Integrator4_IC ; real_T
Integrator1_IC_hluxpggxgx ; real_T Saturation_UpperSat_ha4sihnonx ; real_T
Saturation_LowerSat_hvr4bzptww ; real_T Integrator1_IC_lmb1knnxne ; real_T
Saturation1_UpperSat_hb4te1hlrm ; real_T Saturation1_LowerSat_bckpxbzwol ;
real_T Saturation_UpperSat_hwp4xnffla ; real_T Saturation_LowerSat_psalob5khl
; real_T Saturation1_UpperSat_pb2v3x1tuf ; real_T
Saturation1_LowerSat_egd2dbjq3l ; real_T Integrator5_IC_if0dkkc4sn ; real_T
Integrator1_IC_oayqv41ri2 ; real_T Saturation2_UpperSat_eydgfhthvi ; real_T
Saturation2_LowerSat_pvud2psr4g ; real_T SineWave_Amp ; real_T SineWave_Bias
; real_T SineWave_Freq ; real_T SineWave_Phase ; real_T
Integrator1_IC_plyhjc2cip ; real_T Saturation_UpperSat_n5hle3tqlr ; real_T
Saturation_LowerSat_a0f33ks5st ; real_T Integrator1_IC_eq0rr2lar5 ; real_T
Saturation1_UpperSat_jnqdbyjo0h ; real_T Saturation1_LowerSat_nxi22dnqkb ;
real_T Integrator5_IC_bljzdd2dwj ; real_T Integrator1_IC_od5gppxfje ; real_T
Integrator1_IC_ekxpqxuslq ; real_T Integrator1_IC_ccuwbvxd2m ; real_T
Saturation2_UpperSat_gp5eczxqky ; real_T Saturation2_LowerSat_hg04d0ium1 ;
real_T Integrator3_IC_eunscfkrjo ; real_T Integrator3_IC_khpwka435t ; real_T
Gain2_Gain ; real_T Integrator5_IC_dkcmnnrtrg ; real_T
Integrator1_IC_c5keywtevf ; real_T Saturation_UpperSat_iukxjbe5ft ; real_T
Saturation_LowerSat_ilaytmc202 ; real_T Integrator1_IC_bk1luecfrf ; real_T
Saturation1_UpperSat_pttmxhpea2 ; real_T Saturation1_LowerSat_fobtnnimlk ;
real_T Saturation_UpperSat_gvwpirmxca ; real_T Saturation_LowerSat_ndrcqwixdd
; real_T Saturation1_UpperSat_kch2yvd5hq ; real_T
Saturation1_LowerSat_g2baopq4vx ; real_T Integrator_IC_kgvonwyhc0 ; real_T
Integrator1_IC_hmuy2i0cl2 ; real_T Saturation2_UpperSat_k3zxirjbnn ; real_T
Saturation2_LowerSat_n1oahitiww ; real_T Integrator2_IC_cjntt1wjkx ; real_T
SineWave1_Amp ; real_T SineWave1_Bias ; real_T SineWave1_Freq ; real_T
SineWave1_Phase ; real_T Integrator4_IC_hweooieypn ; real_T SineWave3_Amp ;
real_T SineWave3_Bias ; real_T SineWave3_Freq ; real_T SineWave3_Phase ;
real_T SineWave4_Amp ; real_T SineWave4_Bias ; real_T SineWave4_Freq ; real_T
SineWave4_Phase ; real_T Gain3_Gain ; real_T SineWave5_Amp ; real_T
SineWave5_Bias ; real_T SineWave5_Freq ; real_T SineWave5_Phase ; real_T
Saturation_UpperSat_pub1swf5to ; real_T Saturation_LowerSat_f1yfb1tnps ;
real_T Saturation1_UpperSat_a1b0m21fzl ; real_T
Saturation1_LowerSat_oipcr5rbvx ; real_T Integrator1_IC_gi4giafbgs ; real_T
Integrator1_IC_ief3n0zhlq ; real_T Integrator3_IC_fuyeuczoy3 ; real_T
Integrator3_IC_gjlkpxvur3 ; real_T Integrator1_IC_pvv3oz1agd ; real_T
Saturation_UpperSat_o3tbzyjvoe ; real_T Saturation_LowerSat_d2hlbm4xvg ;
real_T Integrator1_IC_p1wk5q0cdt ; real_T Saturation1_UpperSat_is1gig25ew ;
real_T Saturation1_LowerSat_mk2outamb2 ; real_T Integrator5_IC_jrqdwzs0tm ;
real_T Integrator5_IC_dykywbkzns ; real_T Gain4_Gain ; real_T
Integrator_IC_a4ahepwtbc ; real_T Integrator_IC_mdcyvvmror ; real_T
Gain1_Gain ; real_T _Gain ; real_T u_Gain ; real_T Integrator1_IC_llubqre4or
; real_T Saturation2_UpperSat_ojz25b4xbk ; real_T
Saturation2_LowerSat_niv5szdlmh ; real_T Integrator1_IC_ot5qtskjxx ; real_T
Gain5_Gain ; real_T Integrator2_IC_bmfscpdt33 ; real_T
Integrator2_IC_gbvim2rrir ; real_T Gain2_Gain_onnoorg0uw ; real_T
u_Gain_henc4ux5q3 ; real_T u_Gain_gdlekwegic ; real_T
Integrator4_IC_kdc04fe1mo ; real_T Integrator1_IC_fraig3nxla ; real_T
Saturation_UpperSat_dxx3tvtltv ; real_T Saturation_LowerSat_gbjicm5kkx ;
real_T Integrator1_IC_nt3ac13l2a ; real_T Saturation1_UpperSat_grcsac20ke ;
real_T Saturation1_LowerSat_o23ypqxe3f ; real_T
Saturation_UpperSat_iko2p2vwq2 ; real_T Saturation_LowerSat_ma15asz4j4 ;
real_T Saturation1_UpperSat_mjhh3ki3pa ; real_T
Saturation1_LowerSat_bzmx0c2jc5 ; real_T Gain1_Gain_an1pdnuefr ; real_T
SineWave2_Amp ; real_T SineWave2_Bias ; real_T SineWave2_Freq ; real_T
SineWave2_Phase ; real_T Gain_Gain ; real_T Saturation_UpperSat_ip5m4fy0ed ;
real_T Saturation_LowerSat_j5wcuf0dgd ; real_T Integrator5_IC_kfnpgityuy ;
real_T Integrator1_IC_p4le5tsnjt ; real_T Saturation2_UpperSat_bxhv4xowlg ;
real_T Saturation2_LowerSat_omipxfavcd ; real_T
Saturation1_UpperSat_ilexu3zjfy ; real_T Saturation1_LowerSat_bg51c0dlft ;
real_T SineWave6_Amp ; real_T SineWave6_Bias ; real_T SineWave6_Freq ; real_T
SineWave6_Phase ; real_T SineWave7_Amp ; real_T SineWave7_Bias ; real_T
SineWave7_Freq ; real_T SineWave7_Phase ; real_T Gain5_Gain_h1imr1fczu ;
real_T SineWave8_Amp ; real_T SineWave8_Bias ; real_T SineWave8_Freq ; real_T
SineWave8_Phase ; real_T Gain4_Gain_ggyj03dy1v ; real_T
Saturation_UpperSat_jviycb3be4 ; real_T Saturation_LowerSat_a1fc5tfggf ;
real_T Saturation1_UpperSat_h21ahh0qn3 ; real_T
Saturation1_LowerSat_boiycaf11u ; real_T u_Gain_fpadnqkfdx ; real_T
u_Gain_ljraxbqoqb ; real_T SineWave6_Amp_henxm5i1gd ; real_T
SineWave6_Bias_cnbbxkgu2e ; real_T SineWave6_Freq_mp3q4xahd0 ; real_T
SineWave6_Phase_lspwxraw1u ; real_T Switch4_Threshold ; real_T
Gain4_Gain_imrt3sps2q ; real_T Gain_Gain_ebhlmk5t4x ; real_T
Integrator_IC_dkmzwnjlda ; real_T Integrator_IC_kuhmbxgxyr ; real_T
Integrator_IC_pea4zoukn2 ; real_T SineWave6_Amp_dodybln1ra ; real_T
SineWave6_Bias_h3x4k5vgis ; real_T SineWave6_Freq_lsyxwbjnmq ; real_T
SineWave6_Phase_lxlmjcj12n ; real_T Switch4_Threshold_pct3ktcsxi ; real_T
Gain4_Gain_hvthrgs2u3 ; real_T Gain_Gain_n4w5ypbc00 ; real_T
Integrator_IC_hcxtzvq335 ; real_T Integrator_IC_h2ghob1z1z ; real_T
Integrator_IC_deafmlkoja ; real_T SineWave6_Amp_jsec3i1shb ; real_T
SineWave6_Bias_gnb10sgoal ; real_T SineWave6_Freq_csvujkpg3v ; real_T
SineWave6_Phase_o44bvzhliy ; real_T Switch4_Threshold_mi0yodiqiu ; real_T
Gain4_Gain_nn0z0a2s0s ; real_T Gain_Gain_jqz2vch25q ; real_T
Integrator_IC_d14lb2y2xu ; real_T Integrator_IC_da24xtkiht ; real_T
Integrator_IC_ay1fqjw5cu ; real_T Gain_Gain_awestftebg ; real_T
Integrator4_IC_mfxj3ieh1q ; real_T Integrator_IC_gxj5snzs0v ; real_T
Integrator_IC_mwbhsimjtn ; real_T Integrator_IC_mctvldpkh3 ; real_T
Gain_Gain_lv0lbvfry2 ; real_T Integrator_IC_e2hmrfune1 ; real_T
Integrator2_IC_efpd0r0wwo ; real_T Integrator4_IC_no4dif4d2y ; real_T
Integrator_IC_aondaic4tn ; real_T Integrator_IC_drogpohdrj ; real_T
Integrator_IC_jw0wt3eqo1 ; real_T Gain_Gain_jfxqopldfw ; real_T
Integrator4_IC_igppojxrmq ; real_T Integrator_IC_pxiemqggyu ; real_T
Integrator_IC_pbr1n1noet ; real_T Integrator_IC_nmclzfgmgt ; real_T
Constant13_Value ; real_T Constant16_Value ; real_T Constant17_Value ; real_T
Constant23_Value ; real_T Constant24_Value ; real_T Constant25_Value ; real_T
Constant5_Value ; real_T Constant6_Value ; real_T Constant7_Value ; real_T
psi_Value ; real_T psi1_Value ; real_T psi2_Value ; real_T psi3_Value ;
real_T psi4_Value ; real_T psi5_Value ; real_T Constant1_Value ; real_T
Constant2_Value ; real_T Gain17_Gain ; real_T Constant37_Value ; real_T
Constant38_Value ; real_T Constant3_Value ; real_T Constant4_Value ; real_T
Gain3_Gain_dpwsijto2s ; real_T Constant5_Value_cb4afoixpx ; real_T
Constant6_Value_pb14rkkk1o ; real_T Constant1_Value_anleszyjns ; real_T
Constant18_Value ; real_T Constant19_Value ; real_T Constant20_Value ; real_T
Constant6_Value_ji4ih5grvx ; real_T Constant1_Value_oad0ewdkxh ; real_T
Constant18_Value_jl4j00is31 ; real_T Constant19_Value_khky1eltum ; real_T
Constant20_Value_bifugeoxsi ; real_T Constant6_Value_p3q4n4gg5p ; real_T
Constant1_Value_hif2vfulzb ; real_T Constant18_Value_jy1wqu120y ; real_T
Constant19_Value_nnupnukofe ; real_T Constant20_Value_ieecxe0tzh ; real_T
Constant6_Value_mf2wjkcoe1 ; real_T Constant1_Value_fgyxvvitry ; real_T
Constant1_Value_h3yw0poswh ; real_T Constant1_Value_eatui1s5t2 ; } ; extern
const char * RT_MEMORY_ALLOCATION_ERROR ; extern B rtB ; extern X rtX ;
extern DW rtDW ; extern P rtP ; extern mxArray * mr_SwarmSMC2_GetDWork ( ) ;
extern void mr_SwarmSMC2_SetDWork ( const mxArray * ssDW ) ; extern mxArray *
mr_SwarmSMC2_GetSimStateDisallowedBlocks ( ) ; extern const
rtwCAPI_ModelMappingStaticInfo * SwarmSMC2_GetCAPIStaticMap ( void ) ; extern
SimStruct * const rtS ; extern const int_T gblNumToFiles ; extern const int_T
gblNumFrFiles ; extern const int_T gblNumFrWksBlocks ; extern rtInportTUtable
* gblInportTUtables ; extern const char * gblInportFileName ; extern const
int_T gblNumRootInportBlks ; extern const int_T gblNumModelInputs ; extern
const int_T gblInportDataTypeIdx [ ] ; extern const int_T gblInportDims [ ] ;
extern const int_T gblInportComplex [ ] ; extern const int_T
gblInportInterpoFlag [ ] ; extern const int_T gblInportContinuous [ ] ;
extern const int_T gblParameterTuningTid ; extern DataMapInfo *
rt_dataMapInfoPtr ; extern rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr ;
void MdlOutputs ( int_T tid ) ; void MdlOutputsParameterSampleTime ( int_T
tid ) ; void MdlUpdate ( int_T tid ) ; void MdlTerminate ( void ) ; void
MdlInitializeSizes ( void ) ; void MdlInitializeSampleTimes ( void ) ;
SimStruct * raccel_register_model ( ssExecutionInfo * executionInfo ) ;
#endif
