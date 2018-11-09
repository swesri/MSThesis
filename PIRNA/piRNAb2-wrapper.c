/*#################################################################################################
#piRNAb2-wrapper.c
#Author: Swetha Varadarajan, modified the automaticaly generated code from AlphaZ
#Last Update by Swetha Varadarajan: May 25, 2018
#################################################################################################*/

// This file is generated from test alphabets program by code generator in alphaz
// To compile this code, use -lm option for math library.

// Includes
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>
#include <limits.h>
#include <float.h>
#include <time.h>
#include <sys/time.h>
#include <sys/errno.h>
#include <ctype.h>
#include "energy.h"
#include "alloc.h"

// Common Macros
#define max(x, y)   ((x)>(y) ? (x) : (y))
#define MAX(x, y)	((x)>(y) ? (x) : (y))
#define min(x, y)   ((x)>(y) ? (y) : (x))
#define MIN(x, y)	((x)>(y) ? (y) : (x))
#define CEILD(n,d)  (int)ceil(((double)(n))/((double)(d)))
#define ceild(n,d)  (int)ceil(((double)(n))/((double)(d)))
#define FLOORD(n,d) (int)floor(((double)(n))/((double)(d)))
#define floord(n,d) (int)floor(((double)(n))/((double)(d)))
#define CDIV(x,y)    CEILD((x),(y))
#define div(x,y)    CDIV((x),(y))
#define FDIV(x,y)    FLOORD((x),(y))
#define LB_SHIFT(b,s)  ((int)ceild(b,s) * s)
#define MOD(i,j)   ((i)%(j))
#define mallocCheck(v,s,d) if ((v) == NULL) { printf("Failed to allocate memory for %s : size=%lu\n", "sizeof(d)*(s)", sizeof(d)*(s)); exit(-1); }
#define EPSILON 1.0E-9






//Memory Macros
#define seq0(i) seq0[i]
#define seqr(i) seqr[i]
#define seq01(i) seq01[i]
#define seqr1(i) seqr1[i]
#define Qb0(i,j) Qb0[i][j]
#define Qg0(i,j,d,e) Qg0[i][j][d][e]
#define tempqg0(i,j,d,e) tempqg0[i][j][d][e]
#define tempqgk0(i,j,d,e) tempqgk0[i][j][d][e]
#define tempqgm0(i,j,d,e) tempqgm0[i][j][d][e]
#define Qbr(i,j) Qbr[i][j]
#define Qgr(i,j,d,e) Qgr[i][j][d][e]
#define tempqgr(i,j,d,e) tempqgr[i][j][d][e]
#define tempqgkr(i,j,d,e) tempqgkr[i][j][d][e]
#define tempqgmr(i,j,d,e) tempqgmr[i][j][d][e]
#define Qm00(i,j) Qm00[i][j]
#define Qm10(i,j) Qm10[i][j]
#define Q0r(i,j) Q0r[i][j]
#define Q1r(i,j) Q1r[i][j]
#define Qm0r(i,j) Qm0r[i][j]
#define Qm1r(i,j) Qm1r[i][j]
#define Qgk1(i,j,d,e) Qgk1[i][j][d][e]
#define Qgm1(i,j,d,e) Qgm1[i][j][d][e]
#define Q01(i,j) Q01[i][j]
#define Q11(i,j) Q11[i][j]
#define Qm01(i,j) Qm01[i][j]
#define Qm11(i,j) Qm11[i][j]
#define Qih0(i1,j1,i2,j2) Qih0[i1][j1][i2][j2]
#define Qih1(i1,j1,i2,j2) Qih1[i1][j1][i2][j2]
#define Qihh00(i1,j1,i2,j2) Qihh00[i1][j1][i2][j2]
#define Qihh01(i1,j1,i2,j2) Qihh01[i1][j1][i2][j2]
#define Qihh10(i1,j1,i2,j2) Qihh10[i1][j1][i2][j2]
#define Qihh11(i1,j1,i2,j2) Qihh11[i1][j1][i2][j2]
#define Qihm00(i1,j1,i2,j2) Qihm00[i1][j1][i2][j2]
#define Qihm01(i1,j1,i2,j2) Qihm01[i1][j1][i2][j2]
#define Qihm10(i1,j1,i2,j2) Qihm10[i1][j1][i2][j2]
#define Qihm11(i1,j1,i2,j2) Qihm11[i1][j1][i2][j2]
#define Qgkr(i,j,d,e) Qgkr[i][j][d][e]
#define Qgmr(i,j,d,e) Qgmr[i][j][d][e]
#define Qgk0(i,j,d,e) Qgk0[i][j][d][e]
#define Qgm0(i,j,d,e) Qgm0[i][j][d][e]
#define Q20(i,j) Q20[i][j]
#define Qm20(i,j) Qm20[i][j]
#define Qm2r(i,j) Qm2r[i][j]
#define Q2r(i,j) Q2r[i][j]
#define Q21(i,j) Q21[i][j]
#define tempQiy1(i1,j1,i2,j2) tempQiy1[i1][j1][i2][j2]
#define tempQiy2(i1,j1,i2,j2) tempQiy2[i1][j1][i2][j2]
#define tempQixm001(i1,j1,i2,j2) tempQixm001[i1][j1][i2][j2]
#define tempQixm002(i1,j1,i2,j2) tempQixm002[i1][j1][i2][j2]
#define tempQixm011(i1,j1,i2,j2) tempQixm011[i1][j1][i2][j2]
#define tempQixm012(i1,j1,i2,j2) tempQixm012[i1][j1][i2][j2]
#define tempQixm021(i1,j1,i2,j2) tempQixm021[i1][j1][i2][j2]
#define tempQixm022(i1,j1,i2,j2) tempQixm022[i1][j1][i2][j2]
#define tempQixm101(i1,j1,i2,j2) tempQixm101[i1][j1][i2][j2]
#define tempQixm102(i1,j1,i2,j2) tempQixm102[i1][j1][i2][j2]
#define tempQixm111(i1,j1,i2,j2) tempQixm111[i1][j1][i2][j2]
#define tempQixm112(i1,j1,i2,j2) tempQixm112[i1][j1][i2][j2]
#define tempQixm121(i1,j1,i2,j2) tempQixm121[i1][j1][i2][j2]
#define tempQixm122(i1,j1,i2,j2) tempQixm122[i1][j1][i2][j2]
#define tempQixk001(i1,j1,i2,j2) tempQixk001[i1][j1][i2][j2]
#define tempQixk002(i1,j1,i2,j2) tempQixk002[i1][j1][i2][j2]
#define tempQixk011(i1,j1,i2,j2) tempQixk011[i1][j1][i2][j2]
#define tempQixk012(i1,j1,i2,j2) tempQixk012[i1][j1][i2][j2]
#define tempQixk101(i1,j1,i2,j2) tempQixk101[i1][j1][i2][j2]
#define tempQixk102(i1,j1,i2,j2) tempQixk102[i1][j1][i2][j2]
#define tempQixk111(i1,j1,i2,j2) tempQixk111[i1][j1][i2][j2]
#define tempQixk112(i1,j1,i2,j2) tempQixk112[i1][j1][i2][j2]
#define tempQimm021(i1,j1,i2,j2) tempQimm021[i1][j1][i2][j2]
#define tempQimm022(i1,j1,i2,j2) tempQimm022[i1][j1][i2][j2]
#define tempQimm023(i1,j1,i2,j2) tempQimm023[i1][j1][i2][j2]
#define tempQimm121(i1,j1,i2,j2) tempQimm121[i1][j1][i2][j2]
#define tempQimm122(i1,j1,i2,j2) tempQimm122[i1][j1][i2][j2]
#define tempQimm123(i1,j1,i2,j2) tempQimm123[i1][j1][i2][j2]
#define tempQimm201(i1,j1,i2,j2) tempQimm201[i1][j1][i2][j2]
#define tempQimm202(i1,j1,i2,j2) tempQimm202[i1][j1][i2][j2]
#define tempQimm203(i1,j1,i2,j2) tempQimm203[i1][j1][i2][j2]
#define tempQimm211(i1,j1,i2,j2) tempQimm211[i1][j1][i2][j2]
#define tempQimm212(i1,j1,i2,j2) tempQimm212[i1][j1][i2][j2]
#define tempQimm213(i1,j1,i2,j2) tempQimm213[i1][j1][i2][j2]
#define tempQimm221(i1,j1,i2,j2) tempQimm221[i1][j1][i2][j2]
#define tempQimm222(i1,j1,i2,j2) tempQimm222[i1][j1][i2][j2]
#define tempQimm223(i1,j1,i2,j2) tempQimm223[i1][j1][i2][j2]
#define tempQimk011(i1,j1,i2,j2) tempQimk011[i1][j1][i2][j2]
#define tempQimk012(i1,j1,i2,j2) tempQimk012[i1][j1][i2][j2]
#define tempQimk013(i1,j1,i2,j2) tempQimk013[i1][j1][i2][j2]
#define tempQimk014(i1,j1,i2,j2) tempQimk014[i1][j1][i2][j2]
#define tempQimk111(i1,j1,i2,j2) tempQimk111[i1][j1][i2][j2]
#define tempQimk112(i1,j1,i2,j2) tempQimk112[i1][j1][i2][j2]
#define tempQimk113(i1,j1,i2,j2) tempQimk113[i1][j1][i2][j2]
#define tempQimk114(i1,j1,i2,j2) tempQimk114[i1][j1][i2][j2]
#define tempQimk201(i1,j1,i2,j2) tempQimk201[i1][j1][i2][j2]
#define tempQimk202(i1,j1,i2,j2) tempQimk202[i1][j1][i2][j2]
#define tempQimk203(i1,j1,i2,j2) tempQimk203[i1][j1][i2][j2]
#define tempQimk204(i1,j1,i2,j2) tempQimk204[i1][j1][i2][j2]
#define tempQimk211(i1,j1,i2,j2) tempQimk211[i1][j1][i2][j2]
#define tempQimk212(i1,j1,i2,j2) tempQimk212[i1][j1][i2][j2]
#define tempQimk213(i1,j1,i2,j2) tempQimk213[i1][j1][i2][j2]
#define tempQimk214(i1,j1,i2,j2) tempQimk214[i1][j1][i2][j2]
#define tempQikm101(i1,j1,i2,j2) tempQikm101[i1][j1][i2][j2]
#define tempQikm102(i1,j1,i2,j2) tempQikm102[i1][j1][i2][j2]
#define tempQikm103(i1,j1,i2,j2) tempQikm103[i1][j1][i2][j2]
#define tempQikm104(i1,j1,i2,j2) tempQikm104[i1][j1][i2][j2]
#define tempQikm111(i1,j1,i2,j2) tempQikm111[i1][j1][i2][j2]
#define tempQikm112(i1,j1,i2,j2) tempQikm112[i1][j1][i2][j2]
#define tempQikm113(i1,j1,i2,j2) tempQikm113[i1][j1][i2][j2]
#define tempQikm114(i1,j1,i2,j2) tempQikm114[i1][j1][i2][j2]
#define tempQikm021(i1,j1,i2,j2) tempQikm021[i1][j1][i2][j2]
#define tempQikm022(i1,j1,i2,j2) tempQikm022[i1][j1][i2][j2]
#define tempQikm023(i1,j1,i2,j2) tempQikm023[i1][j1][i2][j2]
#define tempQikm024(i1,j1,i2,j2) tempQikm024[i1][j1][i2][j2]
#define tempQikm121(i1,j1,i2,j2) tempQikm121[i1][j1][i2][j2]
#define tempQikm122(i1,j1,i2,j2) tempQikm122[i1][j1][i2][j2]
#define tempQikm123(i1,j1,i2,j2) tempQikm123[i1][j1][i2][j2]
#define tempQikm124(i1,j1,i2,j2) tempQikm124[i1][j1][i2][j2]
#define tempQikk011(i1,j1,i2,j2) tempQikk011[i1][j1][i2][j2]
#define tempQikk012(i1,j1,i2,j2) tempQikk012[i1][j1][i2][j2]
#define tempQikk013(i1,j1,i2,j2) tempQikk013[i1][j1][i2][j2]
#define tempQikk014(i1,j1,i2,j2) tempQikk014[i1][j1][i2][j2]
#define tempQikk015(i1,j1,i2,j2) tempQikk015[i1][j1][i2][j2]
#define tempQikk101(i1,j1,i2,j2) tempQikk101[i1][j1][i2][j2]
#define tempQikk102(i1,j1,i2,j2) tempQikk102[i1][j1][i2][j2]
#define tempQikk103(i1,j1,i2,j2) tempQikk103[i1][j1][i2][j2]
#define tempQikk104(i1,j1,i2,j2) tempQikk104[i1][j1][i2][j2]
#define tempQikk105(i1,j1,i2,j2) tempQikk105[i1][j1][i2][j2]
#define tempQikk111(i1,j1,i2,j2) tempQikk111[i1][j1][i2][j2]
#define tempQikk112(i1,j1,i2,j2) tempQikk112[i1][j1][i2][j2]
#define tempQikk113(i1,j1,i2,j2) tempQikk113[i1][j1][i2][j2]
#define tempQikk114(i1,j1,i2,j2) tempQikk114[i1][j1][i2][j2]
#define tempQikk115(i1,j1,i2,j2) tempQikk115[i1][j1][i2][j2]
#define tempQiann011(i1,j1,i2,j2) tempQiann011[i1][j1][i2][j2]
#define tempQiann012(i1,j1,i2,j2) tempQiann012[i1][j1][i2][j2]
#define tempQiann013(i1,j1,i2,j2) tempQiann013[i1][j1][i2][j2]
#define tempQiann014(i1,j1,i2,j2) tempQiann014[i1][j1][i2][j2]
#define tempQiann015(i1,j1,i2,j2) tempQiann015[i1][j1][i2][j2]
#define tempQiann016(i1,j1,i2,j2) tempQiann016[i1][j1][i2][j2]
#define tempQiann021(i1,j1,i2,j2) tempQiann021[i1][j1][i2][j2]
#define tempQiann022(i1,j1,i2,j2) tempQiann022[i1][j1][i2][j2]
#define tempQiann023(i1,j1,i2,j2) tempQiann023[i1][j1][i2][j2]
#define tempQiann024(i1,j1,i2,j2) tempQiann024[i1][j1][i2][j2]
#define tempQiann025(i1,j1,i2,j2) tempQiann025[i1][j1][i2][j2]
#define tempQiann026(i1,j1,i2,j2) tempQiann026[i1][j1][i2][j2]
#define tempQiann101(i1,j1,i2,j2) tempQiann101[i1][j1][i2][j2]
#define tempQiann102(i1,j1,i2,j2) tempQiann102[i1][j1][i2][j2]
#define tempQiann103(i1,j1,i2,j2) tempQiann103[i1][j1][i2][j2]
#define tempQiann104(i1,j1,i2,j2) tempQiann104[i1][j1][i2][j2]
#define tempQiann105(i1,j1,i2,j2) tempQiann105[i1][j1][i2][j2]
#define tempQiann106(i1,j1,i2,j2) tempQiann106[i1][j1][i2][j2]
#define tempQiann111(i1,j1,i2,j2) tempQiann111[i1][j1][i2][j2]
#define tempQiann112(i1,j1,i2,j2) tempQiann112[i1][j1][i2][j2]
#define tempQiann113(i1,j1,i2,j2) tempQiann113[i1][j1][i2][j2]
#define tempQiann114(i1,j1,i2,j2) tempQiann114[i1][j1][i2][j2]
#define tempQiann115(i1,j1,i2,j2) tempQiann115[i1][j1][i2][j2]
#define tempQiann116(i1,j1,i2,j2) tempQiann116[i1][j1][i2][j2]
#define tempQiann121(i1,j1,i2,j2) tempQiann121[i1][j1][i2][j2]
#define tempQiann122(i1,j1,i2,j2) tempQiann122[i1][j1][i2][j2]
#define tempQiann123(i1,j1,i2,j2) tempQiann123[i1][j1][i2][j2]
#define tempQiann124(i1,j1,i2,j2) tempQiann124[i1][j1][i2][j2]
#define tempQiann125(i1,j1,i2,j2) tempQiann125[i1][j1][i2][j2]
#define tempQiann126(i1,j1,i2,j2) tempQiann126[i1][j1][i2][j2]
#define tempQiann201(i1,j1,i2,j2) tempQiann201[i1][j1][i2][j2]
#define tempQiann202(i1,j1,i2,j2) tempQiann202[i1][j1][i2][j2]
#define tempQiann203(i1,j1,i2,j2) tempQiann203[i1][j1][i2][j2]
#define tempQiann204(i1,j1,i2,j2) tempQiann204[i1][j1][i2][j2]
#define tempQiann205(i1,j1,i2,j2) tempQiann205[i1][j1][i2][j2]
#define tempQiann206(i1,j1,i2,j2) tempQiann206[i1][j1][i2][j2]
#define tempQiann211(i1,j1,i2,j2) tempQiann211[i1][j1][i2][j2]
#define tempQiann212(i1,j1,i2,j2) tempQiann212[i1][j1][i2][j2]
#define tempQiann213(i1,j1,i2,j2) tempQiann213[i1][j1][i2][j2]
#define tempQiann214(i1,j1,i2,j2) tempQiann214[i1][j1][i2][j2]
#define tempQiann215(i1,j1,i2,j2) tempQiann215[i1][j1][i2][j2]
#define tempQiann216(i1,j1,i2,j2) tempQiann216[i1][j1][i2][j2]
#define tempQiann221(i1,j1,i2,j2) tempQiann221[i1][j1][i2][j2]
#define tempQiann222(i1,j1,i2,j2) tempQiann222[i1][j1][i2][j2]
#define tempQiann223(i1,j1,i2,j2) tempQiann223[i1][j1][i2][j2]
#define tempQiann224(i1,j1,i2,j2) tempQiann224[i1][j1][i2][j2]
#define tempQiann225(i1,j1,i2,j2) tempQiann225[i1][j1][i2][j2]
#define tempQiann226(i1,j1,i2,j2) tempQiann226[i1][j1][i2][j2]
#define tempQiand011(i1,j1,i2,j2) tempQiand011[i1][j1][i2][j2]
#define tempQiand012(i1,j1,i2,j2) tempQiand012[i1][j1][i2][j2]
#define tempQiand013(i1,j1,i2,j2) tempQiand013[i1][j1][i2][j2]
#define tempQiand014(i1,j1,i2,j2) tempQiand014[i1][j1][i2][j2]
#define tempQiand015(i1,j1,i2,j2) tempQiand015[i1][j1][i2][j2]
#define tempQiand101(i1,j1,i2,j2) tempQiand101[i1][j1][i2][j2]
#define tempQiand102(i1,j1,i2,j2) tempQiand102[i1][j1][i2][j2]
#define tempQiand103(i1,j1,i2,j2) tempQiand103[i1][j1][i2][j2]
#define tempQiand104(i1,j1,i2,j2) tempQiand104[i1][j1][i2][j2]
#define tempQiand105(i1,j1,i2,j2) tempQiand105[i1][j1][i2][j2]
#define tempQiand111(i1,j1,i2,j2) tempQiand111[i1][j1][i2][j2]
#define tempQiand112(i1,j1,i2,j2) tempQiand112[i1][j1][i2][j2]
#define tempQiand113(i1,j1,i2,j2) tempQiand113[i1][j1][i2][j2]
#define tempQiand114(i1,j1,i2,j2) tempQiand114[i1][j1][i2][j2]
#define tempQiand115(i1,j1,i2,j2) tempQiand115[i1][j1][i2][j2]
#define tempQiand201(i1,j1,i2,j2) tempQiand201[i1][j1][i2][j2]
#define tempQiand202(i1,j1,i2,j2) tempQiand202[i1][j1][i2][j2]
#define tempQiand203(i1,j1,i2,j2) tempQiand203[i1][j1][i2][j2]
#define tempQiand204(i1,j1,i2,j2) tempQiand204[i1][j1][i2][j2]
#define tempQiand205(i1,j1,i2,j2) tempQiand205[i1][j1][i2][j2]
#define tempQiand211(i1,j1,i2,j2) tempQiand211[i1][j1][i2][j2]
#define tempQiand212(i1,j1,i2,j2) tempQiand212[i1][j1][i2][j2]
#define tempQiand213(i1,j1,i2,j2) tempQiand213[i1][j1][i2][j2]
#define tempQiand214(i1,j1,i2,j2) tempQiand214[i1][j1][i2][j2]
#define tempQiand215(i1,j1,i2,j2) tempQiand215[i1][j1][i2][j2]
#define tempQiadn011(i1,j1,i2,j2) tempQiadn011[i1][j1][i2][j2]
#define tempQiadn012(i1,j1,i2,j2) tempQiadn012[i1][j1][i2][j2]
#define tempQiadn013(i1,j1,i2,j2) tempQiadn013[i1][j1][i2][j2]
#define tempQiadn014(i1,j1,i2,j2) tempQiadn014[i1][j1][i2][j2]
#define tempQiadn015(i1,j1,i2,j2) tempQiadn015[i1][j1][i2][j2]
#define tempQiadn021(i1,j1,i2,j2) tempQiadn021[i1][j1][i2][j2]
#define tempQiadn022(i1,j1,i2,j2) tempQiadn022[i1][j1][i2][j2]
#define tempQiadn023(i1,j1,i2,j2) tempQiadn023[i1][j1][i2][j2]
#define tempQiadn024(i1,j1,i2,j2) tempQiadn024[i1][j1][i2][j2]
#define tempQiadn025(i1,j1,i2,j2) tempQiadn025[i1][j1][i2][j2]
#define tempQiadn101(i1,j1,i2,j2) tempQiadn101[i1][j1][i2][j2]
#define tempQiadn102(i1,j1,i2,j2) tempQiadn102[i1][j1][i2][j2]
#define tempQiadn103(i1,j1,i2,j2) tempQiadn103[i1][j1][i2][j2]
#define tempQiadn104(i1,j1,i2,j2) tempQiadn104[i1][j1][i2][j2]
#define tempQiadn105(i1,j1,i2,j2) tempQiadn105[i1][j1][i2][j2]
#define tempQiadn111(i1,j1,i2,j2) tempQiadn111[i1][j1][i2][j2]
#define tempQiadn112(i1,j1,i2,j2) tempQiadn112[i1][j1][i2][j2]
#define tempQiadn113(i1,j1,i2,j2) tempQiadn113[i1][j1][i2][j2]
#define tempQiadn114(i1,j1,i2,j2) tempQiadn114[i1][j1][i2][j2]
#define tempQiadn115(i1,j1,i2,j2) tempQiadn115[i1][j1][i2][j2]
#define tempQiadn121(i1,j1,i2,j2) tempQiadn121[i1][j1][i2][j2]
#define tempQiadn122(i1,j1,i2,j2) tempQiadn122[i1][j1][i2][j2]
#define tempQiadn123(i1,j1,i2,j2) tempQiadn123[i1][j1][i2][j2]
#define tempQiadn124(i1,j1,i2,j2) tempQiadn124[i1][j1][i2][j2]
#define tempQiadn125(i1,j1,i2,j2) tempQiadn125[i1][j1][i2][j2]
#define tempQiadd011(i1,j1,i2,j2) tempQiadd011[i1][j1][i2][j2]
#define tempQiadd012(i1,j1,i2,j2) tempQiadd012[i1][j1][i2][j2]
#define tempQiadd013(i1,j1,i2,j2) tempQiadd013[i1][j1][i2][j2]
#define tempQiadd014(i1,j1,i2,j2) tempQiadd014[i1][j1][i2][j2]
#define tempQiadd015(i1,j1,i2,j2) tempQiadd015[i1][j1][i2][j2]
#define tempQiadd101(i1,j1,i2,j2) tempQiadd101[i1][j1][i2][j2]
#define tempQiadd102(i1,j1,i2,j2) tempQiadd102[i1][j1][i2][j2]
#define tempQiadd103(i1,j1,i2,j2) tempQiadd103[i1][j1][i2][j2]
#define tempQiadd104(i1,j1,i2,j2) tempQiadd104[i1][j1][i2][j2]
#define tempQiadd105(i1,j1,i2,j2) tempQiadd105[i1][j1][i2][j2]
#define tempQiadd111(i1,j1,i2,j2) tempQiadd111[i1][j1][i2][j2]
#define tempQiadd112(i1,j1,i2,j2) tempQiadd112[i1][j1][i2][j2]
#define tempQiadd113(i1,j1,i2,j2) tempQiadd113[i1][j1][i2][j2]
#define tempQiadd114(i1,j1,i2,j2) tempQiadd114[i1][j1][i2][j2]
#define tempQiadd115(i1,j1,i2,j2) tempQiadd115[i1][j1][i2][j2]
#define tempQir011(i1,j1,i2,j2) tempQir011[i1][j1][i2][j2]
#define tempQir012(i1,j1,i2,j2) tempQir012[i1][j1][i2][j2]
#define tempQir101(i1,j1,i2,j2) tempQir101[i1][j1][i2][j2]
#define tempQir102(i1,j1,i2,j2) tempQir102[i1][j1][i2][j2]
#define tempQir111(i1,j1,i2,j2) tempQir111[i1][j1][i2][j2]
#define tempQir112(i1,j1,i2,j2) tempQir112[i1][j1][i2][j2]
#define tempQiar011(i1,j1,i2,j2) tempQiar011[i1][j1][i2][j2]
#define tempQiar012(i1,j1,i2,j2) tempQiar012[i1][j1][i2][j2]
#define tempQiar013(i1,j1,i2,j2) tempQiar013[i1][j1][i2][j2]
#define tempQiar101(i1,j1,i2,j2) tempQiar101[i1][j1][i2][j2]
#define tempQiar102(i1,j1,i2,j2) tempQiar102[i1][j1][i2][j2]
#define tempQiar103(i1,j1,i2,j2) tempQiar103[i1][j1][i2][j2]
#define tempQiar111(i1,j1,i2,j2) tempQiar111[i1][j1][i2][j2]
#define tempQiar112(i1,j1,i2,j2) tempQiar112[i1][j1][i2][j2]
#define tempQiar113(i1,j1,i2,j2) tempQiar113[i1][j1][i2][j2]
#define tempQilr011(i1,j1,i2,j2) tempQilr011[i1][j1][i2][j2]
#define tempQilr012(i1,j1,i2,j2) tempQilr012[i1][j1][i2][j2]
#define tempQilr101(i1,j1,i2,j2) tempQilr101[i1][j1][i2][j2]
#define tempQilr102(i1,j1,i2,j2) tempQilr102[i1][j1][i2][j2]
#define tempQilr111(i1,j1,i2,j2) tempQilr111[i1][j1][i2][j2]
#define tempQilr112(i1,j1,i2,j2) tempQilr112[i1][j1][i2][j2]
#define tempQi1(i1,j1,i2,j2) tempQi1[i1][j1][i2][j2]
#define tempQi2(i1,j1,i2,j2) tempQi2[i1][j1][i2][j2]
#define tempQia1(i1,j1,i2,j2) tempQia1[i1][j1][i2][j2]
#define tempQia2(i1,j1,i2,j2) tempQia2[i1][j1][i2][j2]
#define tempQia3(i1,j1,i2,j2) tempQia3[i1][j1][i2][j2]
#define tempQia4(i1,j1,i2,j2) tempQia4[i1][j1][i2][j2]
#define tempQia5(i1,j1,i2,j2) tempQia5[i1][j1][i2][j2]
#define tempQia6(i1,j1,i2,j2) tempQia6[i1][j1][i2][j2]
#define tempQib001(i1,j1,i2,j2) tempQib001[i1][j1][i2][j2]
#define tempQib002(i1,j1,i2,j2) tempQib002[i1][j1][i2][j2]
#define tempQib011(i1,j1,i2,j2) tempQib011[i1][j1][i2][j2]
#define tempQib012(i1,j1,i2,j2) tempQib012[i1][j1][i2][j2]
#define tempQib101(i1,j1,i2,j2) tempQib101[i1][j1][i2][j2]
#define tempQib102(i1,j1,i2,j2) tempQib102[i1][j1][i2][j2]
#define tempQib111(i1,j1,i2,j2) tempQib111[i1][j1][i2][j2]
#define tempQib112(i1,j1,i2,j2) tempQib112[i1][j1][i2][j2]
#define tempQinn011(i1,j1,i2,j2) tempQinn011[i1][j1][i2][j2]
#define tempQinn021(i1,j1,i2,j2) tempQinn021[i1][j1][i2][j2]
#define tempQinn101(i1,j1,i2,j2) tempQinn101[i1][j1][i2][j2]
#define tempQinn111(i1,j1,i2,j2) tempQinn111[i1][j1][i2][j2]
#define tempQinn121(i1,j1,i2,j2) tempQinn121[i1][j1][i2][j2]
#define tempQinn201(i1,j1,i2,j2) tempQinn201[i1][j1][i2][j2]
#define tempQinn211(i1,j1,i2,j2) tempQinn211[i1][j1][i2][j2]
#define tempQinn221(i1,j1,i2,j2) tempQinn221[i1][j1][i2][j2]
#define tempQidd011(i1,j1,i2,j2) tempQidd011[i1][j1][i2][j2]
#define tempQidd101(i1,j1,i2,j2) tempQidd101[i1][j1][i2][j2]
#define tempQidd111(i1,j1,i2,j2) tempQidd111[i1][j1][i2][j2]
#define tempQidd012(i1,j1,i2,j2) tempQidd012[i1][j1][i2][j2]
#define tempQidd102(i1,j1,i2,j2) tempQidd102[i1][j1][i2][j2]
#define tempQidd112(i1,j1,i2,j2) tempQidd112[i1][j1][i2][j2]
#define seq1(i) seq1[i]
#define Q00(i,j) Q00[i][j]
#define Q10(i,j) Q10[i][j]
#define Qi(i1,j1,i2,j2) Qi[i1][j1][i2][j2]
#define Qiy(i1,j1,i2,j2) Qiy[i1][j1][i2][j2]
#define Qixm00(i1,j1,i2,j2) Qixm00[i1][j1][i2][j2]
#define Qixm01(i1,j1,i2,j2) Qixm01[i1][j1][i2][j2]
#define Qixm02(i1,j1,i2,j2) Qixm02[i1][j1][i2][j2]
#define Qixm10(i1,j1,i2,j2) Qixm10[i1][j1][i2][j2]
#define Qixm11(i1,j1,i2,j2) Qixm11[i1][j1][i2][j2]
#define Qixm12(i1,j1,i2,j2) Qixm12[i1][j1][i2][j2]
#define Qixk00(i1,j1,i2,j2) Qixk00[i1][j1][i2][j2]
#define Qixk01(i1,j1,i2,j2) Qixk01[i1][j1][i2][j2]
#define Qixk10(i1,j1,i2,j2) Qixk10[i1][j1][i2][j2]
#define Qixk11(i1,j1,i2,j2) Qixk11[i1][j1][i2][j2]
#define Qimm02(i1,j1,i2,j2) Qimm02[i1][j1][i2][j2]
#define Qimm12(i1,j1,i2,j2) Qimm12[i1][j1][i2][j2]
#define Qimm20(i1,j1,i2,j2) Qimm20[i1][j1][i2][j2]
#define Qimm21(i1,j1,i2,j2) Qimm21[i1][j1][i2][j2]
#define Qimm22(i1,j1,i2,j2) Qimm22[i1][j1][i2][j2]
#define Qimk01(i1,j1,i2,j2) Qimk01[i1][j1][i2][j2]
#define Qimk11(i1,j1,i2,j2) Qimk11[i1][j1][i2][j2]
#define Qimk20(i1,j1,i2,j2) Qimk20[i1][j1][i2][j2]
#define Qimk21(i1,j1,i2,j2) Qimk21[i1][j1][i2][j2]
#define Qikm10(i1,j1,i2,j2) Qikm10[i1][j1][i2][j2]
#define Qikm11(i1,j1,i2,j2) Qikm11[i1][j1][i2][j2]
#define Qikm02(i1,j1,i2,j2) Qikm02[i1][j1][i2][j2]
#define Qikm12(i1,j1,i2,j2) Qikm12[i1][j1][i2][j2]
#define Qikk01(i1,j1,i2,j2) Qikk01[i1][j1][i2][j2]
#define Qikk10(i1,j1,i2,j2) Qikk10[i1][j1][i2][j2]
#define Qikk11(i1,j1,i2,j2) Qikk11[i1][j1][i2][j2]
#define Qiann01(i1,j1,i2,j2) Qiann01[i1][j1][i2][j2]
#define Qiann02(i1,j1,i2,j2) Qiann02[i1][j1][i2][j2]
#define Qiann10(i1,j1,i2,j2) Qiann10[i1][j1][i2][j2]
#define Qiann11(i1,j1,i2,j2) Qiann11[i1][j1][i2][j2]
#define Qiann12(i1,j1,i2,j2) Qiann12[i1][j1][i2][j2]
#define Qiann20(i1,j1,i2,j2) Qiann20[i1][j1][i2][j2]
#define Qiann21(i1,j1,i2,j2) Qiann21[i1][j1][i2][j2]
#define Qiann22(i1,j1,i2,j2) Qiann22[i1][j1][i2][j2]
#define Qiand01(i1,j1,i2,j2) Qiand01[i1][j1][i2][j2]
#define Qiand10(i1,j1,i2,j2) Qiand10[i1][j1][i2][j2]
#define Qiand11(i1,j1,i2,j2) Qiand11[i1][j1][i2][j2]
#define Qiand20(i1,j1,i2,j2) Qiand20[i1][j1][i2][j2]
#define Qiand21(i1,j1,i2,j2) Qiand21[i1][j1][i2][j2]
#define Qiadn01(i1,j1,i2,j2) Qiadn01[i1][j1][i2][j2]
#define Qiadn02(i1,j1,i2,j2) Qiadn02[i1][j1][i2][j2]
#define Qiadn10(i1,j1,i2,j2) Qiadn10[i1][j1][i2][j2]
#define Qiadn11(i1,j1,i2,j2) Qiadn11[i1][j1][i2][j2]
#define Qiadn12(i1,j1,i2,j2) Qiadn12[i1][j1][i2][j2]
#define Qiadd01(i1,j1,i2,j2) Qiadd01[i1][j1][i2][j2]
#define Qiadd10(i1,j1,i2,j2) Qiadd10[i1][j1][i2][j2]
#define Qiadd11(i1,j1,i2,j2) Qiadd11[i1][j1][i2][j2]
#define Qiar01(i1,j1,i2,j2) Qiar01[i1][j1][i2][j2]
#define Qiar10(i1,j1,i2,j2) Qiar10[i1][j1][i2][j2]
#define Qiar11(i1,j1,i2,j2) Qiar11[i1][j1][i2][j2]
#define Qilr01(i1,j1,i2,j2) Qilr01[i1][j1][i2][j2]
#define Qilr10(i1,j1,i2,j2) Qilr10[i1][j1][i2][j2]
#define Qilr11(i1,j1,i2,j2) Qilr11[i1][j1][i2][j2]
#define Qir01(i1,j1,i2,j2) Qir01[i1][j1][i2][j2]
#define Qir10(i1,j1,i2,j2) Qir10[i1][j1][i2][j2]
#define Qir11(i1,j1,i2,j2) Qir11[i1][j1][i2][j2]
#define Qia(i1,j1,i2,j2) Qia[i1][j1][i2][j2]
#define Qib00(i1,j1,i2,j2) Qib00[i1][j1][i2][j2]
#define Qib01(i1,j1,i2,j2) Qib01[i1][j1][i2][j2]
#define Qib10(i1,j1,i2,j2) Qib10[i1][j1][i2][j2]
#define Qib11(i1,j1,i2,j2) Qib11[i1][j1][i2][j2]
#define Qinn01(i1,j1,i2,j2) Qinn01[i1][j1][i2][j2]
#define Qinn02(i1,j1,i2,j2) Qinn02[i1][j1][i2][j2]
#define Qinn10(i1,j1,i2,j2) Qinn10[i1][j1][i2][j2]
#define Qinn11(i1,j1,i2,j2) Qinn11[i1][j1][i2][j2]
#define Qinn12(i1,j1,i2,j2) Qinn12[i1][j1][i2][j2]
#define Qinn20(i1,j1,i2,j2) Qinn20[i1][j1][i2][j2]
#define Qinn21(i1,j1,i2,j2) Qinn21[i1][j1][i2][j2]
#define Qinn22(i1,j1,i2,j2) Qinn22[i1][j1][i2][j2]
#define Qind01(i1,j1,i2,j2) Qind01[i1][j1][i2][j2]
#define Qind10(i1,j1,i2,j2) Qind10[i1][j1][i2][j2]
#define Qind11(i1,j1,i2,j2) Qind11[i1][j1][i2][j2]
#define Qind20(i1,j1,i2,j2) Qind20[i1][j1][i2][j2]
#define Qind21(i1,j1,i2,j2) Qind21[i1][j1][i2][j2]
#define Qidn01(i1,j1,i2,j2) Qidn01[i1][j1][i2][j2]
#define Qidn02(i1,j1,i2,j2) Qidn02[i1][j1][i2][j2]
#define Qidn10(i1,j1,i2,j2) Qidn10[i1][j1][i2][j2]
#define Qidn11(i1,j1,i2,j2) Qidn11[i1][j1][i2][j2]
#define Qidn12(i1,j1,i2,j2) Qidn12[i1][j1][i2][j2]
#define Qidd01(i1,j1,i2,j2) Qidd01[i1][j1][i2][j2]
#define Qidd10(i1,j1,i2,j2) Qidd10[i1][j1][i2][j2]
#define Qidd11(i1,j1,i2,j2) Qidd11[i1][j1][i2][j2]
#define Qix00(i1,j1,i2,j2) Qix00[i1][j1][i2][j2]
#define Qix01(i1,j1,i2,j2) Qix01[i1][j1][i2][j2]
#define Qix10(i1,j1,i2,j2) Qix10[i1][j1][i2][j2]
#define Qix11(i1,j1,i2,j2) Qix11[i1][j1][i2][j2]
#define auxqiadd01(i1,j1,i2,j2) auxqiadd01[i1][j1][i2][j2]
#define auxqiadd10(i1,j1,i2,j2) auxqiadd10[i1][j1][i2][j2]
#define auxqiadd11(i1,j1,i2,j2) auxqiadd11[i1][j1][i2][j2]
#define auxqia01(i1,j1,i2,j2) auxqia01[i1][j1][i2][j2]
#define auxqia10(i1,j1,i2,j2) auxqia10[i1][j1][i2][j2]
#define auxqia11(i1,j1,i2,j2) auxqia11[i1][j1][i2][j2]

#define seq1_verify(i) seq1_verify[i]
#define Q00_verify(i,j) Q00_verify[i][j]
#define Q10_verify(i,j) Q10_verify[i][j]
#define Qi_verify(i1,j1,i2,j2) Qi_verify[i1][j1][i2][j2]
#define Qiy_verify(i1,j1,i2,j2) Qiy_verify[i1][j1][i2][j2]
#define Qixm00_verify(i1,j1,i2,j2) Qixm00_verify[i1][j1][i2][j2]
#define Qixm01_verify(i1,j1,i2,j2) Qixm01_verify[i1][j1][i2][j2]
#define Qixm02_verify(i1,j1,i2,j2) Qixm02_verify[i1][j1][i2][j2]
#define Qixm10_verify(i1,j1,i2,j2) Qixm10_verify[i1][j1][i2][j2]
#define Qixm11_verify(i1,j1,i2,j2) Qixm11_verify[i1][j1][i2][j2]
#define Qixm12_verify(i1,j1,i2,j2) Qixm12_verify[i1][j1][i2][j2]
#define Qixk00_verify(i1,j1,i2,j2) Qixk00_verify[i1][j1][i2][j2]
#define Qixk01_verify(i1,j1,i2,j2) Qixk01_verify[i1][j1][i2][j2]
#define Qixk10_verify(i1,j1,i2,j2) Qixk10_verify[i1][j1][i2][j2]
#define Qixk11_verify(i1,j1,i2,j2) Qixk11_verify[i1][j1][i2][j2]
#define Qimm02_verify(i1,j1,i2,j2) Qimm02_verify[i1][j1][i2][j2]
#define Qimm12_verify(i1,j1,i2,j2) Qimm12_verify[i1][j1][i2][j2]
#define Qimm20_verify(i1,j1,i2,j2) Qimm20_verify[i1][j1][i2][j2]
#define Qimm21_verify(i1,j1,i2,j2) Qimm21_verify[i1][j1][i2][j2]
#define Qimm22_verify(i1,j1,i2,j2) Qimm22_verify[i1][j1][i2][j2]
#define Qimk01_verify(i1,j1,i2,j2) Qimk01_verify[i1][j1][i2][j2]
#define Qimk11_verify(i1,j1,i2,j2) Qimk11_verify[i1][j1][i2][j2]
#define Qimk20_verify(i1,j1,i2,j2) Qimk20_verify[i1][j1][i2][j2]
#define Qimk21_verify(i1,j1,i2,j2) Qimk21_verify[i1][j1][i2][j2]
#define Qikm10_verify(i1,j1,i2,j2) Qikm10_verify[i1][j1][i2][j2]
#define Qikm11_verify(i1,j1,i2,j2) Qikm11_verify[i1][j1][i2][j2]
#define Qikm02_verify(i1,j1,i2,j2) Qikm02_verify[i1][j1][i2][j2]
#define Qikm12_verify(i1,j1,i2,j2) Qikm12_verify[i1][j1][i2][j2]
#define Qikk01_verify(i1,j1,i2,j2) Qikk01_verify[i1][j1][i2][j2]
#define Qikk10_verify(i1,j1,i2,j2) Qikk10_verify[i1][j1][i2][j2]
#define Qikk11_verify(i1,j1,i2,j2) Qikk11_verify[i1][j1][i2][j2]
#define Qiann01_verify(i1,j1,i2,j2) Qiann01_verify[i1][j1][i2][j2]
#define Qiann02_verify(i1,j1,i2,j2) Qiann02_verify[i1][j1][i2][j2]
#define Qiann10_verify(i1,j1,i2,j2) Qiann10_verify[i1][j1][i2][j2]
#define Qiann11_verify(i1,j1,i2,j2) Qiann11_verify[i1][j1][i2][j2]
#define Qiann12_verify(i1,j1,i2,j2) Qiann12_verify[i1][j1][i2][j2]
#define Qiann20_verify(i1,j1,i2,j2) Qiann20_verify[i1][j1][i2][j2]
#define Qiann21_verify(i1,j1,i2,j2) Qiann21_verify[i1][j1][i2][j2]
#define Qiann22_verify(i1,j1,i2,j2) Qiann22_verify[i1][j1][i2][j2]
#define Qiand01_verify(i1,j1,i2,j2) Qiand01_verify[i1][j1][i2][j2]
#define Qiand10_verify(i1,j1,i2,j2) Qiand10_verify[i1][j1][i2][j2]
#define Qiand11_verify(i1,j1,i2,j2) Qiand11_verify[i1][j1][i2][j2]
#define Qiand20_verify(i1,j1,i2,j2) Qiand20_verify[i1][j1][i2][j2]
#define Qiand21_verify(i1,j1,i2,j2) Qiand21_verify[i1][j1][i2][j2]
#define Qiadn01_verify(i1,j1,i2,j2) Qiadn01_verify[i1][j1][i2][j2]
#define Qiadn02_verify(i1,j1,i2,j2) Qiadn02_verify[i1][j1][i2][j2]
#define Qiadn10_verify(i1,j1,i2,j2) Qiadn10_verify[i1][j1][i2][j2]
#define Qiadn11_verify(i1,j1,i2,j2) Qiadn11_verify[i1][j1][i2][j2]
#define Qiadn12_verify(i1,j1,i2,j2) Qiadn12_verify[i1][j1][i2][j2]
#define Qiadd01_verify(i1,j1,i2,j2) Qiadd01_verify[i1][j1][i2][j2]
#define Qiadd10_verify(i1,j1,i2,j2) Qiadd10_verify[i1][j1][i2][j2]
#define Qiadd11_verify(i1,j1,i2,j2) Qiadd11_verify[i1][j1][i2][j2]
#define Qiar01_verify(i1,j1,i2,j2) Qiar01_verify[i1][j1][i2][j2]
#define Qiar10_verify(i1,j1,i2,j2) Qiar10_verify[i1][j1][i2][j2]
#define Qiar11_verify(i1,j1,i2,j2) Qiar11_verify[i1][j1][i2][j2]
#define Qilr01_verify(i1,j1,i2,j2) Qilr01_verify[i1][j1][i2][j2]
#define Qilr10_verify(i1,j1,i2,j2) Qilr10_verify[i1][j1][i2][j2]
#define Qilr11_verify(i1,j1,i2,j2) Qilr11_verify[i1][j1][i2][j2]
#define Qir01_verify(i1,j1,i2,j2) Qir01_verify[i1][j1][i2][j2]
#define Qir10_verify(i1,j1,i2,j2) Qir10_verify[i1][j1][i2][j2]
#define Qir11_verify(i1,j1,i2,j2) Qir11_verify[i1][j1][i2][j2]
#define Qia_verify(i1,j1,i2,j2) Qia_verify[i1][j1][i2][j2]
#define Qib00_verify(i1,j1,i2,j2) Qib00_verify[i1][j1][i2][j2]
#define Qib01_verify(i1,j1,i2,j2) Qib01_verify[i1][j1][i2][j2]
#define Qib10_verify(i1,j1,i2,j2) Qib10_verify[i1][j1][i2][j2]
#define Qib11_verify(i1,j1,i2,j2) Qib11_verify[i1][j1][i2][j2]
#define Qinn01_verify(i1,j1,i2,j2) Qinn01_verify[i1][j1][i2][j2]
#define Qinn02_verify(i1,j1,i2,j2) Qinn02_verify[i1][j1][i2][j2]
#define Qinn10_verify(i1,j1,i2,j2) Qinn10_verify[i1][j1][i2][j2]
#define Qinn11_verify(i1,j1,i2,j2) Qinn11_verify[i1][j1][i2][j2]
#define Qinn12_verify(i1,j1,i2,j2) Qinn12_verify[i1][j1][i2][j2]
#define Qinn20_verify(i1,j1,i2,j2) Qinn20_verify[i1][j1][i2][j2]
#define Qinn21_verify(i1,j1,i2,j2) Qinn21_verify[i1][j1][i2][j2]
#define Qinn22_verify(i1,j1,i2,j2) Qinn22_verify[i1][j1][i2][j2]
#define Qind01_verify(i1,j1,i2,j2) Qind01_verify[i1][j1][i2][j2]
#define Qind10_verify(i1,j1,i2,j2) Qind10_verify[i1][j1][i2][j2]
#define Qind11_verify(i1,j1,i2,j2) Qind11_verify[i1][j1][i2][j2]
#define Qind20_verify(i1,j1,i2,j2) Qind20_verify[i1][j1][i2][j2]
#define Qind21_verify(i1,j1,i2,j2) Qind21_verify[i1][j1][i2][j2]
#define Qidn01_verify(i1,j1,i2,j2) Qidn01_verify[i1][j1][i2][j2]
#define Qidn02_verify(i1,j1,i2,j2) Qidn02_verify[i1][j1][i2][j2]
#define Qidn10_verify(i1,j1,i2,j2) Qidn10_verify[i1][j1][i2][j2]
#define Qidn11_verify(i1,j1,i2,j2) Qidn11_verify[i1][j1][i2][j2]
#define Qidn12_verify(i1,j1,i2,j2) Qidn12_verify[i1][j1][i2][j2]
#define Qidd01_verify(i1,j1,i2,j2) Qidd01_verify[i1][j1][i2][j2]
#define Qidd10_verify(i1,j1,i2,j2) Qidd10_verify[i1][j1][i2][j2]
#define Qidd11_verify(i1,j1,i2,j2) Qidd11_verify[i1][j1][i2][j2]
#define Qix00_verify(i1,j1,i2,j2) Qix00_verify[i1][j1][i2][j2]
#define Qix01_verify(i1,j1,i2,j2) Qix01_verify[i1][j1][i2][j2]
#define Qix10_verify(i1,j1,i2,j2) Qix10_verify[i1][j1][i2][j2]
#define Qix11_verify(i1,j1,i2,j2) Qix11_verify[i1][j1][i2][j2]
#define auxqiadd01_verify(i1,j1,i2,j2) auxqiadd01_verify[i1][j1][i2][j2]
#define auxqiadd10_verify(i1,j1,i2,j2) auxqiadd10_verify[i1][j1][i2][j2]
#define auxqiadd11_verify(i1,j1,i2,j2) auxqiadd11_verify[i1][j1][i2][j2]
#define auxqia01_verify(i1,j1,i2,j2) auxqia01_verify[i1][j1][i2][j2]
#define auxqia10_verify(i1,j1,i2,j2) auxqia10_verify[i1][j1][i2][j2]
#define auxqia11_verify(i1,j1,i2,j2) auxqia11_verify[i1][j1][i2][j2]
#define var_seq1(i) seq1(i)
#define var_seq1_verify(i) seq1_verify(i)
#define var_Q00(i,j) Q00(i,j)
#define var_Q00_verify(i,j) Q00_verify(i,j)
#define var_Q10(i,j) Q10(i,j)
#define var_Q10_verify(i,j) Q10_verify(i,j)
#define var_Qi(i1,j1,i2,j2) Qi(i1,j1,i2,j2)
#define var_Qi_verify(i1,j1,i2,j2) Qi_verify(i1,j1,i2,j2)
#define var_Qiy(i1,j1,i2,j2) Qiy(i1,j1,i2,j2)
#define var_Qiy_verify(i1,j1,i2,j2) Qiy_verify(i1,j1,i2,j2)
#define var_Qixm00(i1,j1,i2,j2) Qixm00(i1,j1,i2,j2)
#define var_Qixm00_verify(i1,j1,i2,j2) Qixm00_verify(i1,j1,i2,j2)
#define var_Qixm01(i1,j1,i2,j2) Qixm01(i1,j1,i2,j2)
#define var_Qixm01_verify(i1,j1,i2,j2) Qixm01_verify(i1,j1,i2,j2)
#define var_Qixm02(i1,j1,i2,j2) Qixm02(i1,j1,i2,j2)
#define var_Qixm02_verify(i1,j1,i2,j2) Qixm02_verify(i1,j1,i2,j2)
#define var_Qixm10(i1,j1,i2,j2) Qixm10(i1,j1,i2,j2)
#define var_Qixm10_verify(i1,j1,i2,j2) Qixm10_verify(i1,j1,i2,j2)
#define var_Qixm11(i1,j1,i2,j2) Qixm11(i1,j1,i2,j2)
#define var_Qixm11_verify(i1,j1,i2,j2) Qixm11_verify(i1,j1,i2,j2)
#define var_Qixm12(i1,j1,i2,j2) Qixm12(i1,j1,i2,j2)
#define var_Qixm12_verify(i1,j1,i2,j2) Qixm12_verify(i1,j1,i2,j2)
#define var_Qixk00(i1,j1,i2,j2) Qixk00(i1,j1,i2,j2)
#define var_Qixk00_verify(i1,j1,i2,j2) Qixk00_verify(i1,j1,i2,j2)
#define var_Qixk01(i1,j1,i2,j2) Qixk01(i1,j1,i2,j2)
#define var_Qixk01_verify(i1,j1,i2,j2) Qixk01_verify(i1,j1,i2,j2)
#define var_Qixk10(i1,j1,i2,j2) Qixk10(i1,j1,i2,j2)
#define var_Qixk10_verify(i1,j1,i2,j2) Qixk10_verify(i1,j1,i2,j2)
#define var_Qixk11(i1,j1,i2,j2) Qixk11(i1,j1,i2,j2)
#define var_Qixk11_verify(i1,j1,i2,j2) Qixk11_verify(i1,j1,i2,j2)
#define var_Qimm02(i1,j1,i2,j2) Qimm02(i1,j1,i2,j2)
#define var_Qimm02_verify(i1,j1,i2,j2) Qimm02_verify(i1,j1,i2,j2)
#define var_Qimm12(i1,j1,i2,j2) Qimm12(i1,j1,i2,j2)
#define var_Qimm12_verify(i1,j1,i2,j2) Qimm12_verify(i1,j1,i2,j2)
#define var_Qimm20(i1,j1,i2,j2) Qimm20(i1,j1,i2,j2)
#define var_Qimm20_verify(i1,j1,i2,j2) Qimm20_verify(i1,j1,i2,j2)
#define var_Qimm21(i1,j1,i2,j2) Qimm21(i1,j1,i2,j2)
#define var_Qimm21_verify(i1,j1,i2,j2) Qimm21_verify(i1,j1,i2,j2)
#define var_Qimm22(i1,j1,i2,j2) Qimm22(i1,j1,i2,j2)
#define var_Qimm22_verify(i1,j1,i2,j2) Qimm22_verify(i1,j1,i2,j2)
#define var_Qimk01(i1,j1,i2,j2) Qimk01(i1,j1,i2,j2)
#define var_Qimk01_verify(i1,j1,i2,j2) Qimk01_verify(i1,j1,i2,j2)
#define var_Qimk11(i1,j1,i2,j2) Qimk11(i1,j1,i2,j2)
#define var_Qimk11_verify(i1,j1,i2,j2) Qimk11_verify(i1,j1,i2,j2)
#define var_Qimk20(i1,j1,i2,j2) Qimk20(i1,j1,i2,j2)
#define var_Qimk20_verify(i1,j1,i2,j2) Qimk20_verify(i1,j1,i2,j2)
#define var_Qimk21(i1,j1,i2,j2) Qimk21(i1,j1,i2,j2)
#define var_Qimk21_verify(i1,j1,i2,j2) Qimk21_verify(i1,j1,i2,j2)
#define var_Qikm10(i1,j1,i2,j2) Qikm10(i1,j1,i2,j2)
#define var_Qikm10_verify(i1,j1,i2,j2) Qikm10_verify(i1,j1,i2,j2)
#define var_Qikm11(i1,j1,i2,j2) Qikm11(i1,j1,i2,j2)
#define var_Qikm11_verify(i1,j1,i2,j2) Qikm11_verify(i1,j1,i2,j2)
#define var_Qikm02(i1,j1,i2,j2) Qikm02(i1,j1,i2,j2)
#define var_Qikm02_verify(i1,j1,i2,j2) Qikm02_verify(i1,j1,i2,j2)
#define var_Qikm12(i1,j1,i2,j2) Qikm12(i1,j1,i2,j2)
#define var_Qikm12_verify(i1,j1,i2,j2) Qikm12_verify(i1,j1,i2,j2)
#define var_Qikk01(i1,j1,i2,j2) Qikk01(i1,j1,i2,j2)
#define var_Qikk01_verify(i1,j1,i2,j2) Qikk01_verify(i1,j1,i2,j2)
#define var_Qikk10(i1,j1,i2,j2) Qikk10(i1,j1,i2,j2)
#define var_Qikk10_verify(i1,j1,i2,j2) Qikk10_verify(i1,j1,i2,j2)
#define var_Qikk11(i1,j1,i2,j2) Qikk11(i1,j1,i2,j2)
#define var_Qikk11_verify(i1,j1,i2,j2) Qikk11_verify(i1,j1,i2,j2)
#define var_Qiann01(i1,j1,i2,j2) Qiann01(i1,j1,i2,j2)
#define var_Qiann01_verify(i1,j1,i2,j2) Qiann01_verify(i1,j1,i2,j2)
#define var_Qiann02(i1,j1,i2,j2) Qiann02(i1,j1,i2,j2)
#define var_Qiann02_verify(i1,j1,i2,j2) Qiann02_verify(i1,j1,i2,j2)
#define var_Qiann10(i1,j1,i2,j2) Qiann10(i1,j1,i2,j2)
#define var_Qiann10_verify(i1,j1,i2,j2) Qiann10_verify(i1,j1,i2,j2)
#define var_Qiann11(i1,j1,i2,j2) Qiann11(i1,j1,i2,j2)
#define var_Qiann11_verify(i1,j1,i2,j2) Qiann11_verify(i1,j1,i2,j2)
#define var_Qiann12(i1,j1,i2,j2) Qiann12(i1,j1,i2,j2)
#define var_Qiann12_verify(i1,j1,i2,j2) Qiann12_verify(i1,j1,i2,j2)
#define var_Qiann20(i1,j1,i2,j2) Qiann20(i1,j1,i2,j2)
#define var_Qiann20_verify(i1,j1,i2,j2) Qiann20_verify(i1,j1,i2,j2)
#define var_Qiann21(i1,j1,i2,j2) Qiann21(i1,j1,i2,j2)
#define var_Qiann21_verify(i1,j1,i2,j2) Qiann21_verify(i1,j1,i2,j2)
#define var_Qiann22(i1,j1,i2,j2) Qiann22(i1,j1,i2,j2)
#define var_Qiann22_verify(i1,j1,i2,j2) Qiann22_verify(i1,j1,i2,j2)
#define var_Qiand01(i1,j1,i2,j2) Qiand01(i1,j1,i2,j2)
#define var_Qiand01_verify(i1,j1,i2,j2) Qiand01_verify(i1,j1,i2,j2)
#define var_Qiand10(i1,j1,i2,j2) Qiand10(i1,j1,i2,j2)
#define var_Qiand10_verify(i1,j1,i2,j2) Qiand10_verify(i1,j1,i2,j2)
#define var_Qiand11(i1,j1,i2,j2) Qiand11(i1,j1,i2,j2)
#define var_Qiand11_verify(i1,j1,i2,j2) Qiand11_verify(i1,j1,i2,j2)
#define var_Qiand20(i1,j1,i2,j2) Qiand20(i1,j1,i2,j2)
#define var_Qiand20_verify(i1,j1,i2,j2) Qiand20_verify(i1,j1,i2,j2)
#define var_Qiand21(i1,j1,i2,j2) Qiand21(i1,j1,i2,j2)
#define var_Qiand21_verify(i1,j1,i2,j2) Qiand21_verify(i1,j1,i2,j2)
#define var_Qiadn01(i1,j1,i2,j2) Qiadn01(i1,j1,i2,j2)
#define var_Qiadn01_verify(i1,j1,i2,j2) Qiadn01_verify(i1,j1,i2,j2)
#define var_Qiadn02(i1,j1,i2,j2) Qiadn02(i1,j1,i2,j2)
#define var_Qiadn02_verify(i1,j1,i2,j2) Qiadn02_verify(i1,j1,i2,j2)
#define var_Qiadn10(i1,j1,i2,j2) Qiadn10(i1,j1,i2,j2)
#define var_Qiadn10_verify(i1,j1,i2,j2) Qiadn10_verify(i1,j1,i2,j2)
#define var_Qiadn11(i1,j1,i2,j2) Qiadn11(i1,j1,i2,j2)
#define var_Qiadn11_verify(i1,j1,i2,j2) Qiadn11_verify(i1,j1,i2,j2)
#define var_Qiadn12(i1,j1,i2,j2) Qiadn12(i1,j1,i2,j2)
#define var_Qiadn12_verify(i1,j1,i2,j2) Qiadn12_verify(i1,j1,i2,j2)
#define var_Qiadd01(i1,j1,i2,j2) Qiadd01(i1,j1,i2,j2)
#define var_Qiadd01_verify(i1,j1,i2,j2) Qiadd01_verify(i1,j1,i2,j2)
#define var_Qiadd10(i1,j1,i2,j2) Qiadd10(i1,j1,i2,j2)
#define var_Qiadd10_verify(i1,j1,i2,j2) Qiadd10_verify(i1,j1,i2,j2)
#define var_Qiadd11(i1,j1,i2,j2) Qiadd11(i1,j1,i2,j2)
#define var_Qiadd11_verify(i1,j1,i2,j2) Qiadd11_verify(i1,j1,i2,j2)
#define var_Qiar01(i1,j1,i2,j2) Qiar01(i1,j1,i2,j2)
#define var_Qiar01_verify(i1,j1,i2,j2) Qiar01_verify(i1,j1,i2,j2)
#define var_Qiar10(i1,j1,i2,j2) Qiar10(i1,j1,i2,j2)
#define var_Qiar10_verify(i1,j1,i2,j2) Qiar10_verify(i1,j1,i2,j2)
#define var_Qiar11(i1,j1,i2,j2) Qiar11(i1,j1,i2,j2)
#define var_Qiar11_verify(i1,j1,i2,j2) Qiar11_verify(i1,j1,i2,j2)
#define var_Qilr01(i1,j1,i2,j2) Qilr01(i1,j1,i2,j2)
#define var_Qilr01_verify(i1,j1,i2,j2) Qilr01_verify(i1,j1,i2,j2)
#define var_Qilr10(i1,j1,i2,j2) Qilr10(i1,j1,i2,j2)
#define var_Qilr10_verify(i1,j1,i2,j2) Qilr10_verify(i1,j1,i2,j2)
#define var_Qilr11(i1,j1,i2,j2) Qilr11(i1,j1,i2,j2)
#define var_Qilr11_verify(i1,j1,i2,j2) Qilr11_verify(i1,j1,i2,j2)
#define var_Qir01(i1,j1,i2,j2) Qir01(i1,j1,i2,j2)
#define var_Qir01_verify(i1,j1,i2,j2) Qir01_verify(i1,j1,i2,j2)
#define var_Qir10(i1,j1,i2,j2) Qir10(i1,j1,i2,j2)
#define var_Qir10_verify(i1,j1,i2,j2) Qir10_verify(i1,j1,i2,j2)
#define var_Qir11(i1,j1,i2,j2) Qir11(i1,j1,i2,j2)
#define var_Qir11_verify(i1,j1,i2,j2) Qir11_verify(i1,j1,i2,j2)
#define var_Qia(i1,j1,i2,j2) Qia(i1,j1,i2,j2)
#define var_Qia_verify(i1,j1,i2,j2) Qia_verify(i1,j1,i2,j2)
#define var_Qib00(i1,j1,i2,j2) Qib00(i1,j1,i2,j2)
#define var_Qib00_verify(i1,j1,i2,j2) Qib00_verify(i1,j1,i2,j2)
#define var_Qib01(i1,j1,i2,j2) Qib01(i1,j1,i2,j2)
#define var_Qib01_verify(i1,j1,i2,j2) Qib01_verify(i1,j1,i2,j2)
#define var_Qib10(i1,j1,i2,j2) Qib10(i1,j1,i2,j2)
#define var_Qib10_verify(i1,j1,i2,j2) Qib10_verify(i1,j1,i2,j2)
#define var_Qib11(i1,j1,i2,j2) Qib11(i1,j1,i2,j2)
#define var_Qib11_verify(i1,j1,i2,j2) Qib11_verify(i1,j1,i2,j2)
#define var_Qinn01(i1,j1,i2,j2) Qinn01(i1,j1,i2,j2)
#define var_Qinn01_verify(i1,j1,i2,j2) Qinn01_verify(i1,j1,i2,j2)
#define var_Qinn02(i1,j1,i2,j2) Qinn02(i1,j1,i2,j2)
#define var_Qinn02_verify(i1,j1,i2,j2) Qinn02_verify(i1,j1,i2,j2)
#define var_Qinn10(i1,j1,i2,j2) Qinn10(i1,j1,i2,j2)
#define var_Qinn10_verify(i1,j1,i2,j2) Qinn10_verify(i1,j1,i2,j2)
#define var_Qinn11(i1,j1,i2,j2) Qinn11(i1,j1,i2,j2)
#define var_Qinn11_verify(i1,j1,i2,j2) Qinn11_verify(i1,j1,i2,j2)
#define var_Qinn12(i1,j1,i2,j2) Qinn12(i1,j1,i2,j2)
#define var_Qinn12_verify(i1,j1,i2,j2) Qinn12_verify(i1,j1,i2,j2)
#define var_Qinn20(i1,j1,i2,j2) Qinn20(i1,j1,i2,j2)
#define var_Qinn20_verify(i1,j1,i2,j2) Qinn20_verify(i1,j1,i2,j2)
#define var_Qinn21(i1,j1,i2,j2) Qinn21(i1,j1,i2,j2)
#define var_Qinn21_verify(i1,j1,i2,j2) Qinn21_verify(i1,j1,i2,j2)
#define var_Qinn22(i1,j1,i2,j2) Qinn22(i1,j1,i2,j2)
#define var_Qinn22_verify(i1,j1,i2,j2) Qinn22_verify(i1,j1,i2,j2)
#define var_Qind01(i1,j1,i2,j2) Qind01(i1,j1,i2,j2)
#define var_Qind01_verify(i1,j1,i2,j2) Qind01_verify(i1,j1,i2,j2)
#define var_Qind10(i1,j1,i2,j2) Qind10(i1,j1,i2,j2)
#define var_Qind10_verify(i1,j1,i2,j2) Qind10_verify(i1,j1,i2,j2)
#define var_Qind11(i1,j1,i2,j2) Qind11(i1,j1,i2,j2)
#define var_Qind11_verify(i1,j1,i2,j2) Qind11_verify(i1,j1,i2,j2)
#define var_Qind20(i1,j1,i2,j2) Qind20(i1,j1,i2,j2)
#define var_Qind20_verify(i1,j1,i2,j2) Qind20_verify(i1,j1,i2,j2)
#define var_Qind21(i1,j1,i2,j2) Qind21(i1,j1,i2,j2)
#define var_Qind21_verify(i1,j1,i2,j2) Qind21_verify(i1,j1,i2,j2)
#define var_Qidn01(i1,j1,i2,j2) Qidn01(i1,j1,i2,j2)
#define var_Qidn01_verify(i1,j1,i2,j2) Qidn01_verify(i1,j1,i2,j2)
#define var_Qidn02(i1,j1,i2,j2) Qidn02(i1,j1,i2,j2)
#define var_Qidn02_verify(i1,j1,i2,j2) Qidn02_verify(i1,j1,i2,j2)
#define var_Qidn10(i1,j1,i2,j2) Qidn10(i1,j1,i2,j2)
#define var_Qidn10_verify(i1,j1,i2,j2) Qidn10_verify(i1,j1,i2,j2)
#define var_Qidn11(i1,j1,i2,j2) Qidn11(i1,j1,i2,j2)
#define var_Qidn11_verify(i1,j1,i2,j2) Qidn11_verify(i1,j1,i2,j2)
#define var_Qidn12(i1,j1,i2,j2) Qidn12(i1,j1,i2,j2)
#define var_Qidn12_verify(i1,j1,i2,j2) Qidn12_verify(i1,j1,i2,j2)
#define var_Qidd01(i1,j1,i2,j2) Qidd01(i1,j1,i2,j2)
#define var_Qidd01_verify(i1,j1,i2,j2) Qidd01_verify(i1,j1,i2,j2)
#define var_Qidd10(i1,j1,i2,j2) Qidd10(i1,j1,i2,j2)
#define var_Qidd10_verify(i1,j1,i2,j2) Qidd10_verify(i1,j1,i2,j2)
#define var_Qidd11(i1,j1,i2,j2) Qidd11(i1,j1,i2,j2)
#define var_Qidd11_verify(i1,j1,i2,j2) Qidd11_verify(i1,j1,i2,j2)
#define var_Qix00(i1,j1,i2,j2) Qix00(i1,j1,i2,j2)
#define var_Qix00_verify(i1,j1,i2,j2) Qix00_verify(i1,j1,i2,j2)
#define var_Qix01(i1,j1,i2,j2) Qix01(i1,j1,i2,j2)
#define var_Qix01_verify(i1,j1,i2,j2) Qix01_verify(i1,j1,i2,j2)
#define var_Qix10(i1,j1,i2,j2) Qix10(i1,j1,i2,j2)
#define var_Qix10_verify(i1,j1,i2,j2) Qix10_verify(i1,j1,i2,j2)
#define var_Qix11(i1,j1,i2,j2) Qix11(i1,j1,i2,j2)
#define var_Qix11_verify(i1,j1,i2,j2) Qix11_verify(i1,j1,i2,j2)
#define var_auxqiadd01(i1,j1,i2,j2) auxqiadd01(i1,j1,i2,j2)
#define var_auxqiadd01_verify(i1,j1,i2,j2) auxqiadd01_verify(i1,j1,i2,j2)
#define var_auxqiadd10(i1,j1,i2,j2) auxqiadd10(i1,j1,i2,j2)
#define var_auxqiadd10_verify(i1,j1,i2,j2) auxqiadd10_verify(i1,j1,i2,j2)
#define var_auxqiadd11(i1,j1,i2,j2) auxqiadd11(i1,j1,i2,j2)
#define var_auxqiadd11_verify(i1,j1,i2,j2) auxqiadd11_verify(i1,j1,i2,j2)
#define var_auxqia01(i1,j1,i2,j2) auxqia01(i1,j1,i2,j2)
#define var_auxqia01_verify(i1,j1,i2,j2) auxqia01_verify(i1,j1,i2,j2)
#define var_auxqia10(i1,j1,i2,j2) auxqia10(i1,j1,i2,j2)
#define var_auxqia10_verify(i1,j1,i2,j2) auxqia10_verify(i1,j1,i2,j2)
#define var_auxqia11(i1,j1,i2,j2) auxqia11(i1,j1,i2,j2)
#define var_auxqia11_verify(i1,j1,i2,j2) auxqia11_verify(i1,j1,i2,j2)

//function prototypes
void piRNAb2(Energy*,long, long, long,unsigned char*,unsigned char*,unsigned char*, double**, double**, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****);
void piRNAb2_verify(Energy*,long, long, long,unsigned char*,unsigned char*,unsigned char*, double**, double**, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****, double****);

//Global functions
unsigned char tonum(char );

//main
int main(int argc, char** argv) {
	//Check number of args
	if (argc <= 3) {
		printf("Number of argument is smaller than expected.\n");
		printf("Expecting N,M,MHL\n");
		exit(0);
	}
	
	char *end = 0;
	char *val = 0;
	//Read Parameters
	//Initialisation of N
	errno = 0;
	end = 0;
	val = argv[1];
	long N = strtol(val,&end,10);
	if ((errno == ERANGE && (N == LONG_MAX || N == LONG_MIN)) || (errno != 0 && N == 0)) {
		perror("strtol");
		exit(EXIT_FAILURE);
	}
	if (end == val) {
		fprintf(stderr, "No digits were found for N\n");
		exit(EXIT_FAILURE);
	}
	if (*end != '\0'){
		printf("For parameter N: Converted part: %ld, non-convertible part: %s\n", N, end);
		exit(EXIT_FAILURE);
	}
	
	//Initialisation of M
	errno = 0;
	end = 0;
	val = argv[2];
	long M = strtol(val,&end,10);
	if ((errno == ERANGE && (M == LONG_MAX || M == LONG_MIN)) || (errno != 0 && M == 0)) {
		perror("strtol");
		exit(EXIT_FAILURE);
	}
	if (end == val) {
		fprintf(stderr, "No digits were found for M\n");
		exit(EXIT_FAILURE);
	}
	if (*end != '\0'){
		printf("For parameter M: Converted part: %ld, non-convertible part: %s\n", M, end);
		exit(EXIT_FAILURE);
	}
	
	//Initialisation of MHL
	errno = 0;
	end = 0;
	val = argv[3];
	long MHL = strtol(val,&end,10);
	if ((errno == ERANGE && (MHL == LONG_MAX || MHL == LONG_MIN)) || (errno != 0 && MHL == 0)) {
		perror("strtol");
		exit(EXIT_FAILURE);
	}
	if (end == val) {
		fprintf(stderr, "No digits were found for MHL\n");
		exit(EXIT_FAILURE);
	}
	if (*end != '\0'){
		printf("For parameter MHL: Converted part: %ld, non-convertible part: %s\n", MHL, end);
		exit(EXIT_FAILURE);
	}
	
	
	///Parameter checking
	if (!((N >= 9 && M >= 9 && MHL >= 11))) {
		printf("The value of parameters are not valid.\n");
		exit(-1);
	}
	
	
	//Memory Allocation
	int mz1, mz2, mz3, mz4;
	char* seq0 = (char*)malloc(sizeof(char)*(N));
	mallocCheck(seq0, (N), char);
	char* seqr = (char*)malloc(sizeof(char)*(M));
	mallocCheck(seqr, (M), char);
	unsigned char* seq1 = (unsigned char*)malloc(sizeof(unsigned char)*(M));
	mallocCheck(seq1, (M), unsigned char);
	unsigned char* seq01 = (unsigned char*)malloc(sizeof(unsigned char)*(N));
	mallocCheck(seq01, (M), unsigned char);
	unsigned char* seqr1 = (unsigned char*)malloc(sizeof(unsigned char)*(M));
	mallocCheck(seqr1, (M), unsigned char);
	double* _lin_Q00 = (double*)malloc(sizeof(double)*((N) * (N)));
	mallocCheck(_lin_Q00, ((N) * (N)), double);
	double** Q00 = (double**)malloc(sizeof(double*)*(N));
	mallocCheck(Q00, (N), double*);
	for (mz1=0;mz1 < N; mz1++) {
		Q00[mz1] = &_lin_Q00[(mz1*(N))];
	}
	double* _lin_Q10 = (double*)malloc(sizeof(double)*((N) * (N)));
	mallocCheck(_lin_Q10, ((N) * (N)), double);
	double** Q10 = (double**)malloc(sizeof(double*)*(N));
	mallocCheck(Q10, (N), double*);
	for (mz1=0;mz1 < N; mz1++) {
		Q10[mz1] = &_lin_Q10[(mz1*(N))];
	}
	double* _lin_Qi = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
	mallocCheck(_lin_Qi, ((N) * (N) * (M) * (M)), double);
	double**** Qi = (double****)malloc(sizeof(double***)*(N));
	mallocCheck(Qi, (N), double***);
	for (mz1=0;mz1 < N; mz1++) {
		Qi[mz1] = (double***)malloc(sizeof(double**)*(N));
		mallocCheck(Qi[mz1], (N), double**);
		for (mz2=0;mz2 < N; mz2++) {
			Qi[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
			mallocCheck(Qi[mz1][mz2], (M), double*);
			for (mz3=0;mz3 < M; mz3++) {
				Qi[mz1][mz2][mz3] = &_lin_Qi[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
			}
		}
	}
	double* _lin_Qiy = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
	mallocCheck(_lin_Qiy, ((N) * (N) * (M) * (M)), double);
	double**** Qiy = (double****)malloc(sizeof(double***)*(N));
	mallocCheck(Qiy, (N), double***);
	for (mz1=0;mz1 < N; mz1++) {
		Qiy[mz1] = (double***)malloc(sizeof(double**)*(N));
		mallocCheck(Qiy[mz1], (N), double**);
		for (mz2=0;mz2 < N; mz2++) {
			Qiy[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
			mallocCheck(Qiy[mz1][mz2], (M), double*);
			for (mz3=0;mz3 < M; mz3++) {
				Qiy[mz1][mz2][mz3] = &_lin_Qiy[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
			}
		}
	}
	double* _lin_Qixm00 = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
	mallocCheck(_lin_Qixm00, ((N) * (N) * (M) * (M)), double);
	double**** Qixm00 = (double****)malloc(sizeof(double***)*(N));
	mallocCheck(Qixm00, (N), double***);
	for (mz1=0;mz1 < N; mz1++) {
		Qixm00[mz1] = (double***)malloc(sizeof(double**)*(N));
		mallocCheck(Qixm00[mz1], (N), double**);
		for (mz2=0;mz2 < N; mz2++) {
			Qixm00[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
			mallocCheck(Qixm00[mz1][mz2], (M), double*);
			for (mz3=0;mz3 < M; mz3++) {
				Qixm00[mz1][mz2][mz3] = &_lin_Qixm00[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
			}
		}
	}
	double* _lin_Qixm01 = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
	mallocCheck(_lin_Qixm01, ((N) * (N) * (M) * (M)), double);
	double**** Qixm01 = (double****)malloc(sizeof(double***)*(N));
	mallocCheck(Qixm01, (N), double***);
	for (mz1=0;mz1 < N; mz1++) {
		Qixm01[mz1] = (double***)malloc(sizeof(double**)*(N));
		mallocCheck(Qixm01[mz1], (N), double**);
		for (mz2=0;mz2 < N; mz2++) {
			Qixm01[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
			mallocCheck(Qixm01[mz1][mz2], (M), double*);
			for (mz3=0;mz3 < M; mz3++) {
				Qixm01[mz1][mz2][mz3] = &_lin_Qixm01[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
			}
		}
	}
	double* _lin_Qixm02 = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
	mallocCheck(_lin_Qixm02, ((N) * (N) * (M) * (M)), double);
	double**** Qixm02 = (double****)malloc(sizeof(double***)*(N));
	mallocCheck(Qixm02, (N), double***);
	for (mz1=0;mz1 < N; mz1++) {
		Qixm02[mz1] = (double***)malloc(sizeof(double**)*(N));
		mallocCheck(Qixm02[mz1], (N), double**);
		for (mz2=0;mz2 < N; mz2++) {
			Qixm02[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
			mallocCheck(Qixm02[mz1][mz2], (M), double*);
			for (mz3=0;mz3 < M; mz3++) {
				Qixm02[mz1][mz2][mz3] = &_lin_Qixm02[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
			}
		}
	}
	double* _lin_Qixm10 = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
	mallocCheck(_lin_Qixm10, ((N) * (N) * (M) * (M)), double);
	double**** Qixm10 = (double****)malloc(sizeof(double***)*(N));
	mallocCheck(Qixm10, (N), double***);
	for (mz1=0;mz1 < N; mz1++) {
		Qixm10[mz1] = (double***)malloc(sizeof(double**)*(N));
		mallocCheck(Qixm10[mz1], (N), double**);
		for (mz2=0;mz2 < N; mz2++) {
			Qixm10[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
			mallocCheck(Qixm10[mz1][mz2], (M), double*);
			for (mz3=0;mz3 < M; mz3++) {
				Qixm10[mz1][mz2][mz3] = &_lin_Qixm10[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
			}
		}
	}
	double* _lin_Qixm11 = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
	mallocCheck(_lin_Qixm11, ((N) * (N) * (M) * (M)), double);
	double**** Qixm11 = (double****)malloc(sizeof(double***)*(N));
	mallocCheck(Qixm11, (N), double***);
	for (mz1=0;mz1 < N; mz1++) {
		Qixm11[mz1] = (double***)malloc(sizeof(double**)*(N));
		mallocCheck(Qixm11[mz1], (N), double**);
		for (mz2=0;mz2 < N; mz2++) {
			Qixm11[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
			mallocCheck(Qixm11[mz1][mz2], (M), double*);
			for (mz3=0;mz3 < M; mz3++) {
				Qixm11[mz1][mz2][mz3] = &_lin_Qixm11[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
			}
		}
	}
	double* _lin_Qixm12 = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
	mallocCheck(_lin_Qixm12, ((N) * (N) * (M) * (M)), double);
	double**** Qixm12 = (double****)malloc(sizeof(double***)*(N));
	mallocCheck(Qixm12, (N), double***);
	for (mz1=0;mz1 < N; mz1++) {
		Qixm12[mz1] = (double***)malloc(sizeof(double**)*(N));
		mallocCheck(Qixm12[mz1], (N), double**);
		for (mz2=0;mz2 < N; mz2++) {
			Qixm12[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
			mallocCheck(Qixm12[mz1][mz2], (M), double*);
			for (mz3=0;mz3 < M; mz3++) {
				Qixm12[mz1][mz2][mz3] = &_lin_Qixm12[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
			}
		}
	}
	double* _lin_Qixk00 = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
	mallocCheck(_lin_Qixk00, ((N) * (N) * (M) * (M)), double);
	double**** Qixk00 = (double****)malloc(sizeof(double***)*(N));
	mallocCheck(Qixk00, (N), double***);
	for (mz1=0;mz1 < N; mz1++) {
		Qixk00[mz1] = (double***)malloc(sizeof(double**)*(N));
		mallocCheck(Qixk00[mz1], (N), double**);
		for (mz2=0;mz2 < N; mz2++) {
			Qixk00[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
			mallocCheck(Qixk00[mz1][mz2], (M), double*);
			for (mz3=0;mz3 < M; mz3++) {
				Qixk00[mz1][mz2][mz3] = &_lin_Qixk00[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
			}
		}
	}
	double* _lin_Qixk01 = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
	mallocCheck(_lin_Qixk01, ((N) * (N) * (M) * (M)), double);
	double**** Qixk01 = (double****)malloc(sizeof(double***)*(N));
	mallocCheck(Qixk01, (N), double***);
	for (mz1=0;mz1 < N; mz1++) {
		Qixk01[mz1] = (double***)malloc(sizeof(double**)*(N));
		mallocCheck(Qixk01[mz1], (N), double**);
		for (mz2=0;mz2 < N; mz2++) {
			Qixk01[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
			mallocCheck(Qixk01[mz1][mz2], (M), double*);
			for (mz3=0;mz3 < M; mz3++) {
				Qixk01[mz1][mz2][mz3] = &_lin_Qixk01[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
			}
		}
	}
	double* _lin_Qixk10 = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
	mallocCheck(_lin_Qixk10, ((N) * (N) * (M) * (M)), double);
	double**** Qixk10 = (double****)malloc(sizeof(double***)*(N));
	mallocCheck(Qixk10, (N), double***);
	for (mz1=0;mz1 < N; mz1++) {
		Qixk10[mz1] = (double***)malloc(sizeof(double**)*(N));
		mallocCheck(Qixk10[mz1], (N), double**);
		for (mz2=0;mz2 < N; mz2++) {
			Qixk10[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
			mallocCheck(Qixk10[mz1][mz2], (M), double*);
			for (mz3=0;mz3 < M; mz3++) {
				Qixk10[mz1][mz2][mz3] = &_lin_Qixk10[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
			}
		}
	}
	double* _lin_Qixk11 = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
	mallocCheck(_lin_Qixk11, ((N) * (N) * (M) * (M)), double);
	double**** Qixk11 = (double****)malloc(sizeof(double***)*(N));
	mallocCheck(Qixk11, (N), double***);
	for (mz1=0;mz1 < N; mz1++) {
		Qixk11[mz1] = (double***)malloc(sizeof(double**)*(N));
		mallocCheck(Qixk11[mz1], (N), double**);
		for (mz2=0;mz2 < N; mz2++) {
			Qixk11[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
			mallocCheck(Qixk11[mz1][mz2], (M), double*);
			for (mz3=0;mz3 < M; mz3++) {
				Qixk11[mz1][mz2][mz3] = &_lin_Qixk11[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
			}
		}
	}
	double* _lin_Qimm02 = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
	mallocCheck(_lin_Qimm02, ((N) * (N) * (M) * (M)), double);
	double**** Qimm02 = (double****)malloc(sizeof(double***)*(N));
	mallocCheck(Qimm02, (N), double***);
	for (mz1=0;mz1 < N; mz1++) {
		Qimm02[mz1] = (double***)malloc(sizeof(double**)*(N));
		mallocCheck(Qimm02[mz1], (N), double**);
		for (mz2=0;mz2 < N; mz2++) {
			Qimm02[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
			mallocCheck(Qimm02[mz1][mz2], (M), double*);
			for (mz3=0;mz3 < M; mz3++) {
				Qimm02[mz1][mz2][mz3] = &_lin_Qimm02[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
			}
		}
	}
	double* _lin_Qimm12 = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
	mallocCheck(_lin_Qimm12, ((N) * (N) * (M) * (M)), double);
	double**** Qimm12 = (double****)malloc(sizeof(double***)*(N));
	mallocCheck(Qimm12, (N), double***);
	for (mz1=0;mz1 < N; mz1++) {
		Qimm12[mz1] = (double***)malloc(sizeof(double**)*(N));
		mallocCheck(Qimm12[mz1], (N), double**);
		for (mz2=0;mz2 < N; mz2++) {
			Qimm12[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
			mallocCheck(Qimm12[mz1][mz2], (M), double*);
			for (mz3=0;mz3 < M; mz3++) {
				Qimm12[mz1][mz2][mz3] = &_lin_Qimm12[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
			}
		}
	}
	double* _lin_Qimm20 = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
	mallocCheck(_lin_Qimm20, ((N) * (N) * (M) * (M)), double);
	double**** Qimm20 = (double****)malloc(sizeof(double***)*(N));
	mallocCheck(Qimm20, (N), double***);
	for (mz1=0;mz1 < N; mz1++) {
		Qimm20[mz1] = (double***)malloc(sizeof(double**)*(N));
		mallocCheck(Qimm20[mz1], (N), double**);
		for (mz2=0;mz2 < N; mz2++) {
			Qimm20[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
			mallocCheck(Qimm20[mz1][mz2], (M), double*);
			for (mz3=0;mz3 < M; mz3++) {
				Qimm20[mz1][mz2][mz3] = &_lin_Qimm20[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
			}
		}
	}
	double* _lin_Qimm21 = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
	mallocCheck(_lin_Qimm21, ((N) * (N) * (M) * (M)), double);
	double**** Qimm21 = (double****)malloc(sizeof(double***)*(N));
	mallocCheck(Qimm21, (N), double***);
	for (mz1=0;mz1 < N; mz1++) {
		Qimm21[mz1] = (double***)malloc(sizeof(double**)*(N));
		mallocCheck(Qimm21[mz1], (N), double**);
		for (mz2=0;mz2 < N; mz2++) {
			Qimm21[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
			mallocCheck(Qimm21[mz1][mz2], (M), double*);
			for (mz3=0;mz3 < M; mz3++) {
				Qimm21[mz1][mz2][mz3] = &_lin_Qimm21[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
			}
		}
	}
	double* _lin_Qimm22 = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
	mallocCheck(_lin_Qimm22, ((N) * (N) * (M) * (M)), double);
	double**** Qimm22 = (double****)malloc(sizeof(double***)*(N));
	mallocCheck(Qimm22, (N), double***);
	for (mz1=0;mz1 < N; mz1++) {
		Qimm22[mz1] = (double***)malloc(sizeof(double**)*(N));
		mallocCheck(Qimm22[mz1], (N), double**);
		for (mz2=0;mz2 < N; mz2++) {
			Qimm22[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
			mallocCheck(Qimm22[mz1][mz2], (M), double*);
			for (mz3=0;mz3 < M; mz3++) {
				Qimm22[mz1][mz2][mz3] = &_lin_Qimm22[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
			}
		}
	}
	double* _lin_Qimk01 = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
	mallocCheck(_lin_Qimk01, ((N) * (N) * (M) * (M)), double);
	double**** Qimk01 = (double****)malloc(sizeof(double***)*(N));
	mallocCheck(Qimk01, (N), double***);
	for (mz1=0;mz1 < N; mz1++) {
		Qimk01[mz1] = (double***)malloc(sizeof(double**)*(N));
		mallocCheck(Qimk01[mz1], (N), double**);
		for (mz2=0;mz2 < N; mz2++) {
			Qimk01[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
			mallocCheck(Qimk01[mz1][mz2], (M), double*);
			for (mz3=0;mz3 < M; mz3++) {
				Qimk01[mz1][mz2][mz3] = &_lin_Qimk01[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
			}
		}
	}
	double* _lin_Qimk11 = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
	mallocCheck(_lin_Qimk11, ((N) * (N) * (M) * (M)), double);
	double**** Qimk11 = (double****)malloc(sizeof(double***)*(N));
	mallocCheck(Qimk11, (N), double***);
	for (mz1=0;mz1 < N; mz1++) {
		Qimk11[mz1] = (double***)malloc(sizeof(double**)*(N));
		mallocCheck(Qimk11[mz1], (N), double**);
		for (mz2=0;mz2 < N; mz2++) {
			Qimk11[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
			mallocCheck(Qimk11[mz1][mz2], (M), double*);
			for (mz3=0;mz3 < M; mz3++) {
				Qimk11[mz1][mz2][mz3] = &_lin_Qimk11[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
			}
		}
	}
	double* _lin_Qimk20 = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
	mallocCheck(_lin_Qimk20, ((N) * (N) * (M) * (M)), double);
	double**** Qimk20 = (double****)malloc(sizeof(double***)*(N));
	mallocCheck(Qimk20, (N), double***);
	for (mz1=0;mz1 < N; mz1++) {
		Qimk20[mz1] = (double***)malloc(sizeof(double**)*(N));
		mallocCheck(Qimk20[mz1], (N), double**);
		for (mz2=0;mz2 < N; mz2++) {
			Qimk20[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
			mallocCheck(Qimk20[mz1][mz2], (M), double*);
			for (mz3=0;mz3 < M; mz3++) {
				Qimk20[mz1][mz2][mz3] = &_lin_Qimk20[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
			}
		}
	}
	double* _lin_Qimk21 = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
	mallocCheck(_lin_Qimk21, ((N) * (N) * (M) * (M)), double);
	double**** Qimk21 = (double****)malloc(sizeof(double***)*(N));
	mallocCheck(Qimk21, (N), double***);
	for (mz1=0;mz1 < N; mz1++) {
		Qimk21[mz1] = (double***)malloc(sizeof(double**)*(N));
		mallocCheck(Qimk21[mz1], (N), double**);
		for (mz2=0;mz2 < N; mz2++) {
			Qimk21[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
			mallocCheck(Qimk21[mz1][mz2], (M), double*);
			for (mz3=0;mz3 < M; mz3++) {
				Qimk21[mz1][mz2][mz3] = &_lin_Qimk21[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
			}
		}
	}
	double* _lin_Qikm10 = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
	mallocCheck(_lin_Qikm10, ((N) * (N) * (M) * (M)), double);
	double**** Qikm10 = (double****)malloc(sizeof(double***)*(N));
	mallocCheck(Qikm10, (N), double***);
	for (mz1=0;mz1 < N; mz1++) {
		Qikm10[mz1] = (double***)malloc(sizeof(double**)*(N));
		mallocCheck(Qikm10[mz1], (N), double**);
		for (mz2=0;mz2 < N; mz2++) {
			Qikm10[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
			mallocCheck(Qikm10[mz1][mz2], (M), double*);
			for (mz3=0;mz3 < M; mz3++) {
				Qikm10[mz1][mz2][mz3] = &_lin_Qikm10[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
			}
		}
	}
	double* _lin_Qikm11 = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
	mallocCheck(_lin_Qikm11, ((N) * (N) * (M) * (M)), double);
	double**** Qikm11 = (double****)malloc(sizeof(double***)*(N));
	mallocCheck(Qikm11, (N), double***);
	for (mz1=0;mz1 < N; mz1++) {
		Qikm11[mz1] = (double***)malloc(sizeof(double**)*(N));
		mallocCheck(Qikm11[mz1], (N), double**);
		for (mz2=0;mz2 < N; mz2++) {
			Qikm11[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
			mallocCheck(Qikm11[mz1][mz2], (M), double*);
			for (mz3=0;mz3 < M; mz3++) {
				Qikm11[mz1][mz2][mz3] = &_lin_Qikm11[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
			}
		}
	}
	double* _lin_Qikm02 = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
	mallocCheck(_lin_Qikm02, ((N) * (N) * (M) * (M)), double);
	double**** Qikm02 = (double****)malloc(sizeof(double***)*(N));
	mallocCheck(Qikm02, (N), double***);
	for (mz1=0;mz1 < N; mz1++) {
		Qikm02[mz1] = (double***)malloc(sizeof(double**)*(N));
		mallocCheck(Qikm02[mz1], (N), double**);
		for (mz2=0;mz2 < N; mz2++) {
			Qikm02[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
			mallocCheck(Qikm02[mz1][mz2], (M), double*);
			for (mz3=0;mz3 < M; mz3++) {
				Qikm02[mz1][mz2][mz3] = &_lin_Qikm02[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
			}
		}
	}
	double* _lin_Qikm12 = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
	mallocCheck(_lin_Qikm12, ((N) * (N) * (M) * (M)), double);
	double**** Qikm12 = (double****)malloc(sizeof(double***)*(N));
	mallocCheck(Qikm12, (N), double***);
	for (mz1=0;mz1 < N; mz1++) {
		Qikm12[mz1] = (double***)malloc(sizeof(double**)*(N));
		mallocCheck(Qikm12[mz1], (N), double**);
		for (mz2=0;mz2 < N; mz2++) {
			Qikm12[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
			mallocCheck(Qikm12[mz1][mz2], (M), double*);
			for (mz3=0;mz3 < M; mz3++) {
				Qikm12[mz1][mz2][mz3] = &_lin_Qikm12[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
			}
		}
	}
	double* _lin_Qikk01 = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
	mallocCheck(_lin_Qikk01, ((N) * (N) * (M) * (M)), double);
	double**** Qikk01 = (double****)malloc(sizeof(double***)*(N));
	mallocCheck(Qikk01, (N), double***);
	for (mz1=0;mz1 < N; mz1++) {
		Qikk01[mz1] = (double***)malloc(sizeof(double**)*(N));
		mallocCheck(Qikk01[mz1], (N), double**);
		for (mz2=0;mz2 < N; mz2++) {
			Qikk01[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
			mallocCheck(Qikk01[mz1][mz2], (M), double*);
			for (mz3=0;mz3 < M; mz3++) {
				Qikk01[mz1][mz2][mz3] = &_lin_Qikk01[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
			}
		}
	}
	double* _lin_Qikk10 = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
	mallocCheck(_lin_Qikk10, ((N) * (N) * (M) * (M)), double);
	double**** Qikk10 = (double****)malloc(sizeof(double***)*(N));
	mallocCheck(Qikk10, (N), double***);
	for (mz1=0;mz1 < N; mz1++) {
		Qikk10[mz1] = (double***)malloc(sizeof(double**)*(N));
		mallocCheck(Qikk10[mz1], (N), double**);
		for (mz2=0;mz2 < N; mz2++) {
			Qikk10[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
			mallocCheck(Qikk10[mz1][mz2], (M), double*);
			for (mz3=0;mz3 < M; mz3++) {
				Qikk10[mz1][mz2][mz3] = &_lin_Qikk10[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
			}
		}
	}
	double* _lin_Qikk11 = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
	mallocCheck(_lin_Qikk11, ((N) * (N) * (M) * (M)), double);
	double**** Qikk11 = (double****)malloc(sizeof(double***)*(N));
	mallocCheck(Qikk11, (N), double***);
	for (mz1=0;mz1 < N; mz1++) {
		Qikk11[mz1] = (double***)malloc(sizeof(double**)*(N));
		mallocCheck(Qikk11[mz1], (N), double**);
		for (mz2=0;mz2 < N; mz2++) {
			Qikk11[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
			mallocCheck(Qikk11[mz1][mz2], (M), double*);
			for (mz3=0;mz3 < M; mz3++) {
				Qikk11[mz1][mz2][mz3] = &_lin_Qikk11[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
			}
		}
	}
	double* _lin_Qiann01 = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
	mallocCheck(_lin_Qiann01, ((N) * (N) * (M) * (M)), double);
	double**** Qiann01 = (double****)malloc(sizeof(double***)*(N));
	mallocCheck(Qiann01, (N), double***);
	for (mz1=0;mz1 < N; mz1++) {
		Qiann01[mz1] = (double***)malloc(sizeof(double**)*(N));
		mallocCheck(Qiann01[mz1], (N), double**);
		for (mz2=0;mz2 < N; mz2++) {
			Qiann01[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
			mallocCheck(Qiann01[mz1][mz2], (M), double*);
			for (mz3=0;mz3 < M; mz3++) {
				Qiann01[mz1][mz2][mz3] = &_lin_Qiann01[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
			}
		}
	}
	double* _lin_Qiann02 = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
	mallocCheck(_lin_Qiann02, ((N) * (N) * (M) * (M)), double);
	double**** Qiann02 = (double****)malloc(sizeof(double***)*(N));
	mallocCheck(Qiann02, (N), double***);
	for (mz1=0;mz1 < N; mz1++) {
		Qiann02[mz1] = (double***)malloc(sizeof(double**)*(N));
		mallocCheck(Qiann02[mz1], (N), double**);
		for (mz2=0;mz2 < N; mz2++) {
			Qiann02[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
			mallocCheck(Qiann02[mz1][mz2], (M), double*);
			for (mz3=0;mz3 < M; mz3++) {
				Qiann02[mz1][mz2][mz3] = &_lin_Qiann02[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
			}
		}
	}
	double* _lin_Qiann10 = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
	mallocCheck(_lin_Qiann10, ((N) * (N) * (M) * (M)), double);
	double**** Qiann10 = (double****)malloc(sizeof(double***)*(N));
	mallocCheck(Qiann10, (N), double***);
	for (mz1=0;mz1 < N; mz1++) {
		Qiann10[mz1] = (double***)malloc(sizeof(double**)*(N));
		mallocCheck(Qiann10[mz1], (N), double**);
		for (mz2=0;mz2 < N; mz2++) {
			Qiann10[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
			mallocCheck(Qiann10[mz1][mz2], (M), double*);
			for (mz3=0;mz3 < M; mz3++) {
				Qiann10[mz1][mz2][mz3] = &_lin_Qiann10[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
			}
		}
	}
	double* _lin_Qiann11 = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
	mallocCheck(_lin_Qiann11, ((N) * (N) * (M) * (M)), double);
	double**** Qiann11 = (double****)malloc(sizeof(double***)*(N));
	mallocCheck(Qiann11, (N), double***);
	for (mz1=0;mz1 < N; mz1++) {
		Qiann11[mz1] = (double***)malloc(sizeof(double**)*(N));
		mallocCheck(Qiann11[mz1], (N), double**);
		for (mz2=0;mz2 < N; mz2++) {
			Qiann11[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
			mallocCheck(Qiann11[mz1][mz2], (M), double*);
			for (mz3=0;mz3 < M; mz3++) {
				Qiann11[mz1][mz2][mz3] = &_lin_Qiann11[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
			}
		}
	}
	double* _lin_Qiann12 = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
	mallocCheck(_lin_Qiann12, ((N) * (N) * (M) * (M)), double);
	double**** Qiann12 = (double****)malloc(sizeof(double***)*(N));
	mallocCheck(Qiann12, (N), double***);
	for (mz1=0;mz1 < N; mz1++) {
		Qiann12[mz1] = (double***)malloc(sizeof(double**)*(N));
		mallocCheck(Qiann12[mz1], (N), double**);
		for (mz2=0;mz2 < N; mz2++) {
			Qiann12[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
			mallocCheck(Qiann12[mz1][mz2], (M), double*);
			for (mz3=0;mz3 < M; mz3++) {
				Qiann12[mz1][mz2][mz3] = &_lin_Qiann12[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
			}
		}
	}
	double* _lin_Qiann20 = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
	mallocCheck(_lin_Qiann20, ((N) * (N) * (M) * (M)), double);
	double**** Qiann20 = (double****)malloc(sizeof(double***)*(N));
	mallocCheck(Qiann20, (N), double***);
	for (mz1=0;mz1 < N; mz1++) {
		Qiann20[mz1] = (double***)malloc(sizeof(double**)*(N));
		mallocCheck(Qiann20[mz1], (N), double**);
		for (mz2=0;mz2 < N; mz2++) {
			Qiann20[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
			mallocCheck(Qiann20[mz1][mz2], (M), double*);
			for (mz3=0;mz3 < M; mz3++) {
				Qiann20[mz1][mz2][mz3] = &_lin_Qiann20[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
			}
		}
	}
	double* _lin_Qiann21 = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
	mallocCheck(_lin_Qiann21, ((N) * (N) * (M) * (M)), double);
	double**** Qiann21 = (double****)malloc(sizeof(double***)*(N));
	mallocCheck(Qiann21, (N), double***);
	for (mz1=0;mz1 < N; mz1++) {
		Qiann21[mz1] = (double***)malloc(sizeof(double**)*(N));
		mallocCheck(Qiann21[mz1], (N), double**);
		for (mz2=0;mz2 < N; mz2++) {
			Qiann21[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
			mallocCheck(Qiann21[mz1][mz2], (M), double*);
			for (mz3=0;mz3 < M; mz3++) {
				Qiann21[mz1][mz2][mz3] = &_lin_Qiann21[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
			}
		}
	}
	double* _lin_Qiann22 = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
	mallocCheck(_lin_Qiann22, ((N) * (N) * (M) * (M)), double);
	double**** Qiann22 = (double****)malloc(sizeof(double***)*(N));
	mallocCheck(Qiann22, (N), double***);
	for (mz1=0;mz1 < N; mz1++) {
		Qiann22[mz1] = (double***)malloc(sizeof(double**)*(N));
		mallocCheck(Qiann22[mz1], (N), double**);
		for (mz2=0;mz2 < N; mz2++) {
			Qiann22[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
			mallocCheck(Qiann22[mz1][mz2], (M), double*);
			for (mz3=0;mz3 < M; mz3++) {
				Qiann22[mz1][mz2][mz3] = &_lin_Qiann22[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
			}
		}
	}
	double* _lin_Qiand01 = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
	mallocCheck(_lin_Qiand01, ((N) * (N) * (M) * (M)), double);
	double**** Qiand01 = (double****)malloc(sizeof(double***)*(N));
	mallocCheck(Qiand01, (N), double***);
	for (mz1=0;mz1 < N; mz1++) {
		Qiand01[mz1] = (double***)malloc(sizeof(double**)*(N));
		mallocCheck(Qiand01[mz1], (N), double**);
		for (mz2=0;mz2 < N; mz2++) {
			Qiand01[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
			mallocCheck(Qiand01[mz1][mz2], (M), double*);
			for (mz3=0;mz3 < M; mz3++) {
				Qiand01[mz1][mz2][mz3] = &_lin_Qiand01[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
			}
		}
	}
	double* _lin_Qiand10 = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
	mallocCheck(_lin_Qiand10, ((N) * (N) * (M) * (M)), double);
	double**** Qiand10 = (double****)malloc(sizeof(double***)*(N));
	mallocCheck(Qiand10, (N), double***);
	for (mz1=0;mz1 < N; mz1++) {
		Qiand10[mz1] = (double***)malloc(sizeof(double**)*(N));
		mallocCheck(Qiand10[mz1], (N), double**);
		for (mz2=0;mz2 < N; mz2++) {
			Qiand10[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
			mallocCheck(Qiand10[mz1][mz2], (M), double*);
			for (mz3=0;mz3 < M; mz3++) {
				Qiand10[mz1][mz2][mz3] = &_lin_Qiand10[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
			}
		}
	}
	double* _lin_Qiand11 = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
	mallocCheck(_lin_Qiand11, ((N) * (N) * (M) * (M)), double);
	double**** Qiand11 = (double****)malloc(sizeof(double***)*(N));
	mallocCheck(Qiand11, (N), double***);
	for (mz1=0;mz1 < N; mz1++) {
		Qiand11[mz1] = (double***)malloc(sizeof(double**)*(N));
		mallocCheck(Qiand11[mz1], (N), double**);
		for (mz2=0;mz2 < N; mz2++) {
			Qiand11[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
			mallocCheck(Qiand11[mz1][mz2], (M), double*);
			for (mz3=0;mz3 < M; mz3++) {
				Qiand11[mz1][mz2][mz3] = &_lin_Qiand11[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
			}
		}
	}
	double* _lin_Qiand20 = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
	mallocCheck(_lin_Qiand20, ((N) * (N) * (M) * (M)), double);
	double**** Qiand20 = (double****)malloc(sizeof(double***)*(N));
	mallocCheck(Qiand20, (N), double***);
	for (mz1=0;mz1 < N; mz1++) {
		Qiand20[mz1] = (double***)malloc(sizeof(double**)*(N));
		mallocCheck(Qiand20[mz1], (N), double**);
		for (mz2=0;mz2 < N; mz2++) {
			Qiand20[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
			mallocCheck(Qiand20[mz1][mz2], (M), double*);
			for (mz3=0;mz3 < M; mz3++) {
				Qiand20[mz1][mz2][mz3] = &_lin_Qiand20[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
			}
		}
	}
	double* _lin_Qiand21 = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
	mallocCheck(_lin_Qiand21, ((N) * (N) * (M) * (M)), double);
	double**** Qiand21 = (double****)malloc(sizeof(double***)*(N));
	mallocCheck(Qiand21, (N), double***);
	for (mz1=0;mz1 < N; mz1++) {
		Qiand21[mz1] = (double***)malloc(sizeof(double**)*(N));
		mallocCheck(Qiand21[mz1], (N), double**);
		for (mz2=0;mz2 < N; mz2++) {
			Qiand21[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
			mallocCheck(Qiand21[mz1][mz2], (M), double*);
			for (mz3=0;mz3 < M; mz3++) {
				Qiand21[mz1][mz2][mz3] = &_lin_Qiand21[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
			}
		}
	}
	double* _lin_Qiadn01 = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
	mallocCheck(_lin_Qiadn01, ((N) * (N) * (M) * (M)), double);
	double**** Qiadn01 = (double****)malloc(sizeof(double***)*(N));
	mallocCheck(Qiadn01, (N), double***);
	for (mz1=0;mz1 < N; mz1++) {
		Qiadn01[mz1] = (double***)malloc(sizeof(double**)*(N));
		mallocCheck(Qiadn01[mz1], (N), double**);
		for (mz2=0;mz2 < N; mz2++) {
			Qiadn01[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
			mallocCheck(Qiadn01[mz1][mz2], (M), double*);
			for (mz3=0;mz3 < M; mz3++) {
				Qiadn01[mz1][mz2][mz3] = &_lin_Qiadn01[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
			}
		}
	}
	double* _lin_Qiadn02 = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
	mallocCheck(_lin_Qiadn02, ((N) * (N) * (M) * (M)), double);
	double**** Qiadn02 = (double****)malloc(sizeof(double***)*(N));
	mallocCheck(Qiadn02, (N), double***);
	for (mz1=0;mz1 < N; mz1++) {
		Qiadn02[mz1] = (double***)malloc(sizeof(double**)*(N));
		mallocCheck(Qiadn02[mz1], (N), double**);
		for (mz2=0;mz2 < N; mz2++) {
			Qiadn02[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
			mallocCheck(Qiadn02[mz1][mz2], (M), double*);
			for (mz3=0;mz3 < M; mz3++) {
				Qiadn02[mz1][mz2][mz3] = &_lin_Qiadn02[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
			}
		}
	}
	double* _lin_Qiadn10 = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
	mallocCheck(_lin_Qiadn10, ((N) * (N) * (M) * (M)), double);
	double**** Qiadn10 = (double****)malloc(sizeof(double***)*(N));
	mallocCheck(Qiadn10, (N), double***);
	for (mz1=0;mz1 < N; mz1++) {
		Qiadn10[mz1] = (double***)malloc(sizeof(double**)*(N));
		mallocCheck(Qiadn10[mz1], (N), double**);
		for (mz2=0;mz2 < N; mz2++) {
			Qiadn10[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
			mallocCheck(Qiadn10[mz1][mz2], (M), double*);
			for (mz3=0;mz3 < M; mz3++) {
				Qiadn10[mz1][mz2][mz3] = &_lin_Qiadn10[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
			}
		}
	}
	double* _lin_Qiadn11 = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
	mallocCheck(_lin_Qiadn11, ((N) * (N) * (M) * (M)), double);
	double**** Qiadn11 = (double****)malloc(sizeof(double***)*(N));
	mallocCheck(Qiadn11, (N), double***);
	for (mz1=0;mz1 < N; mz1++) {
		Qiadn11[mz1] = (double***)malloc(sizeof(double**)*(N));
		mallocCheck(Qiadn11[mz1], (N), double**);
		for (mz2=0;mz2 < N; mz2++) {
			Qiadn11[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
			mallocCheck(Qiadn11[mz1][mz2], (M), double*);
			for (mz3=0;mz3 < M; mz3++) {
				Qiadn11[mz1][mz2][mz3] = &_lin_Qiadn11[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
			}
		}
	}
	double* _lin_Qiadn12 = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
	mallocCheck(_lin_Qiadn12, ((N) * (N) * (M) * (M)), double);
	double**** Qiadn12 = (double****)malloc(sizeof(double***)*(N));
	mallocCheck(Qiadn12, (N), double***);
	for (mz1=0;mz1 < N; mz1++) {
		Qiadn12[mz1] = (double***)malloc(sizeof(double**)*(N));
		mallocCheck(Qiadn12[mz1], (N), double**);
		for (mz2=0;mz2 < N; mz2++) {
			Qiadn12[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
			mallocCheck(Qiadn12[mz1][mz2], (M), double*);
			for (mz3=0;mz3 < M; mz3++) {
				Qiadn12[mz1][mz2][mz3] = &_lin_Qiadn12[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
			}
		}
	}
	double* _lin_Qiadd01 = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
	mallocCheck(_lin_Qiadd01, ((N) * (N) * (M) * (M)), double);
	double**** Qiadd01 = (double****)malloc(sizeof(double***)*(N));
	mallocCheck(Qiadd01, (N), double***);
	for (mz1=0;mz1 < N; mz1++) {
		Qiadd01[mz1] = (double***)malloc(sizeof(double**)*(N));
		mallocCheck(Qiadd01[mz1], (N), double**);
		for (mz2=0;mz2 < N; mz2++) {
			Qiadd01[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
			mallocCheck(Qiadd01[mz1][mz2], (M), double*);
			for (mz3=0;mz3 < M; mz3++) {
				Qiadd01[mz1][mz2][mz3] = &_lin_Qiadd01[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
			}
		}
	}
	double* _lin_Qiadd10 = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
	mallocCheck(_lin_Qiadd10, ((N) * (N) * (M) * (M)), double);
	double**** Qiadd10 = (double****)malloc(sizeof(double***)*(N));
	mallocCheck(Qiadd10, (N), double***);
	for (mz1=0;mz1 < N; mz1++) {
		Qiadd10[mz1] = (double***)malloc(sizeof(double**)*(N));
		mallocCheck(Qiadd10[mz1], (N), double**);
		for (mz2=0;mz2 < N; mz2++) {
			Qiadd10[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
			mallocCheck(Qiadd10[mz1][mz2], (M), double*);
			for (mz3=0;mz3 < M; mz3++) {
				Qiadd10[mz1][mz2][mz3] = &_lin_Qiadd10[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
			}
		}
	}
	double* _lin_Qiadd11 = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
	mallocCheck(_lin_Qiadd11, ((N) * (N) * (M) * (M)), double);
	double**** Qiadd11 = (double****)malloc(sizeof(double***)*(N));
	mallocCheck(Qiadd11, (N), double***);
	for (mz1=0;mz1 < N; mz1++) {
		Qiadd11[mz1] = (double***)malloc(sizeof(double**)*(N));
		mallocCheck(Qiadd11[mz1], (N), double**);
		for (mz2=0;mz2 < N; mz2++) {
			Qiadd11[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
			mallocCheck(Qiadd11[mz1][mz2], (M), double*);
			for (mz3=0;mz3 < M; mz3++) {
				Qiadd11[mz1][mz2][mz3] = &_lin_Qiadd11[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
			}
		}
	}
	double* _lin_Qiar01 = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
	mallocCheck(_lin_Qiar01, ((N) * (N) * (M) * (M)), double);
	double**** Qiar01 = (double****)malloc(sizeof(double***)*(N));
	mallocCheck(Qiar01, (N), double***);
	for (mz1=0;mz1 < N; mz1++) {
		Qiar01[mz1] = (double***)malloc(sizeof(double**)*(N));
		mallocCheck(Qiar01[mz1], (N), double**);
		for (mz2=0;mz2 < N; mz2++) {
			Qiar01[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
			mallocCheck(Qiar01[mz1][mz2], (M), double*);
			for (mz3=0;mz3 < M; mz3++) {
				Qiar01[mz1][mz2][mz3] = &_lin_Qiar01[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
			}
		}
	}
	double* _lin_Qiar10 = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
	mallocCheck(_lin_Qiar10, ((N) * (N) * (M) * (M)), double);
	double**** Qiar10 = (double****)malloc(sizeof(double***)*(N));
	mallocCheck(Qiar10, (N), double***);
	for (mz1=0;mz1 < N; mz1++) {
		Qiar10[mz1] = (double***)malloc(sizeof(double**)*(N));
		mallocCheck(Qiar10[mz1], (N), double**);
		for (mz2=0;mz2 < N; mz2++) {
			Qiar10[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
			mallocCheck(Qiar10[mz1][mz2], (M), double*);
			for (mz3=0;mz3 < M; mz3++) {
				Qiar10[mz1][mz2][mz3] = &_lin_Qiar10[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
			}
		}
	}
	double* _lin_Qiar11 = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
	mallocCheck(_lin_Qiar11, ((N) * (N) * (M) * (M)), double);
	double**** Qiar11 = (double****)malloc(sizeof(double***)*(N));
	mallocCheck(Qiar11, (N), double***);
	for (mz1=0;mz1 < N; mz1++) {
		Qiar11[mz1] = (double***)malloc(sizeof(double**)*(N));
		mallocCheck(Qiar11[mz1], (N), double**);
		for (mz2=0;mz2 < N; mz2++) {
			Qiar11[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
			mallocCheck(Qiar11[mz1][mz2], (M), double*);
			for (mz3=0;mz3 < M; mz3++) {
				Qiar11[mz1][mz2][mz3] = &_lin_Qiar11[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
			}
		}
	}
	double* _lin_Qilr01 = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
	mallocCheck(_lin_Qilr01, ((N) * (N) * (M) * (M)), double);
	double**** Qilr01 = (double****)malloc(sizeof(double***)*(N));
	mallocCheck(Qilr01, (N), double***);
	for (mz1=0;mz1 < N; mz1++) {
		Qilr01[mz1] = (double***)malloc(sizeof(double**)*(N));
		mallocCheck(Qilr01[mz1], (N), double**);
		for (mz2=0;mz2 < N; mz2++) {
			Qilr01[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
			mallocCheck(Qilr01[mz1][mz2], (M), double*);
			for (mz3=0;mz3 < M; mz3++) {
				Qilr01[mz1][mz2][mz3] = &_lin_Qilr01[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
			}
		}
	}
	double* _lin_Qilr10 = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
	mallocCheck(_lin_Qilr10, ((N) * (N) * (M) * (M)), double);
	double**** Qilr10 = (double****)malloc(sizeof(double***)*(N));
	mallocCheck(Qilr10, (N), double***);
	for (mz1=0;mz1 < N; mz1++) {
		Qilr10[mz1] = (double***)malloc(sizeof(double**)*(N));
		mallocCheck(Qilr10[mz1], (N), double**);
		for (mz2=0;mz2 < N; mz2++) {
			Qilr10[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
			mallocCheck(Qilr10[mz1][mz2], (M), double*);
			for (mz3=0;mz3 < M; mz3++) {
				Qilr10[mz1][mz2][mz3] = &_lin_Qilr10[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
			}
		}
	}
	double* _lin_Qilr11 = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
	mallocCheck(_lin_Qilr11, ((N) * (N) * (M) * (M)), double);
	double**** Qilr11 = (double****)malloc(sizeof(double***)*(N));
	mallocCheck(Qilr11, (N), double***);
	for (mz1=0;mz1 < N; mz1++) {
		Qilr11[mz1] = (double***)malloc(sizeof(double**)*(N));
		mallocCheck(Qilr11[mz1], (N), double**);
		for (mz2=0;mz2 < N; mz2++) {
			Qilr11[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
			mallocCheck(Qilr11[mz1][mz2], (M), double*);
			for (mz3=0;mz3 < M; mz3++) {
				Qilr11[mz1][mz2][mz3] = &_lin_Qilr11[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
			}
		}
	}
	double* _lin_Qir01 = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
	mallocCheck(_lin_Qir01, ((N) * (N) * (M) * (M)), double);
	double**** Qir01 = (double****)malloc(sizeof(double***)*(N));
	mallocCheck(Qir01, (N), double***);
	for (mz1=0;mz1 < N; mz1++) {
		Qir01[mz1] = (double***)malloc(sizeof(double**)*(N));
		mallocCheck(Qir01[mz1], (N), double**);
		for (mz2=0;mz2 < N; mz2++) {
			Qir01[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
			mallocCheck(Qir01[mz1][mz2], (M), double*);
			for (mz3=0;mz3 < M; mz3++) {
				Qir01[mz1][mz2][mz3] = &_lin_Qir01[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
			}
		}
	}
	double* _lin_Qir10 = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
	mallocCheck(_lin_Qir10, ((N) * (N) * (M) * (M)), double);
	double**** Qir10 = (double****)malloc(sizeof(double***)*(N));
	mallocCheck(Qir10, (N), double***);
	for (mz1=0;mz1 < N; mz1++) {
		Qir10[mz1] = (double***)malloc(sizeof(double**)*(N));
		mallocCheck(Qir10[mz1], (N), double**);
		for (mz2=0;mz2 < N; mz2++) {
			Qir10[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
			mallocCheck(Qir10[mz1][mz2], (M), double*);
			for (mz3=0;mz3 < M; mz3++) {
				Qir10[mz1][mz2][mz3] = &_lin_Qir10[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
			}
		}
	}
	double* _lin_Qir11 = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
	mallocCheck(_lin_Qir11, ((N) * (N) * (M) * (M)), double);
	double**** Qir11 = (double****)malloc(sizeof(double***)*(N));
	mallocCheck(Qir11, (N), double***);
	for (mz1=0;mz1 < N; mz1++) {
		Qir11[mz1] = (double***)malloc(sizeof(double**)*(N));
		mallocCheck(Qir11[mz1], (N), double**);
		for (mz2=0;mz2 < N; mz2++) {
			Qir11[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
			mallocCheck(Qir11[mz1][mz2], (M), double*);
			for (mz3=0;mz3 < M; mz3++) {
				Qir11[mz1][mz2][mz3] = &_lin_Qir11[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
			}
		}
	}
	double* _lin_Qia = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
	mallocCheck(_lin_Qia, ((N) * (N) * (M) * (M)), double);
	double**** Qia = (double****)malloc(sizeof(double***)*(N));
	mallocCheck(Qia, (N), double***);
	for (mz1=0;mz1 < N; mz1++) {
		Qia[mz1] = (double***)malloc(sizeof(double**)*(N));
		mallocCheck(Qia[mz1], (N), double**);
		for (mz2=0;mz2 < N; mz2++) {
			Qia[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
			mallocCheck(Qia[mz1][mz2], (M), double*);
			for (mz3=0;mz3 < M; mz3++) {
				Qia[mz1][mz2][mz3] = &_lin_Qia[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
			}
		}
	}
	double* _lin_Qib00 = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
	mallocCheck(_lin_Qib00, ((N) * (N) * (M) * (M)), double);
	double**** Qib00 = (double****)malloc(sizeof(double***)*(N));
	mallocCheck(Qib00, (N), double***);
	for (mz1=0;mz1 < N; mz1++) {
		Qib00[mz1] = (double***)malloc(sizeof(double**)*(N));
		mallocCheck(Qib00[mz1], (N), double**);
		for (mz2=0;mz2 < N; mz2++) {
			Qib00[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
			mallocCheck(Qib00[mz1][mz2], (M), double*);
			for (mz3=0;mz3 < M; mz3++) {
				Qib00[mz1][mz2][mz3] = &_lin_Qib00[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
			}
		}
	}
	double* _lin_Qib01 = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
	mallocCheck(_lin_Qib01, ((N) * (N) * (M) * (M)), double);
	double**** Qib01 = (double****)malloc(sizeof(double***)*(N));
	mallocCheck(Qib01, (N), double***);
	for (mz1=0;mz1 < N; mz1++) {
		Qib01[mz1] = (double***)malloc(sizeof(double**)*(N));
		mallocCheck(Qib01[mz1], (N), double**);
		for (mz2=0;mz2 < N; mz2++) {
			Qib01[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
			mallocCheck(Qib01[mz1][mz2], (M), double*);
			for (mz3=0;mz3 < M; mz3++) {
				Qib01[mz1][mz2][mz3] = &_lin_Qib01[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
			}
		}
	}
	double* _lin_Qib10 = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
	mallocCheck(_lin_Qib10, ((N) * (N) * (M) * (M)), double);
	double**** Qib10 = (double****)malloc(sizeof(double***)*(N));
	mallocCheck(Qib10, (N), double***);
	for (mz1=0;mz1 < N; mz1++) {
		Qib10[mz1] = (double***)malloc(sizeof(double**)*(N));
		mallocCheck(Qib10[mz1], (N), double**);
		for (mz2=0;mz2 < N; mz2++) {
			Qib10[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
			mallocCheck(Qib10[mz1][mz2], (M), double*);
			for (mz3=0;mz3 < M; mz3++) {
				Qib10[mz1][mz2][mz3] = &_lin_Qib10[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
			}
		}
	}
	double* _lin_Qib11 = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
	mallocCheck(_lin_Qib11, ((N) * (N) * (M) * (M)), double);
	double**** Qib11 = (double****)malloc(sizeof(double***)*(N));
	mallocCheck(Qib11, (N), double***);
	for (mz1=0;mz1 < N; mz1++) {
		Qib11[mz1] = (double***)malloc(sizeof(double**)*(N));
		mallocCheck(Qib11[mz1], (N), double**);
		for (mz2=0;mz2 < N; mz2++) {
			Qib11[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
			mallocCheck(Qib11[mz1][mz2], (M), double*);
			for (mz3=0;mz3 < M; mz3++) {
				Qib11[mz1][mz2][mz3] = &_lin_Qib11[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
			}
		}
	}
	double* _lin_Qinn01 = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
	mallocCheck(_lin_Qinn01, ((N) * (N) * (M) * (M)), double);
	double**** Qinn01 = (double****)malloc(sizeof(double***)*(N));
	mallocCheck(Qinn01, (N), double***);
	for (mz1=0;mz1 < N; mz1++) {
		Qinn01[mz1] = (double***)malloc(sizeof(double**)*(N));
		mallocCheck(Qinn01[mz1], (N), double**);
		for (mz2=0;mz2 < N; mz2++) {
			Qinn01[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
			mallocCheck(Qinn01[mz1][mz2], (M), double*);
			for (mz3=0;mz3 < M; mz3++) {
				Qinn01[mz1][mz2][mz3] = &_lin_Qinn01[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
			}
		}
	}
	double* _lin_Qinn02 = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
	mallocCheck(_lin_Qinn02, ((N) * (N) * (M) * (M)), double);
	double**** Qinn02 = (double****)malloc(sizeof(double***)*(N));
	mallocCheck(Qinn02, (N), double***);
	for (mz1=0;mz1 < N; mz1++) {
		Qinn02[mz1] = (double***)malloc(sizeof(double**)*(N));
		mallocCheck(Qinn02[mz1], (N), double**);
		for (mz2=0;mz2 < N; mz2++) {
			Qinn02[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
			mallocCheck(Qinn02[mz1][mz2], (M), double*);
			for (mz3=0;mz3 < M; mz3++) {
				Qinn02[mz1][mz2][mz3] = &_lin_Qinn02[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
			}
		}
	}
	double* _lin_Qinn10 = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
	mallocCheck(_lin_Qinn10, ((N) * (N) * (M) * (M)), double);
	double**** Qinn10 = (double****)malloc(sizeof(double***)*(N));
	mallocCheck(Qinn10, (N), double***);
	for (mz1=0;mz1 < N; mz1++) {
		Qinn10[mz1] = (double***)malloc(sizeof(double**)*(N));
		mallocCheck(Qinn10[mz1], (N), double**);
		for (mz2=0;mz2 < N; mz2++) {
			Qinn10[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
			mallocCheck(Qinn10[mz1][mz2], (M), double*);
			for (mz3=0;mz3 < M; mz3++) {
				Qinn10[mz1][mz2][mz3] = &_lin_Qinn10[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
			}
		}
	}
	double* _lin_Qinn11 = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
	mallocCheck(_lin_Qinn11, ((N) * (N) * (M) * (M)), double);
	double**** Qinn11 = (double****)malloc(sizeof(double***)*(N));
	mallocCheck(Qinn11, (N), double***);
	for (mz1=0;mz1 < N; mz1++) {
		Qinn11[mz1] = (double***)malloc(sizeof(double**)*(N));
		mallocCheck(Qinn11[mz1], (N), double**);
		for (mz2=0;mz2 < N; mz2++) {
			Qinn11[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
			mallocCheck(Qinn11[mz1][mz2], (M), double*);
			for (mz3=0;mz3 < M; mz3++) {
				Qinn11[mz1][mz2][mz3] = &_lin_Qinn11[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
			}
		}
	}
	double* _lin_Qinn12 = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
	mallocCheck(_lin_Qinn12, ((N) * (N) * (M) * (M)), double);
	double**** Qinn12 = (double****)malloc(sizeof(double***)*(N));
	mallocCheck(Qinn12, (N), double***);
	for (mz1=0;mz1 < N; mz1++) {
		Qinn12[mz1] = (double***)malloc(sizeof(double**)*(N));
		mallocCheck(Qinn12[mz1], (N), double**);
		for (mz2=0;mz2 < N; mz2++) {
			Qinn12[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
			mallocCheck(Qinn12[mz1][mz2], (M), double*);
			for (mz3=0;mz3 < M; mz3++) {
				Qinn12[mz1][mz2][mz3] = &_lin_Qinn12[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
			}
		}
	}
	double* _lin_Qinn20 = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
	mallocCheck(_lin_Qinn20, ((N) * (N) * (M) * (M)), double);
	double**** Qinn20 = (double****)malloc(sizeof(double***)*(N));
	mallocCheck(Qinn20, (N), double***);
	for (mz1=0;mz1 < N; mz1++) {
		Qinn20[mz1] = (double***)malloc(sizeof(double**)*(N));
		mallocCheck(Qinn20[mz1], (N), double**);
		for (mz2=0;mz2 < N; mz2++) {
			Qinn20[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
			mallocCheck(Qinn20[mz1][mz2], (M), double*);
			for (mz3=0;mz3 < M; mz3++) {
				Qinn20[mz1][mz2][mz3] = &_lin_Qinn20[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
			}
		}
	}
	double* _lin_Qinn21 = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
	mallocCheck(_lin_Qinn21, ((N) * (N) * (M) * (M)), double);
	double**** Qinn21 = (double****)malloc(sizeof(double***)*(N));
	mallocCheck(Qinn21, (N), double***);
	for (mz1=0;mz1 < N; mz1++) {
		Qinn21[mz1] = (double***)malloc(sizeof(double**)*(N));
		mallocCheck(Qinn21[mz1], (N), double**);
		for (mz2=0;mz2 < N; mz2++) {
			Qinn21[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
			mallocCheck(Qinn21[mz1][mz2], (M), double*);
			for (mz3=0;mz3 < M; mz3++) {
				Qinn21[mz1][mz2][mz3] = &_lin_Qinn21[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
			}
		}
	}
	double* _lin_Qinn22 = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
	mallocCheck(_lin_Qinn22, ((N) * (N) * (M) * (M)), double);
	double**** Qinn22 = (double****)malloc(sizeof(double***)*(N));
	mallocCheck(Qinn22, (N), double***);
	for (mz1=0;mz1 < N; mz1++) {
		Qinn22[mz1] = (double***)malloc(sizeof(double**)*(N));
		mallocCheck(Qinn22[mz1], (N), double**);
		for (mz2=0;mz2 < N; mz2++) {
			Qinn22[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
			mallocCheck(Qinn22[mz1][mz2], (M), double*);
			for (mz3=0;mz3 < M; mz3++) {
				Qinn22[mz1][mz2][mz3] = &_lin_Qinn22[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
			}
		}
	}
	double* _lin_Qind01 = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
	mallocCheck(_lin_Qind01, ((N) * (N) * (M) * (M)), double);
	double**** Qind01 = (double****)malloc(sizeof(double***)*(N));
	mallocCheck(Qind01, (N), double***);
	for (mz1=0;mz1 < N; mz1++) {
		Qind01[mz1] = (double***)malloc(sizeof(double**)*(N));
		mallocCheck(Qind01[mz1], (N), double**);
		for (mz2=0;mz2 < N; mz2++) {
			Qind01[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
			mallocCheck(Qind01[mz1][mz2], (M), double*);
			for (mz3=0;mz3 < M; mz3++) {
				Qind01[mz1][mz2][mz3] = &_lin_Qind01[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
			}
		}
	}
	double* _lin_Qind10 = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
	mallocCheck(_lin_Qind10, ((N) * (N) * (M) * (M)), double);
	double**** Qind10 = (double****)malloc(sizeof(double***)*(N));
	mallocCheck(Qind10, (N), double***);
	for (mz1=0;mz1 < N; mz1++) {
		Qind10[mz1] = (double***)malloc(sizeof(double**)*(N));
		mallocCheck(Qind10[mz1], (N), double**);
		for (mz2=0;mz2 < N; mz2++) {
			Qind10[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
			mallocCheck(Qind10[mz1][mz2], (M), double*);
			for (mz3=0;mz3 < M; mz3++) {
				Qind10[mz1][mz2][mz3] = &_lin_Qind10[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
			}
		}
	}
	double* _lin_Qind11 = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
	mallocCheck(_lin_Qind11, ((N) * (N) * (M) * (M)), double);
	double**** Qind11 = (double****)malloc(sizeof(double***)*(N));
	mallocCheck(Qind11, (N), double***);
	for (mz1=0;mz1 < N; mz1++) {
		Qind11[mz1] = (double***)malloc(sizeof(double**)*(N));
		mallocCheck(Qind11[mz1], (N), double**);
		for (mz2=0;mz2 < N; mz2++) {
			Qind11[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
			mallocCheck(Qind11[mz1][mz2], (M), double*);
			for (mz3=0;mz3 < M; mz3++) {
				Qind11[mz1][mz2][mz3] = &_lin_Qind11[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
			}
		}
	}
	double* _lin_Qind20 = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
	mallocCheck(_lin_Qind20, ((N) * (N) * (M) * (M)), double);
	double**** Qind20 = (double****)malloc(sizeof(double***)*(N));
	mallocCheck(Qind20, (N), double***);
	for (mz1=0;mz1 < N; mz1++) {
		Qind20[mz1] = (double***)malloc(sizeof(double**)*(N));
		mallocCheck(Qind20[mz1], (N), double**);
		for (mz2=0;mz2 < N; mz2++) {
			Qind20[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
			mallocCheck(Qind20[mz1][mz2], (M), double*);
			for (mz3=0;mz3 < M; mz3++) {
				Qind20[mz1][mz2][mz3] = &_lin_Qind20[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
			}
		}
	}
	double* _lin_Qind21 = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
	mallocCheck(_lin_Qind21, ((N) * (N) * (M) * (M)), double);
	double**** Qind21 = (double****)malloc(sizeof(double***)*(N));
	mallocCheck(Qind21, (N), double***);
	for (mz1=0;mz1 < N; mz1++) {
		Qind21[mz1] = (double***)malloc(sizeof(double**)*(N));
		mallocCheck(Qind21[mz1], (N), double**);
		for (mz2=0;mz2 < N; mz2++) {
			Qind21[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
			mallocCheck(Qind21[mz1][mz2], (M), double*);
			for (mz3=0;mz3 < M; mz3++) {
				Qind21[mz1][mz2][mz3] = &_lin_Qind21[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
			}
		}
	}
	double* _lin_Qidn01 = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
	mallocCheck(_lin_Qidn01, ((N) * (N) * (M) * (M)), double);
	double**** Qidn01 = (double****)malloc(sizeof(double***)*(N));
	mallocCheck(Qidn01, (N), double***);
	for (mz1=0;mz1 < N; mz1++) {
		Qidn01[mz1] = (double***)malloc(sizeof(double**)*(N));
		mallocCheck(Qidn01[mz1], (N), double**);
		for (mz2=0;mz2 < N; mz2++) {
			Qidn01[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
			mallocCheck(Qidn01[mz1][mz2], (M), double*);
			for (mz3=0;mz3 < M; mz3++) {
				Qidn01[mz1][mz2][mz3] = &_lin_Qidn01[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
			}
		}
	}
	double* _lin_Qidn02 = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
	mallocCheck(_lin_Qidn02, ((N) * (N) * (M) * (M)), double);
	double**** Qidn02 = (double****)malloc(sizeof(double***)*(N));
	mallocCheck(Qidn02, (N), double***);
	for (mz1=0;mz1 < N; mz1++) {
		Qidn02[mz1] = (double***)malloc(sizeof(double**)*(N));
		mallocCheck(Qidn02[mz1], (N), double**);
		for (mz2=0;mz2 < N; mz2++) {
			Qidn02[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
			mallocCheck(Qidn02[mz1][mz2], (M), double*);
			for (mz3=0;mz3 < M; mz3++) {
				Qidn02[mz1][mz2][mz3] = &_lin_Qidn02[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
			}
		}
	}
	double* _lin_Qidn10 = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
	mallocCheck(_lin_Qidn10, ((N) * (N) * (M) * (M)), double);
	double**** Qidn10 = (double****)malloc(sizeof(double***)*(N));
	mallocCheck(Qidn10, (N), double***);
	for (mz1=0;mz1 < N; mz1++) {
		Qidn10[mz1] = (double***)malloc(sizeof(double**)*(N));
		mallocCheck(Qidn10[mz1], (N), double**);
		for (mz2=0;mz2 < N; mz2++) {
			Qidn10[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
			mallocCheck(Qidn10[mz1][mz2], (M), double*);
			for (mz3=0;mz3 < M; mz3++) {
				Qidn10[mz1][mz2][mz3] = &_lin_Qidn10[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
			}
		}
	}
	double* _lin_Qidn11 = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
	mallocCheck(_lin_Qidn11, ((N) * (N) * (M) * (M)), double);
	double**** Qidn11 = (double****)malloc(sizeof(double***)*(N));
	mallocCheck(Qidn11, (N), double***);
	for (mz1=0;mz1 < N; mz1++) {
		Qidn11[mz1] = (double***)malloc(sizeof(double**)*(N));
		mallocCheck(Qidn11[mz1], (N), double**);
		for (mz2=0;mz2 < N; mz2++) {
			Qidn11[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
			mallocCheck(Qidn11[mz1][mz2], (M), double*);
			for (mz3=0;mz3 < M; mz3++) {
				Qidn11[mz1][mz2][mz3] = &_lin_Qidn11[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
			}
		}
	}
	double* _lin_Qidn12 = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
	mallocCheck(_lin_Qidn12, ((N) * (N) * (M) * (M)), double);
	double**** Qidn12 = (double****)malloc(sizeof(double***)*(N));
	mallocCheck(Qidn12, (N), double***);
	for (mz1=0;mz1 < N; mz1++) {
		Qidn12[mz1] = (double***)malloc(sizeof(double**)*(N));
		mallocCheck(Qidn12[mz1], (N), double**);
		for (mz2=0;mz2 < N; mz2++) {
			Qidn12[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
			mallocCheck(Qidn12[mz1][mz2], (M), double*);
			for (mz3=0;mz3 < M; mz3++) {
				Qidn12[mz1][mz2][mz3] = &_lin_Qidn12[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
			}
		}
	}
	double* _lin_Qidd01 = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
	mallocCheck(_lin_Qidd01, ((N) * (N) * (M) * (M)), double);
	double**** Qidd01 = (double****)malloc(sizeof(double***)*(N));
	mallocCheck(Qidd01, (N), double***);
	for (mz1=0;mz1 < N; mz1++) {
		Qidd01[mz1] = (double***)malloc(sizeof(double**)*(N));
		mallocCheck(Qidd01[mz1], (N), double**);
		for (mz2=0;mz2 < N; mz2++) {
			Qidd01[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
			mallocCheck(Qidd01[mz1][mz2], (M), double*);
			for (mz3=0;mz3 < M; mz3++) {
				Qidd01[mz1][mz2][mz3] = &_lin_Qidd01[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
			}
		}
	}
	double* _lin_Qidd10 = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
	mallocCheck(_lin_Qidd10, ((N) * (N) * (M) * (M)), double);
	double**** Qidd10 = (double****)malloc(sizeof(double***)*(N));
	mallocCheck(Qidd10, (N), double***);
	for (mz1=0;mz1 < N; mz1++) {
		Qidd10[mz1] = (double***)malloc(sizeof(double**)*(N));
		mallocCheck(Qidd10[mz1], (N), double**);
		for (mz2=0;mz2 < N; mz2++) {
			Qidd10[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
			mallocCheck(Qidd10[mz1][mz2], (M), double*);
			for (mz3=0;mz3 < M; mz3++) {
				Qidd10[mz1][mz2][mz3] = &_lin_Qidd10[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
			}
		}
	}
	double* _lin_Qidd11 = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
	mallocCheck(_lin_Qidd11, ((N) * (N) * (M) * (M)), double);
	double**** Qidd11 = (double****)malloc(sizeof(double***)*(N));
	mallocCheck(Qidd11, (N), double***);
	for (mz1=0;mz1 < N; mz1++) {
		Qidd11[mz1] = (double***)malloc(sizeof(double**)*(N));
		mallocCheck(Qidd11[mz1], (N), double**);
		for (mz2=0;mz2 < N; mz2++) {
			Qidd11[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
			mallocCheck(Qidd11[mz1][mz2], (M), double*);
			for (mz3=0;mz3 < M; mz3++) {
				Qidd11[mz1][mz2][mz3] = &_lin_Qidd11[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
			}
		}
	}
	double* _lin_Qix00 = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
	mallocCheck(_lin_Qix00, ((N) * (N) * (M) * (M)), double);
	double**** Qix00 = (double****)malloc(sizeof(double***)*(N));
	mallocCheck(Qix00, (N), double***);
	for (mz1=0;mz1 < N; mz1++) {
		Qix00[mz1] = (double***)malloc(sizeof(double**)*(N));
		mallocCheck(Qix00[mz1], (N), double**);
		for (mz2=0;mz2 < N; mz2++) {
			Qix00[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
			mallocCheck(Qix00[mz1][mz2], (M), double*);
			for (mz3=0;mz3 < M; mz3++) {
				Qix00[mz1][mz2][mz3] = &_lin_Qix00[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
			}
		}
	}
	double* _lin_Qix01 = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
	mallocCheck(_lin_Qix01, ((N) * (N) * (M) * (M)), double);
	double**** Qix01 = (double****)malloc(sizeof(double***)*(N));
	mallocCheck(Qix01, (N), double***);
	for (mz1=0;mz1 < N; mz1++) {
		Qix01[mz1] = (double***)malloc(sizeof(double**)*(N));
		mallocCheck(Qix01[mz1], (N), double**);
		for (mz2=0;mz2 < N; mz2++) {
			Qix01[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
			mallocCheck(Qix01[mz1][mz2], (M), double*);
			for (mz3=0;mz3 < M; mz3++) {
				Qix01[mz1][mz2][mz3] = &_lin_Qix01[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
			}
		}
	}
	double* _lin_Qix10 = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
	mallocCheck(_lin_Qix10, ((N) * (N) * (M) * (M)), double);
	double**** Qix10 = (double****)malloc(sizeof(double***)*(N));
	mallocCheck(Qix10, (N), double***);
	for (mz1=0;mz1 < N; mz1++) {
		Qix10[mz1] = (double***)malloc(sizeof(double**)*(N));
		mallocCheck(Qix10[mz1], (N), double**);
		for (mz2=0;mz2 < N; mz2++) {
			Qix10[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
			mallocCheck(Qix10[mz1][mz2], (M), double*);
			for (mz3=0;mz3 < M; mz3++) {
				Qix10[mz1][mz2][mz3] = &_lin_Qix10[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
			}
		}
	}
	double* _lin_Qix11 = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
	mallocCheck(_lin_Qix11, ((N) * (N) * (M) * (M)), double);
	double**** Qix11 = (double****)malloc(sizeof(double***)*(N));
	mallocCheck(Qix11, (N), double***);
	for (mz1=0;mz1 < N; mz1++) {
		Qix11[mz1] = (double***)malloc(sizeof(double**)*(N));
		mallocCheck(Qix11[mz1], (N), double**);
		for (mz2=0;mz2 < N; mz2++) {
			Qix11[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
			mallocCheck(Qix11[mz1][mz2], (M), double*);
			for (mz3=0;mz3 < M; mz3++) {
				Qix11[mz1][mz2][mz3] = &_lin_Qix11[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
			}
		}
	}
	double* _lin_auxqiadd01 = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
	mallocCheck(_lin_auxqiadd01, ((N) * (N) * (M) * (M)), double);
	double**** auxqiadd01 = (double****)malloc(sizeof(double***)*(N));
	mallocCheck(auxqiadd01, (N), double***);
	for (mz1=0;mz1 < N; mz1++) {
		auxqiadd01[mz1] = (double***)malloc(sizeof(double**)*(N));
		mallocCheck(auxqiadd01[mz1], (N), double**);
		for (mz2=0;mz2 < N; mz2++) {
			auxqiadd01[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
			mallocCheck(auxqiadd01[mz1][mz2], (M), double*);
			for (mz3=0;mz3 < M; mz3++) {
				auxqiadd01[mz1][mz2][mz3] = &_lin_auxqiadd01[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
			}
		}
	}
	double* _lin_auxqiadd10 = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
	mallocCheck(_lin_auxqiadd10, ((N) * (N) * (M) * (M)), double);
	double**** auxqiadd10 = (double****)malloc(sizeof(double***)*(N));
	mallocCheck(auxqiadd10, (N), double***);
	for (mz1=0;mz1 < N; mz1++) {
		auxqiadd10[mz1] = (double***)malloc(sizeof(double**)*(N));
		mallocCheck(auxqiadd10[mz1], (N), double**);
		for (mz2=0;mz2 < N; mz2++) {
			auxqiadd10[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
			mallocCheck(auxqiadd10[mz1][mz2], (M), double*);
			for (mz3=0;mz3 < M; mz3++) {
				auxqiadd10[mz1][mz2][mz3] = &_lin_auxqiadd10[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
			}
		}
	}
	double* _lin_auxqiadd11 = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
	mallocCheck(_lin_auxqiadd11, ((N) * (N) * (M) * (M)), double);
	double**** auxqiadd11 = (double****)malloc(sizeof(double***)*(N));
	mallocCheck(auxqiadd11, (N), double***);
	for (mz1=0;mz1 < N; mz1++) {
		auxqiadd11[mz1] = (double***)malloc(sizeof(double**)*(N));
		mallocCheck(auxqiadd11[mz1], (N), double**);
		for (mz2=0;mz2 < N; mz2++) {
			auxqiadd11[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
			mallocCheck(auxqiadd11[mz1][mz2], (M), double*);
			for (mz3=0;mz3 < M; mz3++) {
				auxqiadd11[mz1][mz2][mz3] = &_lin_auxqiadd11[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
			}
		}
	}
	double* _lin_auxqia01 = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
	mallocCheck(_lin_auxqia01, ((N) * (N) * (M) * (M)), double);
	double**** auxqia01 = (double****)malloc(sizeof(double***)*(N));
	mallocCheck(auxqia01, (N), double***);
	for (mz1=0;mz1 < N; mz1++) {
		auxqia01[mz1] = (double***)malloc(sizeof(double**)*(N));
		mallocCheck(auxqia01[mz1], (N), double**);
		for (mz2=0;mz2 < N; mz2++) {
			auxqia01[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
			mallocCheck(auxqia01[mz1][mz2], (M), double*);
			for (mz3=0;mz3 < M; mz3++) {
				auxqia01[mz1][mz2][mz3] = &_lin_auxqia01[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
			}
		}
	}
	double* _lin_auxqia10 = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
	mallocCheck(_lin_auxqia10, ((N) * (N) * (M) * (M)), double);
	double**** auxqia10 = (double****)malloc(sizeof(double***)*(N));
	mallocCheck(auxqia10, (N), double***);
	for (mz1=0;mz1 < N; mz1++) {
		auxqia10[mz1] = (double***)malloc(sizeof(double**)*(N));
		mallocCheck(auxqia10[mz1], (N), double**);
		for (mz2=0;mz2 < N; mz2++) {
			auxqia10[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
			mallocCheck(auxqia10[mz1][mz2], (M), double*);
			for (mz3=0;mz3 < M; mz3++) {
				auxqia10[mz1][mz2][mz3] = &_lin_auxqia10[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
			}
		}
	}
	double* _lin_auxqia11 = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
	mallocCheck(_lin_auxqia11, ((N) * (N) * (M) * (M)), double);
	double**** auxqia11 = (double****)malloc(sizeof(double***)*(N));
	mallocCheck(auxqia11, (N), double***);
	for (mz1=0;mz1 < N; mz1++) {
		auxqia11[mz1] = (double***)malloc(sizeof(double**)*(N));
		mallocCheck(auxqia11[mz1], (N), double**);
		for (mz2=0;mz2 < N; mz2++) {
			auxqia11[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
			mallocCheck(auxqia11[mz1][mz2], (M), double*);
			for (mz3=0;mz3 < M; mz3++) {
				auxqia11[mz1][mz2][mz3] = &_lin_auxqia11[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
			}
		}
	}
	#ifdef VERIFY
		char* seq1_verify = (char*)malloc(sizeof(char)*(M));
		mallocCheck(seq1_verify, (M), char);
		double* _lin_Q00_verify = (double*)malloc(sizeof(double)*((N) * (N)));
		mallocCheck(_lin_Q00_verify, ((N) * (N)), double);
		double** Q00_verify = (double**)malloc(sizeof(double*)*(N));
		mallocCheck(Q00_verify, (N), double*);
		for (mz1=0;mz1 < N; mz1++) {
			Q00_verify[mz1] = &_lin_Q00_verify[(mz1*(N))];
		}
		double* _lin_Q10_verify = (double*)malloc(sizeof(double)*((N) * (N)));
		mallocCheck(_lin_Q10_verify, ((N) * (N)), double);
		double** Q10_verify = (double**)malloc(sizeof(double*)*(N));
		mallocCheck(Q10_verify, (N), double*);
		for (mz1=0;mz1 < N; mz1++) {
			Q10_verify[mz1] = &_lin_Q10_verify[(mz1*(N))];
		}
		double* _lin_Qi_verify = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
		mallocCheck(_lin_Qi_verify, ((N) * (N) * (M) * (M)), double);
		double**** Qi_verify = (double****)malloc(sizeof(double***)*(N));
		mallocCheck(Qi_verify, (N), double***);
		for (mz1=0;mz1 < N; mz1++) {
			Qi_verify[mz1] = (double***)malloc(sizeof(double**)*(N));
			mallocCheck(Qi_verify[mz1], (N), double**);
			for (mz2=0;mz2 < N; mz2++) {
				Qi_verify[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
				mallocCheck(Qi_verify[mz1][mz2], (M), double*);
				for (mz3=0;mz3 < M; mz3++) {
					Qi_verify[mz1][mz2][mz3] = &_lin_Qi_verify[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
				}
			}
		}
		double* _lin_Qiy_verify = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
		mallocCheck(_lin_Qiy_verify, ((N) * (N) * (M) * (M)), double);
		double**** Qiy_verify = (double****)malloc(sizeof(double***)*(N));
		mallocCheck(Qiy_verify, (N), double***);
		for (mz1=0;mz1 < N; mz1++) {
			Qiy_verify[mz1] = (double***)malloc(sizeof(double**)*(N));
			mallocCheck(Qiy_verify[mz1], (N), double**);
			for (mz2=0;mz2 < N; mz2++) {
				Qiy_verify[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
				mallocCheck(Qiy_verify[mz1][mz2], (M), double*);
				for (mz3=0;mz3 < M; mz3++) {
					Qiy_verify[mz1][mz2][mz3] = &_lin_Qiy_verify[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
				}
			}
		}
		double* _lin_Qixm00_verify = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
		mallocCheck(_lin_Qixm00_verify, ((N) * (N) * (M) * (M)), double);
		double**** Qixm00_verify = (double****)malloc(sizeof(double***)*(N));
		mallocCheck(Qixm00_verify, (N), double***);
		for (mz1=0;mz1 < N; mz1++) {
			Qixm00_verify[mz1] = (double***)malloc(sizeof(double**)*(N));
			mallocCheck(Qixm00_verify[mz1], (N), double**);
			for (mz2=0;mz2 < N; mz2++) {
				Qixm00_verify[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
				mallocCheck(Qixm00_verify[mz1][mz2], (M), double*);
				for (mz3=0;mz3 < M; mz3++) {
					Qixm00_verify[mz1][mz2][mz3] = &_lin_Qixm00_verify[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
				}
			}
		}
		double* _lin_Qixm01_verify = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
		mallocCheck(_lin_Qixm01_verify, ((N) * (N) * (M) * (M)), double);
		double**** Qixm01_verify = (double****)malloc(sizeof(double***)*(N));
		mallocCheck(Qixm01_verify, (N), double***);
		for (mz1=0;mz1 < N; mz1++) {
			Qixm01_verify[mz1] = (double***)malloc(sizeof(double**)*(N));
			mallocCheck(Qixm01_verify[mz1], (N), double**);
			for (mz2=0;mz2 < N; mz2++) {
				Qixm01_verify[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
				mallocCheck(Qixm01_verify[mz1][mz2], (M), double*);
				for (mz3=0;mz3 < M; mz3++) {
					Qixm01_verify[mz1][mz2][mz3] = &_lin_Qixm01_verify[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
				}
			}
		}
		double* _lin_Qixm02_verify = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
		mallocCheck(_lin_Qixm02_verify, ((N) * (N) * (M) * (M)), double);
		double**** Qixm02_verify = (double****)malloc(sizeof(double***)*(N));
		mallocCheck(Qixm02_verify, (N), double***);
		for (mz1=0;mz1 < N; mz1++) {
			Qixm02_verify[mz1] = (double***)malloc(sizeof(double**)*(N));
			mallocCheck(Qixm02_verify[mz1], (N), double**);
			for (mz2=0;mz2 < N; mz2++) {
				Qixm02_verify[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
				mallocCheck(Qixm02_verify[mz1][mz2], (M), double*);
				for (mz3=0;mz3 < M; mz3++) {
					Qixm02_verify[mz1][mz2][mz3] = &_lin_Qixm02_verify[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
				}
			}
		}
		double* _lin_Qixm10_verify = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
		mallocCheck(_lin_Qixm10_verify, ((N) * (N) * (M) * (M)), double);
		double**** Qixm10_verify = (double****)malloc(sizeof(double***)*(N));
		mallocCheck(Qixm10_verify, (N), double***);
		for (mz1=0;mz1 < N; mz1++) {
			Qixm10_verify[mz1] = (double***)malloc(sizeof(double**)*(N));
			mallocCheck(Qixm10_verify[mz1], (N), double**);
			for (mz2=0;mz2 < N; mz2++) {
				Qixm10_verify[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
				mallocCheck(Qixm10_verify[mz1][mz2], (M), double*);
				for (mz3=0;mz3 < M; mz3++) {
					Qixm10_verify[mz1][mz2][mz3] = &_lin_Qixm10_verify[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
				}
			}
		}
		double* _lin_Qixm11_verify = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
		mallocCheck(_lin_Qixm11_verify, ((N) * (N) * (M) * (M)), double);
		double**** Qixm11_verify = (double****)malloc(sizeof(double***)*(N));
		mallocCheck(Qixm11_verify, (N), double***);
		for (mz1=0;mz1 < N; mz1++) {
			Qixm11_verify[mz1] = (double***)malloc(sizeof(double**)*(N));
			mallocCheck(Qixm11_verify[mz1], (N), double**);
			for (mz2=0;mz2 < N; mz2++) {
				Qixm11_verify[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
				mallocCheck(Qixm11_verify[mz1][mz2], (M), double*);
				for (mz3=0;mz3 < M; mz3++) {
					Qixm11_verify[mz1][mz2][mz3] = &_lin_Qixm11_verify[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
				}
			}
		}
		double* _lin_Qixm12_verify = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
		mallocCheck(_lin_Qixm12_verify, ((N) * (N) * (M) * (M)), double);
		double**** Qixm12_verify = (double****)malloc(sizeof(double***)*(N));
		mallocCheck(Qixm12_verify, (N), double***);
		for (mz1=0;mz1 < N; mz1++) {
			Qixm12_verify[mz1] = (double***)malloc(sizeof(double**)*(N));
			mallocCheck(Qixm12_verify[mz1], (N), double**);
			for (mz2=0;mz2 < N; mz2++) {
				Qixm12_verify[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
				mallocCheck(Qixm12_verify[mz1][mz2], (M), double*);
				for (mz3=0;mz3 < M; mz3++) {
					Qixm12_verify[mz1][mz2][mz3] = &_lin_Qixm12_verify[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
				}
			}
		}
		double* _lin_Qixk00_verify = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
		mallocCheck(_lin_Qixk00_verify, ((N) * (N) * (M) * (M)), double);
		double**** Qixk00_verify = (double****)malloc(sizeof(double***)*(N));
		mallocCheck(Qixk00_verify, (N), double***);
		for (mz1=0;mz1 < N; mz1++) {
			Qixk00_verify[mz1] = (double***)malloc(sizeof(double**)*(N));
			mallocCheck(Qixk00_verify[mz1], (N), double**);
			for (mz2=0;mz2 < N; mz2++) {
				Qixk00_verify[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
				mallocCheck(Qixk00_verify[mz1][mz2], (M), double*);
				for (mz3=0;mz3 < M; mz3++) {
					Qixk00_verify[mz1][mz2][mz3] = &_lin_Qixk00_verify[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
				}
			}
		}
		double* _lin_Qixk01_verify = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
		mallocCheck(_lin_Qixk01_verify, ((N) * (N) * (M) * (M)), double);
		double**** Qixk01_verify = (double****)malloc(sizeof(double***)*(N));
		mallocCheck(Qixk01_verify, (N), double***);
		for (mz1=0;mz1 < N; mz1++) {
			Qixk01_verify[mz1] = (double***)malloc(sizeof(double**)*(N));
			mallocCheck(Qixk01_verify[mz1], (N), double**);
			for (mz2=0;mz2 < N; mz2++) {
				Qixk01_verify[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
				mallocCheck(Qixk01_verify[mz1][mz2], (M), double*);
				for (mz3=0;mz3 < M; mz3++) {
					Qixk01_verify[mz1][mz2][mz3] = &_lin_Qixk01_verify[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
				}
			}
		}
		double* _lin_Qixk10_verify = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
		mallocCheck(_lin_Qixk10_verify, ((N) * (N) * (M) * (M)), double);
		double**** Qixk10_verify = (double****)malloc(sizeof(double***)*(N));
		mallocCheck(Qixk10_verify, (N), double***);
		for (mz1=0;mz1 < N; mz1++) {
			Qixk10_verify[mz1] = (double***)malloc(sizeof(double**)*(N));
			mallocCheck(Qixk10_verify[mz1], (N), double**);
			for (mz2=0;mz2 < N; mz2++) {
				Qixk10_verify[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
				mallocCheck(Qixk10_verify[mz1][mz2], (M), double*);
				for (mz3=0;mz3 < M; mz3++) {
					Qixk10_verify[mz1][mz2][mz3] = &_lin_Qixk10_verify[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
				}
			}
		}
		double* _lin_Qixk11_verify = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
		mallocCheck(_lin_Qixk11_verify, ((N) * (N) * (M) * (M)), double);
		double**** Qixk11_verify = (double****)malloc(sizeof(double***)*(N));
		mallocCheck(Qixk11_verify, (N), double***);
		for (mz1=0;mz1 < N; mz1++) {
			Qixk11_verify[mz1] = (double***)malloc(sizeof(double**)*(N));
			mallocCheck(Qixk11_verify[mz1], (N), double**);
			for (mz2=0;mz2 < N; mz2++) {
				Qixk11_verify[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
				mallocCheck(Qixk11_verify[mz1][mz2], (M), double*);
				for (mz3=0;mz3 < M; mz3++) {
					Qixk11_verify[mz1][mz2][mz3] = &_lin_Qixk11_verify[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
				}
			}
		}
		double* _lin_Qimm02_verify = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
		mallocCheck(_lin_Qimm02_verify, ((N) * (N) * (M) * (M)), double);
		double**** Qimm02_verify = (double****)malloc(sizeof(double***)*(N));
		mallocCheck(Qimm02_verify, (N), double***);
		for (mz1=0;mz1 < N; mz1++) {
			Qimm02_verify[mz1] = (double***)malloc(sizeof(double**)*(N));
			mallocCheck(Qimm02_verify[mz1], (N), double**);
			for (mz2=0;mz2 < N; mz2++) {
				Qimm02_verify[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
				mallocCheck(Qimm02_verify[mz1][mz2], (M), double*);
				for (mz3=0;mz3 < M; mz3++) {
					Qimm02_verify[mz1][mz2][mz3] = &_lin_Qimm02_verify[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
				}
			}
		}
		double* _lin_Qimm12_verify = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
		mallocCheck(_lin_Qimm12_verify, ((N) * (N) * (M) * (M)), double);
		double**** Qimm12_verify = (double****)malloc(sizeof(double***)*(N));
		mallocCheck(Qimm12_verify, (N), double***);
		for (mz1=0;mz1 < N; mz1++) {
			Qimm12_verify[mz1] = (double***)malloc(sizeof(double**)*(N));
			mallocCheck(Qimm12_verify[mz1], (N), double**);
			for (mz2=0;mz2 < N; mz2++) {
				Qimm12_verify[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
				mallocCheck(Qimm12_verify[mz1][mz2], (M), double*);
				for (mz3=0;mz3 < M; mz3++) {
					Qimm12_verify[mz1][mz2][mz3] = &_lin_Qimm12_verify[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
				}
			}
		}
		double* _lin_Qimm20_verify = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
		mallocCheck(_lin_Qimm20_verify, ((N) * (N) * (M) * (M)), double);
		double**** Qimm20_verify = (double****)malloc(sizeof(double***)*(N));
		mallocCheck(Qimm20_verify, (N), double***);
		for (mz1=0;mz1 < N; mz1++) {
			Qimm20_verify[mz1] = (double***)malloc(sizeof(double**)*(N));
			mallocCheck(Qimm20_verify[mz1], (N), double**);
			for (mz2=0;mz2 < N; mz2++) {
				Qimm20_verify[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
				mallocCheck(Qimm20_verify[mz1][mz2], (M), double*);
				for (mz3=0;mz3 < M; mz3++) {
					Qimm20_verify[mz1][mz2][mz3] = &_lin_Qimm20_verify[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
				}
			}
		}
		double* _lin_Qimm21_verify = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
		mallocCheck(_lin_Qimm21_verify, ((N) * (N) * (M) * (M)), double);
		double**** Qimm21_verify = (double****)malloc(sizeof(double***)*(N));
		mallocCheck(Qimm21_verify, (N), double***);
		for (mz1=0;mz1 < N; mz1++) {
			Qimm21_verify[mz1] = (double***)malloc(sizeof(double**)*(N));
			mallocCheck(Qimm21_verify[mz1], (N), double**);
			for (mz2=0;mz2 < N; mz2++) {
				Qimm21_verify[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
				mallocCheck(Qimm21_verify[mz1][mz2], (M), double*);
				for (mz3=0;mz3 < M; mz3++) {
					Qimm21_verify[mz1][mz2][mz3] = &_lin_Qimm21_verify[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
				}
			}
		}
		double* _lin_Qimm22_verify = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
		mallocCheck(_lin_Qimm22_verify, ((N) * (N) * (M) * (M)), double);
		double**** Qimm22_verify = (double****)malloc(sizeof(double***)*(N));
		mallocCheck(Qimm22_verify, (N), double***);
		for (mz1=0;mz1 < N; mz1++) {
			Qimm22_verify[mz1] = (double***)malloc(sizeof(double**)*(N));
			mallocCheck(Qimm22_verify[mz1], (N), double**);
			for (mz2=0;mz2 < N; mz2++) {
				Qimm22_verify[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
				mallocCheck(Qimm22_verify[mz1][mz2], (M), double*);
				for (mz3=0;mz3 < M; mz3++) {
					Qimm22_verify[mz1][mz2][mz3] = &_lin_Qimm22_verify[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
				}
			}
		}
		double* _lin_Qimk01_verify = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
		mallocCheck(_lin_Qimk01_verify, ((N) * (N) * (M) * (M)), double);
		double**** Qimk01_verify = (double****)malloc(sizeof(double***)*(N));
		mallocCheck(Qimk01_verify, (N), double***);
		for (mz1=0;mz1 < N; mz1++) {
			Qimk01_verify[mz1] = (double***)malloc(sizeof(double**)*(N));
			mallocCheck(Qimk01_verify[mz1], (N), double**);
			for (mz2=0;mz2 < N; mz2++) {
				Qimk01_verify[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
				mallocCheck(Qimk01_verify[mz1][mz2], (M), double*);
				for (mz3=0;mz3 < M; mz3++) {
					Qimk01_verify[mz1][mz2][mz3] = &_lin_Qimk01_verify[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
				}
			}
		}
		double* _lin_Qimk11_verify = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
		mallocCheck(_lin_Qimk11_verify, ((N) * (N) * (M) * (M)), double);
		double**** Qimk11_verify = (double****)malloc(sizeof(double***)*(N));
		mallocCheck(Qimk11_verify, (N), double***);
		for (mz1=0;mz1 < N; mz1++) {
			Qimk11_verify[mz1] = (double***)malloc(sizeof(double**)*(N));
			mallocCheck(Qimk11_verify[mz1], (N), double**);
			for (mz2=0;mz2 < N; mz2++) {
				Qimk11_verify[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
				mallocCheck(Qimk11_verify[mz1][mz2], (M), double*);
				for (mz3=0;mz3 < M; mz3++) {
					Qimk11_verify[mz1][mz2][mz3] = &_lin_Qimk11_verify[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
				}
			}
		}
		double* _lin_Qimk20_verify = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
		mallocCheck(_lin_Qimk20_verify, ((N) * (N) * (M) * (M)), double);
		double**** Qimk20_verify = (double****)malloc(sizeof(double***)*(N));
		mallocCheck(Qimk20_verify, (N), double***);
		for (mz1=0;mz1 < N; mz1++) {
			Qimk20_verify[mz1] = (double***)malloc(sizeof(double**)*(N));
			mallocCheck(Qimk20_verify[mz1], (N), double**);
			for (mz2=0;mz2 < N; mz2++) {
				Qimk20_verify[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
				mallocCheck(Qimk20_verify[mz1][mz2], (M), double*);
				for (mz3=0;mz3 < M; mz3++) {
					Qimk20_verify[mz1][mz2][mz3] = &_lin_Qimk20_verify[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
				}
			}
		}
		double* _lin_Qimk21_verify = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
		mallocCheck(_lin_Qimk21_verify, ((N) * (N) * (M) * (M)), double);
		double**** Qimk21_verify = (double****)malloc(sizeof(double***)*(N));
		mallocCheck(Qimk21_verify, (N), double***);
		for (mz1=0;mz1 < N; mz1++) {
			Qimk21_verify[mz1] = (double***)malloc(sizeof(double**)*(N));
			mallocCheck(Qimk21_verify[mz1], (N), double**);
			for (mz2=0;mz2 < N; mz2++) {
				Qimk21_verify[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
				mallocCheck(Qimk21_verify[mz1][mz2], (M), double*);
				for (mz3=0;mz3 < M; mz3++) {
					Qimk21_verify[mz1][mz2][mz3] = &_lin_Qimk21_verify[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
				}
			}
		}
		double* _lin_Qikm10_verify = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
		mallocCheck(_lin_Qikm10_verify, ((N) * (N) * (M) * (M)), double);
		double**** Qikm10_verify = (double****)malloc(sizeof(double***)*(N));
		mallocCheck(Qikm10_verify, (N), double***);
		for (mz1=0;mz1 < N; mz1++) {
			Qikm10_verify[mz1] = (double***)malloc(sizeof(double**)*(N));
			mallocCheck(Qikm10_verify[mz1], (N), double**);
			for (mz2=0;mz2 < N; mz2++) {
				Qikm10_verify[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
				mallocCheck(Qikm10_verify[mz1][mz2], (M), double*);
				for (mz3=0;mz3 < M; mz3++) {
					Qikm10_verify[mz1][mz2][mz3] = &_lin_Qikm10_verify[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
				}
			}
		}
		double* _lin_Qikm11_verify = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
		mallocCheck(_lin_Qikm11_verify, ((N) * (N) * (M) * (M)), double);
		double**** Qikm11_verify = (double****)malloc(sizeof(double***)*(N));
		mallocCheck(Qikm11_verify, (N), double***);
		for (mz1=0;mz1 < N; mz1++) {
			Qikm11_verify[mz1] = (double***)malloc(sizeof(double**)*(N));
			mallocCheck(Qikm11_verify[mz1], (N), double**);
			for (mz2=0;mz2 < N; mz2++) {
				Qikm11_verify[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
				mallocCheck(Qikm11_verify[mz1][mz2], (M), double*);
				for (mz3=0;mz3 < M; mz3++) {
					Qikm11_verify[mz1][mz2][mz3] = &_lin_Qikm11_verify[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
				}
			}
		}
		double* _lin_Qikm02_verify = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
		mallocCheck(_lin_Qikm02_verify, ((N) * (N) * (M) * (M)), double);
		double**** Qikm02_verify = (double****)malloc(sizeof(double***)*(N));
		mallocCheck(Qikm02_verify, (N), double***);
		for (mz1=0;mz1 < N; mz1++) {
			Qikm02_verify[mz1] = (double***)malloc(sizeof(double**)*(N));
			mallocCheck(Qikm02_verify[mz1], (N), double**);
			for (mz2=0;mz2 < N; mz2++) {
				Qikm02_verify[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
				mallocCheck(Qikm02_verify[mz1][mz2], (M), double*);
				for (mz3=0;mz3 < M; mz3++) {
					Qikm02_verify[mz1][mz2][mz3] = &_lin_Qikm02_verify[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
				}
			}
		}
		double* _lin_Qikm12_verify = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
		mallocCheck(_lin_Qikm12_verify, ((N) * (N) * (M) * (M)), double);
		double**** Qikm12_verify = (double****)malloc(sizeof(double***)*(N));
		mallocCheck(Qikm12_verify, (N), double***);
		for (mz1=0;mz1 < N; mz1++) {
			Qikm12_verify[mz1] = (double***)malloc(sizeof(double**)*(N));
			mallocCheck(Qikm12_verify[mz1], (N), double**);
			for (mz2=0;mz2 < N; mz2++) {
				Qikm12_verify[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
				mallocCheck(Qikm12_verify[mz1][mz2], (M), double*);
				for (mz3=0;mz3 < M; mz3++) {
					Qikm12_verify[mz1][mz2][mz3] = &_lin_Qikm12_verify[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
				}
			}
		}
		double* _lin_Qikk01_verify = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
		mallocCheck(_lin_Qikk01_verify, ((N) * (N) * (M) * (M)), double);
		double**** Qikk01_verify = (double****)malloc(sizeof(double***)*(N));
		mallocCheck(Qikk01_verify, (N), double***);
		for (mz1=0;mz1 < N; mz1++) {
			Qikk01_verify[mz1] = (double***)malloc(sizeof(double**)*(N));
			mallocCheck(Qikk01_verify[mz1], (N), double**);
			for (mz2=0;mz2 < N; mz2++) {
				Qikk01_verify[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
				mallocCheck(Qikk01_verify[mz1][mz2], (M), double*);
				for (mz3=0;mz3 < M; mz3++) {
					Qikk01_verify[mz1][mz2][mz3] = &_lin_Qikk01_verify[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
				}
			}
		}
		double* _lin_Qikk10_verify = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
		mallocCheck(_lin_Qikk10_verify, ((N) * (N) * (M) * (M)), double);
		double**** Qikk10_verify = (double****)malloc(sizeof(double***)*(N));
		mallocCheck(Qikk10_verify, (N), double***);
		for (mz1=0;mz1 < N; mz1++) {
			Qikk10_verify[mz1] = (double***)malloc(sizeof(double**)*(N));
			mallocCheck(Qikk10_verify[mz1], (N), double**);
			for (mz2=0;mz2 < N; mz2++) {
				Qikk10_verify[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
				mallocCheck(Qikk10_verify[mz1][mz2], (M), double*);
				for (mz3=0;mz3 < M; mz3++) {
					Qikk10_verify[mz1][mz2][mz3] = &_lin_Qikk10_verify[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
				}
			}
		}
		double* _lin_Qikk11_verify = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
		mallocCheck(_lin_Qikk11_verify, ((N) * (N) * (M) * (M)), double);
		double**** Qikk11_verify = (double****)malloc(sizeof(double***)*(N));
		mallocCheck(Qikk11_verify, (N), double***);
		for (mz1=0;mz1 < N; mz1++) {
			Qikk11_verify[mz1] = (double***)malloc(sizeof(double**)*(N));
			mallocCheck(Qikk11_verify[mz1], (N), double**);
			for (mz2=0;mz2 < N; mz2++) {
				Qikk11_verify[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
				mallocCheck(Qikk11_verify[mz1][mz2], (M), double*);
				for (mz3=0;mz3 < M; mz3++) {
					Qikk11_verify[mz1][mz2][mz3] = &_lin_Qikk11_verify[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
				}
			}
		}
		double* _lin_Qiann01_verify = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
		mallocCheck(_lin_Qiann01_verify, ((N) * (N) * (M) * (M)), double);
		double**** Qiann01_verify = (double****)malloc(sizeof(double***)*(N));
		mallocCheck(Qiann01_verify, (N), double***);
		for (mz1=0;mz1 < N; mz1++) {
			Qiann01_verify[mz1] = (double***)malloc(sizeof(double**)*(N));
			mallocCheck(Qiann01_verify[mz1], (N), double**);
			for (mz2=0;mz2 < N; mz2++) {
				Qiann01_verify[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
				mallocCheck(Qiann01_verify[mz1][mz2], (M), double*);
				for (mz3=0;mz3 < M; mz3++) {
					Qiann01_verify[mz1][mz2][mz3] = &_lin_Qiann01_verify[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
				}
			}
		}
		double* _lin_Qiann02_verify = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
		mallocCheck(_lin_Qiann02_verify, ((N) * (N) * (M) * (M)), double);
		double**** Qiann02_verify = (double****)malloc(sizeof(double***)*(N));
		mallocCheck(Qiann02_verify, (N), double***);
		for (mz1=0;mz1 < N; mz1++) {
			Qiann02_verify[mz1] = (double***)malloc(sizeof(double**)*(N));
			mallocCheck(Qiann02_verify[mz1], (N), double**);
			for (mz2=0;mz2 < N; mz2++) {
				Qiann02_verify[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
				mallocCheck(Qiann02_verify[mz1][mz2], (M), double*);
				for (mz3=0;mz3 < M; mz3++) {
					Qiann02_verify[mz1][mz2][mz3] = &_lin_Qiann02_verify[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
				}
			}
		}
		double* _lin_Qiann10_verify = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
		mallocCheck(_lin_Qiann10_verify, ((N) * (N) * (M) * (M)), double);
		double**** Qiann10_verify = (double****)malloc(sizeof(double***)*(N));
		mallocCheck(Qiann10_verify, (N), double***);
		for (mz1=0;mz1 < N; mz1++) {
			Qiann10_verify[mz1] = (double***)malloc(sizeof(double**)*(N));
			mallocCheck(Qiann10_verify[mz1], (N), double**);
			for (mz2=0;mz2 < N; mz2++) {
				Qiann10_verify[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
				mallocCheck(Qiann10_verify[mz1][mz2], (M), double*);
				for (mz3=0;mz3 < M; mz3++) {
					Qiann10_verify[mz1][mz2][mz3] = &_lin_Qiann10_verify[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
				}
			}
		}
		double* _lin_Qiann11_verify = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
		mallocCheck(_lin_Qiann11_verify, ((N) * (N) * (M) * (M)), double);
		double**** Qiann11_verify = (double****)malloc(sizeof(double***)*(N));
		mallocCheck(Qiann11_verify, (N), double***);
		for (mz1=0;mz1 < N; mz1++) {
			Qiann11_verify[mz1] = (double***)malloc(sizeof(double**)*(N));
			mallocCheck(Qiann11_verify[mz1], (N), double**);
			for (mz2=0;mz2 < N; mz2++) {
				Qiann11_verify[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
				mallocCheck(Qiann11_verify[mz1][mz2], (M), double*);
				for (mz3=0;mz3 < M; mz3++) {
					Qiann11_verify[mz1][mz2][mz3] = &_lin_Qiann11_verify[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
				}
			}
		}
		double* _lin_Qiann12_verify = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
		mallocCheck(_lin_Qiann12_verify, ((N) * (N) * (M) * (M)), double);
		double**** Qiann12_verify = (double****)malloc(sizeof(double***)*(N));
		mallocCheck(Qiann12_verify, (N), double***);
		for (mz1=0;mz1 < N; mz1++) {
			Qiann12_verify[mz1] = (double***)malloc(sizeof(double**)*(N));
			mallocCheck(Qiann12_verify[mz1], (N), double**);
			for (mz2=0;mz2 < N; mz2++) {
				Qiann12_verify[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
				mallocCheck(Qiann12_verify[mz1][mz2], (M), double*);
				for (mz3=0;mz3 < M; mz3++) {
					Qiann12_verify[mz1][mz2][mz3] = &_lin_Qiann12_verify[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
				}
			}
		}
		double* _lin_Qiann20_verify = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
		mallocCheck(_lin_Qiann20_verify, ((N) * (N) * (M) * (M)), double);
		double**** Qiann20_verify = (double****)malloc(sizeof(double***)*(N));
		mallocCheck(Qiann20_verify, (N), double***);
		for (mz1=0;mz1 < N; mz1++) {
			Qiann20_verify[mz1] = (double***)malloc(sizeof(double**)*(N));
			mallocCheck(Qiann20_verify[mz1], (N), double**);
			for (mz2=0;mz2 < N; mz2++) {
				Qiann20_verify[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
				mallocCheck(Qiann20_verify[mz1][mz2], (M), double*);
				for (mz3=0;mz3 < M; mz3++) {
					Qiann20_verify[mz1][mz2][mz3] = &_lin_Qiann20_verify[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
				}
			}
		}
		double* _lin_Qiann21_verify = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
		mallocCheck(_lin_Qiann21_verify, ((N) * (N) * (M) * (M)), double);
		double**** Qiann21_verify = (double****)malloc(sizeof(double***)*(N));
		mallocCheck(Qiann21_verify, (N), double***);
		for (mz1=0;mz1 < N; mz1++) {
			Qiann21_verify[mz1] = (double***)malloc(sizeof(double**)*(N));
			mallocCheck(Qiann21_verify[mz1], (N), double**);
			for (mz2=0;mz2 < N; mz2++) {
				Qiann21_verify[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
				mallocCheck(Qiann21_verify[mz1][mz2], (M), double*);
				for (mz3=0;mz3 < M; mz3++) {
					Qiann21_verify[mz1][mz2][mz3] = &_lin_Qiann21_verify[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
				}
			}
		}
		double* _lin_Qiann22_verify = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
		mallocCheck(_lin_Qiann22_verify, ((N) * (N) * (M) * (M)), double);
		double**** Qiann22_verify = (double****)malloc(sizeof(double***)*(N));
		mallocCheck(Qiann22_verify, (N), double***);
		for (mz1=0;mz1 < N; mz1++) {
			Qiann22_verify[mz1] = (double***)malloc(sizeof(double**)*(N));
			mallocCheck(Qiann22_verify[mz1], (N), double**);
			for (mz2=0;mz2 < N; mz2++) {
				Qiann22_verify[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
				mallocCheck(Qiann22_verify[mz1][mz2], (M), double*);
				for (mz3=0;mz3 < M; mz3++) {
					Qiann22_verify[mz1][mz2][mz3] = &_lin_Qiann22_verify[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
				}
			}
		}
		double* _lin_Qiand01_verify = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
		mallocCheck(_lin_Qiand01_verify, ((N) * (N) * (M) * (M)), double);
		double**** Qiand01_verify = (double****)malloc(sizeof(double***)*(N));
		mallocCheck(Qiand01_verify, (N), double***);
		for (mz1=0;mz1 < N; mz1++) {
			Qiand01_verify[mz1] = (double***)malloc(sizeof(double**)*(N));
			mallocCheck(Qiand01_verify[mz1], (N), double**);
			for (mz2=0;mz2 < N; mz2++) {
				Qiand01_verify[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
				mallocCheck(Qiand01_verify[mz1][mz2], (M), double*);
				for (mz3=0;mz3 < M; mz3++) {
					Qiand01_verify[mz1][mz2][mz3] = &_lin_Qiand01_verify[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
				}
			}
		}
		double* _lin_Qiand10_verify = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
		mallocCheck(_lin_Qiand10_verify, ((N) * (N) * (M) * (M)), double);
		double**** Qiand10_verify = (double****)malloc(sizeof(double***)*(N));
		mallocCheck(Qiand10_verify, (N), double***);
		for (mz1=0;mz1 < N; mz1++) {
			Qiand10_verify[mz1] = (double***)malloc(sizeof(double**)*(N));
			mallocCheck(Qiand10_verify[mz1], (N), double**);
			for (mz2=0;mz2 < N; mz2++) {
				Qiand10_verify[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
				mallocCheck(Qiand10_verify[mz1][mz2], (M), double*);
				for (mz3=0;mz3 < M; mz3++) {
					Qiand10_verify[mz1][mz2][mz3] = &_lin_Qiand10_verify[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
				}
			}
		}
		double* _lin_Qiand11_verify = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
		mallocCheck(_lin_Qiand11_verify, ((N) * (N) * (M) * (M)), double);
		double**** Qiand11_verify = (double****)malloc(sizeof(double***)*(N));
		mallocCheck(Qiand11_verify, (N), double***);
		for (mz1=0;mz1 < N; mz1++) {
			Qiand11_verify[mz1] = (double***)malloc(sizeof(double**)*(N));
			mallocCheck(Qiand11_verify[mz1], (N), double**);
			for (mz2=0;mz2 < N; mz2++) {
				Qiand11_verify[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
				mallocCheck(Qiand11_verify[mz1][mz2], (M), double*);
				for (mz3=0;mz3 < M; mz3++) {
					Qiand11_verify[mz1][mz2][mz3] = &_lin_Qiand11_verify[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
				}
			}
		}
		double* _lin_Qiand20_verify = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
		mallocCheck(_lin_Qiand20_verify, ((N) * (N) * (M) * (M)), double);
		double**** Qiand20_verify = (double****)malloc(sizeof(double***)*(N));
		mallocCheck(Qiand20_verify, (N), double***);
		for (mz1=0;mz1 < N; mz1++) {
			Qiand20_verify[mz1] = (double***)malloc(sizeof(double**)*(N));
			mallocCheck(Qiand20_verify[mz1], (N), double**);
			for (mz2=0;mz2 < N; mz2++) {
				Qiand20_verify[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
				mallocCheck(Qiand20_verify[mz1][mz2], (M), double*);
				for (mz3=0;mz3 < M; mz3++) {
					Qiand20_verify[mz1][mz2][mz3] = &_lin_Qiand20_verify[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
				}
			}
		}
		double* _lin_Qiand21_verify = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
		mallocCheck(_lin_Qiand21_verify, ((N) * (N) * (M) * (M)), double);
		double**** Qiand21_verify = (double****)malloc(sizeof(double***)*(N));
		mallocCheck(Qiand21_verify, (N), double***);
		for (mz1=0;mz1 < N; mz1++) {
			Qiand21_verify[mz1] = (double***)malloc(sizeof(double**)*(N));
			mallocCheck(Qiand21_verify[mz1], (N), double**);
			for (mz2=0;mz2 < N; mz2++) {
				Qiand21_verify[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
				mallocCheck(Qiand21_verify[mz1][mz2], (M), double*);
				for (mz3=0;mz3 < M; mz3++) {
					Qiand21_verify[mz1][mz2][mz3] = &_lin_Qiand21_verify[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
				}
			}
		}
		double* _lin_Qiadn01_verify = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
		mallocCheck(_lin_Qiadn01_verify, ((N) * (N) * (M) * (M)), double);
		double**** Qiadn01_verify = (double****)malloc(sizeof(double***)*(N));
		mallocCheck(Qiadn01_verify, (N), double***);
		for (mz1=0;mz1 < N; mz1++) {
			Qiadn01_verify[mz1] = (double***)malloc(sizeof(double**)*(N));
			mallocCheck(Qiadn01_verify[mz1], (N), double**);
			for (mz2=0;mz2 < N; mz2++) {
				Qiadn01_verify[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
				mallocCheck(Qiadn01_verify[mz1][mz2], (M), double*);
				for (mz3=0;mz3 < M; mz3++) {
					Qiadn01_verify[mz1][mz2][mz3] = &_lin_Qiadn01_verify[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
				}
			}
		}
		double* _lin_Qiadn02_verify = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
		mallocCheck(_lin_Qiadn02_verify, ((N) * (N) * (M) * (M)), double);
		double**** Qiadn02_verify = (double****)malloc(sizeof(double***)*(N));
		mallocCheck(Qiadn02_verify, (N), double***);
		for (mz1=0;mz1 < N; mz1++) {
			Qiadn02_verify[mz1] = (double***)malloc(sizeof(double**)*(N));
			mallocCheck(Qiadn02_verify[mz1], (N), double**);
			for (mz2=0;mz2 < N; mz2++) {
				Qiadn02_verify[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
				mallocCheck(Qiadn02_verify[mz1][mz2], (M), double*);
				for (mz3=0;mz3 < M; mz3++) {
					Qiadn02_verify[mz1][mz2][mz3] = &_lin_Qiadn02_verify[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
				}
			}
		}
		double* _lin_Qiadn10_verify = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
		mallocCheck(_lin_Qiadn10_verify, ((N) * (N) * (M) * (M)), double);
		double**** Qiadn10_verify = (double****)malloc(sizeof(double***)*(N));
		mallocCheck(Qiadn10_verify, (N), double***);
		for (mz1=0;mz1 < N; mz1++) {
			Qiadn10_verify[mz1] = (double***)malloc(sizeof(double**)*(N));
			mallocCheck(Qiadn10_verify[mz1], (N), double**);
			for (mz2=0;mz2 < N; mz2++) {
				Qiadn10_verify[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
				mallocCheck(Qiadn10_verify[mz1][mz2], (M), double*);
				for (mz3=0;mz3 < M; mz3++) {
					Qiadn10_verify[mz1][mz2][mz3] = &_lin_Qiadn10_verify[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
				}
			}
		}
		double* _lin_Qiadn11_verify = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
		mallocCheck(_lin_Qiadn11_verify, ((N) * (N) * (M) * (M)), double);
		double**** Qiadn11_verify = (double****)malloc(sizeof(double***)*(N));
		mallocCheck(Qiadn11_verify, (N), double***);
		for (mz1=0;mz1 < N; mz1++) {
			Qiadn11_verify[mz1] = (double***)malloc(sizeof(double**)*(N));
			mallocCheck(Qiadn11_verify[mz1], (N), double**);
			for (mz2=0;mz2 < N; mz2++) {
				Qiadn11_verify[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
				mallocCheck(Qiadn11_verify[mz1][mz2], (M), double*);
				for (mz3=0;mz3 < M; mz3++) {
					Qiadn11_verify[mz1][mz2][mz3] = &_lin_Qiadn11_verify[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
				}
			}
		}
		double* _lin_Qiadn12_verify = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
		mallocCheck(_lin_Qiadn12_verify, ((N) * (N) * (M) * (M)), double);
		double**** Qiadn12_verify = (double****)malloc(sizeof(double***)*(N));
		mallocCheck(Qiadn12_verify, (N), double***);
		for (mz1=0;mz1 < N; mz1++) {
			Qiadn12_verify[mz1] = (double***)malloc(sizeof(double**)*(N));
			mallocCheck(Qiadn12_verify[mz1], (N), double**);
			for (mz2=0;mz2 < N; mz2++) {
				Qiadn12_verify[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
				mallocCheck(Qiadn12_verify[mz1][mz2], (M), double*);
				for (mz3=0;mz3 < M; mz3++) {
					Qiadn12_verify[mz1][mz2][mz3] = &_lin_Qiadn12_verify[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
				}
			}
		}
		double* _lin_Qiadd01_verify = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
		mallocCheck(_lin_Qiadd01_verify, ((N) * (N) * (M) * (M)), double);
		double**** Qiadd01_verify = (double****)malloc(sizeof(double***)*(N));
		mallocCheck(Qiadd01_verify, (N), double***);
		for (mz1=0;mz1 < N; mz1++) {
			Qiadd01_verify[mz1] = (double***)malloc(sizeof(double**)*(N));
			mallocCheck(Qiadd01_verify[mz1], (N), double**);
			for (mz2=0;mz2 < N; mz2++) {
				Qiadd01_verify[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
				mallocCheck(Qiadd01_verify[mz1][mz2], (M), double*);
				for (mz3=0;mz3 < M; mz3++) {
					Qiadd01_verify[mz1][mz2][mz3] = &_lin_Qiadd01_verify[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
				}
			}
		}
		double* _lin_Qiadd10_verify = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
		mallocCheck(_lin_Qiadd10_verify, ((N) * (N) * (M) * (M)), double);
		double**** Qiadd10_verify = (double****)malloc(sizeof(double***)*(N));
		mallocCheck(Qiadd10_verify, (N), double***);
		for (mz1=0;mz1 < N; mz1++) {
			Qiadd10_verify[mz1] = (double***)malloc(sizeof(double**)*(N));
			mallocCheck(Qiadd10_verify[mz1], (N), double**);
			for (mz2=0;mz2 < N; mz2++) {
				Qiadd10_verify[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
				mallocCheck(Qiadd10_verify[mz1][mz2], (M), double*);
				for (mz3=0;mz3 < M; mz3++) {
					Qiadd10_verify[mz1][mz2][mz3] = &_lin_Qiadd10_verify[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
				}
			}
		}
		double* _lin_Qiadd11_verify = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
		mallocCheck(_lin_Qiadd11_verify, ((N) * (N) * (M) * (M)), double);
		double**** Qiadd11_verify = (double****)malloc(sizeof(double***)*(N));
		mallocCheck(Qiadd11_verify, (N), double***);
		for (mz1=0;mz1 < N; mz1++) {
			Qiadd11_verify[mz1] = (double***)malloc(sizeof(double**)*(N));
			mallocCheck(Qiadd11_verify[mz1], (N), double**);
			for (mz2=0;mz2 < N; mz2++) {
				Qiadd11_verify[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
				mallocCheck(Qiadd11_verify[mz1][mz2], (M), double*);
				for (mz3=0;mz3 < M; mz3++) {
					Qiadd11_verify[mz1][mz2][mz3] = &_lin_Qiadd11_verify[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
				}
			}
		}
		double* _lin_Qiar01_verify = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
		mallocCheck(_lin_Qiar01_verify, ((N) * (N) * (M) * (M)), double);
		double**** Qiar01_verify = (double****)malloc(sizeof(double***)*(N));
		mallocCheck(Qiar01_verify, (N), double***);
		for (mz1=0;mz1 < N; mz1++) {
			Qiar01_verify[mz1] = (double***)malloc(sizeof(double**)*(N));
			mallocCheck(Qiar01_verify[mz1], (N), double**);
			for (mz2=0;mz2 < N; mz2++) {
				Qiar01_verify[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
				mallocCheck(Qiar01_verify[mz1][mz2], (M), double*);
				for (mz3=0;mz3 < M; mz3++) {
					Qiar01_verify[mz1][mz2][mz3] = &_lin_Qiar01_verify[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
				}
			}
		}
		double* _lin_Qiar10_verify = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
		mallocCheck(_lin_Qiar10_verify, ((N) * (N) * (M) * (M)), double);
		double**** Qiar10_verify = (double****)malloc(sizeof(double***)*(N));
		mallocCheck(Qiar10_verify, (N), double***);
		for (mz1=0;mz1 < N; mz1++) {
			Qiar10_verify[mz1] = (double***)malloc(sizeof(double**)*(N));
			mallocCheck(Qiar10_verify[mz1], (N), double**);
			for (mz2=0;mz2 < N; mz2++) {
				Qiar10_verify[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
				mallocCheck(Qiar10_verify[mz1][mz2], (M), double*);
				for (mz3=0;mz3 < M; mz3++) {
					Qiar10_verify[mz1][mz2][mz3] = &_lin_Qiar10_verify[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
				}
			}
		}
		double* _lin_Qiar11_verify = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
		mallocCheck(_lin_Qiar11_verify, ((N) * (N) * (M) * (M)), double);
		double**** Qiar11_verify = (double****)malloc(sizeof(double***)*(N));
		mallocCheck(Qiar11_verify, (N), double***);
		for (mz1=0;mz1 < N; mz1++) {
			Qiar11_verify[mz1] = (double***)malloc(sizeof(double**)*(N));
			mallocCheck(Qiar11_verify[mz1], (N), double**);
			for (mz2=0;mz2 < N; mz2++) {
				Qiar11_verify[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
				mallocCheck(Qiar11_verify[mz1][mz2], (M), double*);
				for (mz3=0;mz3 < M; mz3++) {
					Qiar11_verify[mz1][mz2][mz3] = &_lin_Qiar11_verify[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
				}
			}
		}
		double* _lin_Qilr01_verify = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
		mallocCheck(_lin_Qilr01_verify, ((N) * (N) * (M) * (M)), double);
		double**** Qilr01_verify = (double****)malloc(sizeof(double***)*(N));
		mallocCheck(Qilr01_verify, (N), double***);
		for (mz1=0;mz1 < N; mz1++) {
			Qilr01_verify[mz1] = (double***)malloc(sizeof(double**)*(N));
			mallocCheck(Qilr01_verify[mz1], (N), double**);
			for (mz2=0;mz2 < N; mz2++) {
				Qilr01_verify[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
				mallocCheck(Qilr01_verify[mz1][mz2], (M), double*);
				for (mz3=0;mz3 < M; mz3++) {
					Qilr01_verify[mz1][mz2][mz3] = &_lin_Qilr01_verify[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
				}
			}
		}
		double* _lin_Qilr10_verify = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
		mallocCheck(_lin_Qilr10_verify, ((N) * (N) * (M) * (M)), double);
		double**** Qilr10_verify = (double****)malloc(sizeof(double***)*(N));
		mallocCheck(Qilr10_verify, (N), double***);
		for (mz1=0;mz1 < N; mz1++) {
			Qilr10_verify[mz1] = (double***)malloc(sizeof(double**)*(N));
			mallocCheck(Qilr10_verify[mz1], (N), double**);
			for (mz2=0;mz2 < N; mz2++) {
				Qilr10_verify[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
				mallocCheck(Qilr10_verify[mz1][mz2], (M), double*);
				for (mz3=0;mz3 < M; mz3++) {
					Qilr10_verify[mz1][mz2][mz3] = &_lin_Qilr10_verify[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
				}
			}
		}
		double* _lin_Qilr11_verify = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
		mallocCheck(_lin_Qilr11_verify, ((N) * (N) * (M) * (M)), double);
		double**** Qilr11_verify = (double****)malloc(sizeof(double***)*(N));
		mallocCheck(Qilr11_verify, (N), double***);
		for (mz1=0;mz1 < N; mz1++) {
			Qilr11_verify[mz1] = (double***)malloc(sizeof(double**)*(N));
			mallocCheck(Qilr11_verify[mz1], (N), double**);
			for (mz2=0;mz2 < N; mz2++) {
				Qilr11_verify[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
				mallocCheck(Qilr11_verify[mz1][mz2], (M), double*);
				for (mz3=0;mz3 < M; mz3++) {
					Qilr11_verify[mz1][mz2][mz3] = &_lin_Qilr11_verify[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
				}
			}
		}
		double* _lin_Qir01_verify = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
		mallocCheck(_lin_Qir01_verify, ((N) * (N) * (M) * (M)), double);
		double**** Qir01_verify = (double****)malloc(sizeof(double***)*(N));
		mallocCheck(Qir01_verify, (N), double***);
		for (mz1=0;mz1 < N; mz1++) {
			Qir01_verify[mz1] = (double***)malloc(sizeof(double**)*(N));
			mallocCheck(Qir01_verify[mz1], (N), double**);
			for (mz2=0;mz2 < N; mz2++) {
				Qir01_verify[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
				mallocCheck(Qir01_verify[mz1][mz2], (M), double*);
				for (mz3=0;mz3 < M; mz3++) {
					Qir01_verify[mz1][mz2][mz3] = &_lin_Qir01_verify[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
				}
			}
		}
		double* _lin_Qir10_verify = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
		mallocCheck(_lin_Qir10_verify, ((N) * (N) * (M) * (M)), double);
		double**** Qir10_verify = (double****)malloc(sizeof(double***)*(N));
		mallocCheck(Qir10_verify, (N), double***);
		for (mz1=0;mz1 < N; mz1++) {
			Qir10_verify[mz1] = (double***)malloc(sizeof(double**)*(N));
			mallocCheck(Qir10_verify[mz1], (N), double**);
			for (mz2=0;mz2 < N; mz2++) {
				Qir10_verify[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
				mallocCheck(Qir10_verify[mz1][mz2], (M), double*);
				for (mz3=0;mz3 < M; mz3++) {
					Qir10_verify[mz1][mz2][mz3] = &_lin_Qir10_verify[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
				}
			}
		}
		double* _lin_Qir11_verify = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
		mallocCheck(_lin_Qir11_verify, ((N) * (N) * (M) * (M)), double);
		double**** Qir11_verify = (double****)malloc(sizeof(double***)*(N));
		mallocCheck(Qir11_verify, (N), double***);
		for (mz1=0;mz1 < N; mz1++) {
			Qir11_verify[mz1] = (double***)malloc(sizeof(double**)*(N));
			mallocCheck(Qir11_verify[mz1], (N), double**);
			for (mz2=0;mz2 < N; mz2++) {
				Qir11_verify[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
				mallocCheck(Qir11_verify[mz1][mz2], (M), double*);
				for (mz3=0;mz3 < M; mz3++) {
					Qir11_verify[mz1][mz2][mz3] = &_lin_Qir11_verify[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
				}
			}
		}
		double* _lin_Qia_verify = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
		mallocCheck(_lin_Qia_verify, ((N) * (N) * (M) * (M)), double);
		double**** Qia_verify = (double****)malloc(sizeof(double***)*(N));
		mallocCheck(Qia_verify, (N), double***);
		for (mz1=0;mz1 < N; mz1++) {
			Qia_verify[mz1] = (double***)malloc(sizeof(double**)*(N));
			mallocCheck(Qia_verify[mz1], (N), double**);
			for (mz2=0;mz2 < N; mz2++) {
				Qia_verify[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
				mallocCheck(Qia_verify[mz1][mz2], (M), double*);
				for (mz3=0;mz3 < M; mz3++) {
					Qia_verify[mz1][mz2][mz3] = &_lin_Qia_verify[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
				}
			}
		}
		double* _lin_Qib00_verify = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
		mallocCheck(_lin_Qib00_verify, ((N) * (N) * (M) * (M)), double);
		double**** Qib00_verify = (double****)malloc(sizeof(double***)*(N));
		mallocCheck(Qib00_verify, (N), double***);
		for (mz1=0;mz1 < N; mz1++) {
			Qib00_verify[mz1] = (double***)malloc(sizeof(double**)*(N));
			mallocCheck(Qib00_verify[mz1], (N), double**);
			for (mz2=0;mz2 < N; mz2++) {
				Qib00_verify[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
				mallocCheck(Qib00_verify[mz1][mz2], (M), double*);
				for (mz3=0;mz3 < M; mz3++) {
					Qib00_verify[mz1][mz2][mz3] = &_lin_Qib00_verify[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
				}
			}
		}
		double* _lin_Qib01_verify = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
		mallocCheck(_lin_Qib01_verify, ((N) * (N) * (M) * (M)), double);
		double**** Qib01_verify = (double****)malloc(sizeof(double***)*(N));
		mallocCheck(Qib01_verify, (N), double***);
		for (mz1=0;mz1 < N; mz1++) {
			Qib01_verify[mz1] = (double***)malloc(sizeof(double**)*(N));
			mallocCheck(Qib01_verify[mz1], (N), double**);
			for (mz2=0;mz2 < N; mz2++) {
				Qib01_verify[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
				mallocCheck(Qib01_verify[mz1][mz2], (M), double*);
				for (mz3=0;mz3 < M; mz3++) {
					Qib01_verify[mz1][mz2][mz3] = &_lin_Qib01_verify[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
				}
			}
		}
		double* _lin_Qib10_verify = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
		mallocCheck(_lin_Qib10_verify, ((N) * (N) * (M) * (M)), double);
		double**** Qib10_verify = (double****)malloc(sizeof(double***)*(N));
		mallocCheck(Qib10_verify, (N), double***);
		for (mz1=0;mz1 < N; mz1++) {
			Qib10_verify[mz1] = (double***)malloc(sizeof(double**)*(N));
			mallocCheck(Qib10_verify[mz1], (N), double**);
			for (mz2=0;mz2 < N; mz2++) {
				Qib10_verify[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
				mallocCheck(Qib10_verify[mz1][mz2], (M), double*);
				for (mz3=0;mz3 < M; mz3++) {
					Qib10_verify[mz1][mz2][mz3] = &_lin_Qib10_verify[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
				}
			}
		}
		double* _lin_Qib11_verify = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
		mallocCheck(_lin_Qib11_verify, ((N) * (N) * (M) * (M)), double);
		double**** Qib11_verify = (double****)malloc(sizeof(double***)*(N));
		mallocCheck(Qib11_verify, (N), double***);
		for (mz1=0;mz1 < N; mz1++) {
			Qib11_verify[mz1] = (double***)malloc(sizeof(double**)*(N));
			mallocCheck(Qib11_verify[mz1], (N), double**);
			for (mz2=0;mz2 < N; mz2++) {
				Qib11_verify[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
				mallocCheck(Qib11_verify[mz1][mz2], (M), double*);
				for (mz3=0;mz3 < M; mz3++) {
					Qib11_verify[mz1][mz2][mz3] = &_lin_Qib11_verify[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
				}
			}
		}
		double* _lin_Qinn01_verify = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
		mallocCheck(_lin_Qinn01_verify, ((N) * (N) * (M) * (M)), double);
		double**** Qinn01_verify = (double****)malloc(sizeof(double***)*(N));
		mallocCheck(Qinn01_verify, (N), double***);
		for (mz1=0;mz1 < N; mz1++) {
			Qinn01_verify[mz1] = (double***)malloc(sizeof(double**)*(N));
			mallocCheck(Qinn01_verify[mz1], (N), double**);
			for (mz2=0;mz2 < N; mz2++) {
				Qinn01_verify[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
				mallocCheck(Qinn01_verify[mz1][mz2], (M), double*);
				for (mz3=0;mz3 < M; mz3++) {
					Qinn01_verify[mz1][mz2][mz3] = &_lin_Qinn01_verify[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
				}
			}
		}
		double* _lin_Qinn02_verify = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
		mallocCheck(_lin_Qinn02_verify, ((N) * (N) * (M) * (M)), double);
		double**** Qinn02_verify = (double****)malloc(sizeof(double***)*(N));
		mallocCheck(Qinn02_verify, (N), double***);
		for (mz1=0;mz1 < N; mz1++) {
			Qinn02_verify[mz1] = (double***)malloc(sizeof(double**)*(N));
			mallocCheck(Qinn02_verify[mz1], (N), double**);
			for (mz2=0;mz2 < N; mz2++) {
				Qinn02_verify[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
				mallocCheck(Qinn02_verify[mz1][mz2], (M), double*);
				for (mz3=0;mz3 < M; mz3++) {
					Qinn02_verify[mz1][mz2][mz3] = &_lin_Qinn02_verify[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
				}
			}
		}
		double* _lin_Qinn10_verify = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
		mallocCheck(_lin_Qinn10_verify, ((N) * (N) * (M) * (M)), double);
		double**** Qinn10_verify = (double****)malloc(sizeof(double***)*(N));
		mallocCheck(Qinn10_verify, (N), double***);
		for (mz1=0;mz1 < N; mz1++) {
			Qinn10_verify[mz1] = (double***)malloc(sizeof(double**)*(N));
			mallocCheck(Qinn10_verify[mz1], (N), double**);
			for (mz2=0;mz2 < N; mz2++) {
				Qinn10_verify[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
				mallocCheck(Qinn10_verify[mz1][mz2], (M), double*);
				for (mz3=0;mz3 < M; mz3++) {
					Qinn10_verify[mz1][mz2][mz3] = &_lin_Qinn10_verify[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
				}
			}
		}
		double* _lin_Qinn11_verify = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
		mallocCheck(_lin_Qinn11_verify, ((N) * (N) * (M) * (M)), double);
		double**** Qinn11_verify = (double****)malloc(sizeof(double***)*(N));
		mallocCheck(Qinn11_verify, (N), double***);
		for (mz1=0;mz1 < N; mz1++) {
			Qinn11_verify[mz1] = (double***)malloc(sizeof(double**)*(N));
			mallocCheck(Qinn11_verify[mz1], (N), double**);
			for (mz2=0;mz2 < N; mz2++) {
				Qinn11_verify[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
				mallocCheck(Qinn11_verify[mz1][mz2], (M), double*);
				for (mz3=0;mz3 < M; mz3++) {
					Qinn11_verify[mz1][mz2][mz3] = &_lin_Qinn11_verify[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
				}
			}
		}
		double* _lin_Qinn12_verify = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
		mallocCheck(_lin_Qinn12_verify, ((N) * (N) * (M) * (M)), double);
		double**** Qinn12_verify = (double****)malloc(sizeof(double***)*(N));
		mallocCheck(Qinn12_verify, (N), double***);
		for (mz1=0;mz1 < N; mz1++) {
			Qinn12_verify[mz1] = (double***)malloc(sizeof(double**)*(N));
			mallocCheck(Qinn12_verify[mz1], (N), double**);
			for (mz2=0;mz2 < N; mz2++) {
				Qinn12_verify[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
				mallocCheck(Qinn12_verify[mz1][mz2], (M), double*);
				for (mz3=0;mz3 < M; mz3++) {
					Qinn12_verify[mz1][mz2][mz3] = &_lin_Qinn12_verify[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
				}
			}
		}
		double* _lin_Qinn20_verify = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
		mallocCheck(_lin_Qinn20_verify, ((N) * (N) * (M) * (M)), double);
		double**** Qinn20_verify = (double****)malloc(sizeof(double***)*(N));
		mallocCheck(Qinn20_verify, (N), double***);
		for (mz1=0;mz1 < N; mz1++) {
			Qinn20_verify[mz1] = (double***)malloc(sizeof(double**)*(N));
			mallocCheck(Qinn20_verify[mz1], (N), double**);
			for (mz2=0;mz2 < N; mz2++) {
				Qinn20_verify[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
				mallocCheck(Qinn20_verify[mz1][mz2], (M), double*);
				for (mz3=0;mz3 < M; mz3++) {
					Qinn20_verify[mz1][mz2][mz3] = &_lin_Qinn20_verify[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
				}
			}
		}
		double* _lin_Qinn21_verify = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
		mallocCheck(_lin_Qinn21_verify, ((N) * (N) * (M) * (M)), double);
		double**** Qinn21_verify = (double****)malloc(sizeof(double***)*(N));
		mallocCheck(Qinn21_verify, (N), double***);
		for (mz1=0;mz1 < N; mz1++) {
			Qinn21_verify[mz1] = (double***)malloc(sizeof(double**)*(N));
			mallocCheck(Qinn21_verify[mz1], (N), double**);
			for (mz2=0;mz2 < N; mz2++) {
				Qinn21_verify[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
				mallocCheck(Qinn21_verify[mz1][mz2], (M), double*);
				for (mz3=0;mz3 < M; mz3++) {
					Qinn21_verify[mz1][mz2][mz3] = &_lin_Qinn21_verify[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
				}
			}
		}
		double* _lin_Qinn22_verify = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
		mallocCheck(_lin_Qinn22_verify, ((N) * (N) * (M) * (M)), double);
		double**** Qinn22_verify = (double****)malloc(sizeof(double***)*(N));
		mallocCheck(Qinn22_verify, (N), double***);
		for (mz1=0;mz1 < N; mz1++) {
			Qinn22_verify[mz1] = (double***)malloc(sizeof(double**)*(N));
			mallocCheck(Qinn22_verify[mz1], (N), double**);
			for (mz2=0;mz2 < N; mz2++) {
				Qinn22_verify[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
				mallocCheck(Qinn22_verify[mz1][mz2], (M), double*);
				for (mz3=0;mz3 < M; mz3++) {
					Qinn22_verify[mz1][mz2][mz3] = &_lin_Qinn22_verify[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
				}
			}
		}
		double* _lin_Qind01_verify = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
		mallocCheck(_lin_Qind01_verify, ((N) * (N) * (M) * (M)), double);
		double**** Qind01_verify = (double****)malloc(sizeof(double***)*(N));
		mallocCheck(Qind01_verify, (N), double***);
		for (mz1=0;mz1 < N; mz1++) {
			Qind01_verify[mz1] = (double***)malloc(sizeof(double**)*(N));
			mallocCheck(Qind01_verify[mz1], (N), double**);
			for (mz2=0;mz2 < N; mz2++) {
				Qind01_verify[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
				mallocCheck(Qind01_verify[mz1][mz2], (M), double*);
				for (mz3=0;mz3 < M; mz3++) {
					Qind01_verify[mz1][mz2][mz3] = &_lin_Qind01_verify[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
				}
			}
		}
		double* _lin_Qind10_verify = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
		mallocCheck(_lin_Qind10_verify, ((N) * (N) * (M) * (M)), double);
		double**** Qind10_verify = (double****)malloc(sizeof(double***)*(N));
		mallocCheck(Qind10_verify, (N), double***);
		for (mz1=0;mz1 < N; mz1++) {
			Qind10_verify[mz1] = (double***)malloc(sizeof(double**)*(N));
			mallocCheck(Qind10_verify[mz1], (N), double**);
			for (mz2=0;mz2 < N; mz2++) {
				Qind10_verify[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
				mallocCheck(Qind10_verify[mz1][mz2], (M), double*);
				for (mz3=0;mz3 < M; mz3++) {
					Qind10_verify[mz1][mz2][mz3] = &_lin_Qind10_verify[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
				}
			}
		}
		double* _lin_Qind11_verify = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
		mallocCheck(_lin_Qind11_verify, ((N) * (N) * (M) * (M)), double);
		double**** Qind11_verify = (double****)malloc(sizeof(double***)*(N));
		mallocCheck(Qind11_verify, (N), double***);
		for (mz1=0;mz1 < N; mz1++) {
			Qind11_verify[mz1] = (double***)malloc(sizeof(double**)*(N));
			mallocCheck(Qind11_verify[mz1], (N), double**);
			for (mz2=0;mz2 < N; mz2++) {
				Qind11_verify[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
				mallocCheck(Qind11_verify[mz1][mz2], (M), double*);
				for (mz3=0;mz3 < M; mz3++) {
					Qind11_verify[mz1][mz2][mz3] = &_lin_Qind11_verify[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
				}
			}
		}
		double* _lin_Qind20_verify = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
		mallocCheck(_lin_Qind20_verify, ((N) * (N) * (M) * (M)), double);
		double**** Qind20_verify = (double****)malloc(sizeof(double***)*(N));
		mallocCheck(Qind20_verify, (N), double***);
		for (mz1=0;mz1 < N; mz1++) {
			Qind20_verify[mz1] = (double***)malloc(sizeof(double**)*(N));
			mallocCheck(Qind20_verify[mz1], (N), double**);
			for (mz2=0;mz2 < N; mz2++) {
				Qind20_verify[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
				mallocCheck(Qind20_verify[mz1][mz2], (M), double*);
				for (mz3=0;mz3 < M; mz3++) {
					Qind20_verify[mz1][mz2][mz3] = &_lin_Qind20_verify[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
				}
			}
		}
		double* _lin_Qind21_verify = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
		mallocCheck(_lin_Qind21_verify, ((N) * (N) * (M) * (M)), double);
		double**** Qind21_verify = (double****)malloc(sizeof(double***)*(N));
		mallocCheck(Qind21_verify, (N), double***);
		for (mz1=0;mz1 < N; mz1++) {
			Qind21_verify[mz1] = (double***)malloc(sizeof(double**)*(N));
			mallocCheck(Qind21_verify[mz1], (N), double**);
			for (mz2=0;mz2 < N; mz2++) {
				Qind21_verify[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
				mallocCheck(Qind21_verify[mz1][mz2], (M), double*);
				for (mz3=0;mz3 < M; mz3++) {
					Qind21_verify[mz1][mz2][mz3] = &_lin_Qind21_verify[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
				}
			}
		}
		double* _lin_Qidn01_verify = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
		mallocCheck(_lin_Qidn01_verify, ((N) * (N) * (M) * (M)), double);
		double**** Qidn01_verify = (double****)malloc(sizeof(double***)*(N));
		mallocCheck(Qidn01_verify, (N), double***);
		for (mz1=0;mz1 < N; mz1++) {
			Qidn01_verify[mz1] = (double***)malloc(sizeof(double**)*(N));
			mallocCheck(Qidn01_verify[mz1], (N), double**);
			for (mz2=0;mz2 < N; mz2++) {
				Qidn01_verify[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
				mallocCheck(Qidn01_verify[mz1][mz2], (M), double*);
				for (mz3=0;mz3 < M; mz3++) {
					Qidn01_verify[mz1][mz2][mz3] = &_lin_Qidn01_verify[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
				}
			}
		}
		double* _lin_Qidn02_verify = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
		mallocCheck(_lin_Qidn02_verify, ((N) * (N) * (M) * (M)), double);
		double**** Qidn02_verify = (double****)malloc(sizeof(double***)*(N));
		mallocCheck(Qidn02_verify, (N), double***);
		for (mz1=0;mz1 < N; mz1++) {
			Qidn02_verify[mz1] = (double***)malloc(sizeof(double**)*(N));
			mallocCheck(Qidn02_verify[mz1], (N), double**);
			for (mz2=0;mz2 < N; mz2++) {
				Qidn02_verify[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
				mallocCheck(Qidn02_verify[mz1][mz2], (M), double*);
				for (mz3=0;mz3 < M; mz3++) {
					Qidn02_verify[mz1][mz2][mz3] = &_lin_Qidn02_verify[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
				}
			}
		}
		double* _lin_Qidn10_verify = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
		mallocCheck(_lin_Qidn10_verify, ((N) * (N) * (M) * (M)), double);
		double**** Qidn10_verify = (double****)malloc(sizeof(double***)*(N));
		mallocCheck(Qidn10_verify, (N), double***);
		for (mz1=0;mz1 < N; mz1++) {
			Qidn10_verify[mz1] = (double***)malloc(sizeof(double**)*(N));
			mallocCheck(Qidn10_verify[mz1], (N), double**);
			for (mz2=0;mz2 < N; mz2++) {
				Qidn10_verify[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
				mallocCheck(Qidn10_verify[mz1][mz2], (M), double*);
				for (mz3=0;mz3 < M; mz3++) {
					Qidn10_verify[mz1][mz2][mz3] = &_lin_Qidn10_verify[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
				}
			}
		}
		double* _lin_Qidn11_verify = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
		mallocCheck(_lin_Qidn11_verify, ((N) * (N) * (M) * (M)), double);
		double**** Qidn11_verify = (double****)malloc(sizeof(double***)*(N));
		mallocCheck(Qidn11_verify, (N), double***);
		for (mz1=0;mz1 < N; mz1++) {
			Qidn11_verify[mz1] = (double***)malloc(sizeof(double**)*(N));
			mallocCheck(Qidn11_verify[mz1], (N), double**);
			for (mz2=0;mz2 < N; mz2++) {
				Qidn11_verify[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
				mallocCheck(Qidn11_verify[mz1][mz2], (M), double*);
				for (mz3=0;mz3 < M; mz3++) {
					Qidn11_verify[mz1][mz2][mz3] = &_lin_Qidn11_verify[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
				}
			}
		}
		double* _lin_Qidn12_verify = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
		mallocCheck(_lin_Qidn12_verify, ((N) * (N) * (M) * (M)), double);
		double**** Qidn12_verify = (double****)malloc(sizeof(double***)*(N));
		mallocCheck(Qidn12_verify, (N), double***);
		for (mz1=0;mz1 < N; mz1++) {
			Qidn12_verify[mz1] = (double***)malloc(sizeof(double**)*(N));
			mallocCheck(Qidn12_verify[mz1], (N), double**);
			for (mz2=0;mz2 < N; mz2++) {
				Qidn12_verify[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
				mallocCheck(Qidn12_verify[mz1][mz2], (M), double*);
				for (mz3=0;mz3 < M; mz3++) {
					Qidn12_verify[mz1][mz2][mz3] = &_lin_Qidn12_verify[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
				}
			}
		}
		double* _lin_Qidd01_verify = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
		mallocCheck(_lin_Qidd01_verify, ((N) * (N) * (M) * (M)), double);
		double**** Qidd01_verify = (double****)malloc(sizeof(double***)*(N));
		mallocCheck(Qidd01_verify, (N), double***);
		for (mz1=0;mz1 < N; mz1++) {
			Qidd01_verify[mz1] = (double***)malloc(sizeof(double**)*(N));
			mallocCheck(Qidd01_verify[mz1], (N), double**);
			for (mz2=0;mz2 < N; mz2++) {
				Qidd01_verify[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
				mallocCheck(Qidd01_verify[mz1][mz2], (M), double*);
				for (mz3=0;mz3 < M; mz3++) {
					Qidd01_verify[mz1][mz2][mz3] = &_lin_Qidd01_verify[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
				}
			}
		}
		double* _lin_Qidd10_verify = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
		mallocCheck(_lin_Qidd10_verify, ((N) * (N) * (M) * (M)), double);
		double**** Qidd10_verify = (double****)malloc(sizeof(double***)*(N));
		mallocCheck(Qidd10_verify, (N), double***);
		for (mz1=0;mz1 < N; mz1++) {
			Qidd10_verify[mz1] = (double***)malloc(sizeof(double**)*(N));
			mallocCheck(Qidd10_verify[mz1], (N), double**);
			for (mz2=0;mz2 < N; mz2++) {
				Qidd10_verify[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
				mallocCheck(Qidd10_verify[mz1][mz2], (M), double*);
				for (mz3=0;mz3 < M; mz3++) {
					Qidd10_verify[mz1][mz2][mz3] = &_lin_Qidd10_verify[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
				}
			}
		}
		double* _lin_Qidd11_verify = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
		mallocCheck(_lin_Qidd11_verify, ((N) * (N) * (M) * (M)), double);
		double**** Qidd11_verify = (double****)malloc(sizeof(double***)*(N));
		mallocCheck(Qidd11_verify, (N), double***);
		for (mz1=0;mz1 < N; mz1++) {
			Qidd11_verify[mz1] = (double***)malloc(sizeof(double**)*(N));
			mallocCheck(Qidd11_verify[mz1], (N), double**);
			for (mz2=0;mz2 < N; mz2++) {
				Qidd11_verify[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
				mallocCheck(Qidd11_verify[mz1][mz2], (M), double*);
				for (mz3=0;mz3 < M; mz3++) {
					Qidd11_verify[mz1][mz2][mz3] = &_lin_Qidd11_verify[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
				}
			}
		}
		double* _lin_Qix00_verify = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
		mallocCheck(_lin_Qix00_verify, ((N) * (N) * (M) * (M)), double);
		double**** Qix00_verify = (double****)malloc(sizeof(double***)*(N));
		mallocCheck(Qix00_verify, (N), double***);
		for (mz1=0;mz1 < N; mz1++) {
			Qix00_verify[mz1] = (double***)malloc(sizeof(double**)*(N));
			mallocCheck(Qix00_verify[mz1], (N), double**);
			for (mz2=0;mz2 < N; mz2++) {
				Qix00_verify[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
				mallocCheck(Qix00_verify[mz1][mz2], (M), double*);
				for (mz3=0;mz3 < M; mz3++) {
					Qix00_verify[mz1][mz2][mz3] = &_lin_Qix00_verify[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
				}
			}
		}
		double* _lin_Qix01_verify = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
		mallocCheck(_lin_Qix01_verify, ((N) * (N) * (M) * (M)), double);
		double**** Qix01_verify = (double****)malloc(sizeof(double***)*(N));
		mallocCheck(Qix01_verify, (N), double***);
		for (mz1=0;mz1 < N; mz1++) {
			Qix01_verify[mz1] = (double***)malloc(sizeof(double**)*(N));
			mallocCheck(Qix01_verify[mz1], (N), double**);
			for (mz2=0;mz2 < N; mz2++) {
				Qix01_verify[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
				mallocCheck(Qix01_verify[mz1][mz2], (M), double*);
				for (mz3=0;mz3 < M; mz3++) {
					Qix01_verify[mz1][mz2][mz3] = &_lin_Qix01_verify[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
				}
			}
		}
		double* _lin_Qix10_verify = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
		mallocCheck(_lin_Qix10_verify, ((N) * (N) * (M) * (M)), double);
		double**** Qix10_verify = (double****)malloc(sizeof(double***)*(N));
		mallocCheck(Qix10_verify, (N), double***);
		for (mz1=0;mz1 < N; mz1++) {
			Qix10_verify[mz1] = (double***)malloc(sizeof(double**)*(N));
			mallocCheck(Qix10_verify[mz1], (N), double**);
			for (mz2=0;mz2 < N; mz2++) {
				Qix10_verify[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
				mallocCheck(Qix10_verify[mz1][mz2], (M), double*);
				for (mz3=0;mz3 < M; mz3++) {
					Qix10_verify[mz1][mz2][mz3] = &_lin_Qix10_verify[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
				}
			}
		}
		double* _lin_Qix11_verify = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
		mallocCheck(_lin_Qix11_verify, ((N) * (N) * (M) * (M)), double);
		double**** Qix11_verify = (double****)malloc(sizeof(double***)*(N));
		mallocCheck(Qix11_verify, (N), double***);
		for (mz1=0;mz1 < N; mz1++) {
			Qix11_verify[mz1] = (double***)malloc(sizeof(double**)*(N));
			mallocCheck(Qix11_verify[mz1], (N), double**);
			for (mz2=0;mz2 < N; mz2++) {
				Qix11_verify[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
				mallocCheck(Qix11_verify[mz1][mz2], (M), double*);
				for (mz3=0;mz3 < M; mz3++) {
					Qix11_verify[mz1][mz2][mz3] = &_lin_Qix11_verify[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
				}
			}
		}
		double* _lin_auxqiadd01_verify = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
		mallocCheck(_lin_auxqiadd01_verify, ((N) * (N) * (M) * (M)), double);
		double**** auxqiadd01_verify = (double****)malloc(sizeof(double***)*(N));
		mallocCheck(auxqiadd01_verify, (N), double***);
		for (mz1=0;mz1 < N; mz1++) {
			auxqiadd01_verify[mz1] = (double***)malloc(sizeof(double**)*(N));
			mallocCheck(auxqiadd01_verify[mz1], (N), double**);
			for (mz2=0;mz2 < N; mz2++) {
				auxqiadd01_verify[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
				mallocCheck(auxqiadd01_verify[mz1][mz2], (M), double*);
				for (mz3=0;mz3 < M; mz3++) {
					auxqiadd01_verify[mz1][mz2][mz3] = &_lin_auxqiadd01_verify[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
				}
			}
		}
		double* _lin_auxqiadd10_verify = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
		mallocCheck(_lin_auxqiadd10_verify, ((N) * (N) * (M) * (M)), double);
		double**** auxqiadd10_verify = (double****)malloc(sizeof(double***)*(N));
		mallocCheck(auxqiadd10_verify, (N), double***);
		for (mz1=0;mz1 < N; mz1++) {
			auxqiadd10_verify[mz1] = (double***)malloc(sizeof(double**)*(N));
			mallocCheck(auxqiadd10_verify[mz1], (N), double**);
			for (mz2=0;mz2 < N; mz2++) {
				auxqiadd10_verify[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
				mallocCheck(auxqiadd10_verify[mz1][mz2], (M), double*);
				for (mz3=0;mz3 < M; mz3++) {
					auxqiadd10_verify[mz1][mz2][mz3] = &_lin_auxqiadd10_verify[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
				}
			}
		}
		double* _lin_auxqiadd11_verify = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
		mallocCheck(_lin_auxqiadd11_verify, ((N) * (N) * (M) * (M)), double);
		double**** auxqiadd11_verify = (double****)malloc(sizeof(double***)*(N));
		mallocCheck(auxqiadd11_verify, (N), double***);
		for (mz1=0;mz1 < N; mz1++) {
			auxqiadd11_verify[mz1] = (double***)malloc(sizeof(double**)*(N));
			mallocCheck(auxqiadd11_verify[mz1], (N), double**);
			for (mz2=0;mz2 < N; mz2++) {
				auxqiadd11_verify[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
				mallocCheck(auxqiadd11_verify[mz1][mz2], (M), double*);
				for (mz3=0;mz3 < M; mz3++) {
					auxqiadd11_verify[mz1][mz2][mz3] = &_lin_auxqiadd11_verify[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
				}
			}
		}
		double* _lin_auxqia01_verify = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
		mallocCheck(_lin_auxqia01_verify, ((N) * (N) * (M) * (M)), double);
		double**** auxqia01_verify = (double****)malloc(sizeof(double***)*(N));
		mallocCheck(auxqia01_verify, (N), double***);
		for (mz1=0;mz1 < N; mz1++) {
			auxqia01_verify[mz1] = (double***)malloc(sizeof(double**)*(N));
			mallocCheck(auxqia01_verify[mz1], (N), double**);
			for (mz2=0;mz2 < N; mz2++) {
				auxqia01_verify[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
				mallocCheck(auxqia01_verify[mz1][mz2], (M), double*);
				for (mz3=0;mz3 < M; mz3++) {
					auxqia01_verify[mz1][mz2][mz3] = &_lin_auxqia01_verify[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
				}
			}
		}
		double* _lin_auxqia10_verify = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
		mallocCheck(_lin_auxqia10_verify, ((N) * (N) * (M) * (M)), double);
		double**** auxqia10_verify = (double****)malloc(sizeof(double***)*(N));
		mallocCheck(auxqia10_verify, (N), double***);
		for (mz1=0;mz1 < N; mz1++) {
			auxqia10_verify[mz1] = (double***)malloc(sizeof(double**)*(N));
			mallocCheck(auxqia10_verify[mz1], (N), double**);
			for (mz2=0;mz2 < N; mz2++) {
				auxqia10_verify[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
				mallocCheck(auxqia10_verify[mz1][mz2], (M), double*);
				for (mz3=0;mz3 < M; mz3++) {
					auxqia10_verify[mz1][mz2][mz3] = &_lin_auxqia10_verify[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
				}
			}
		}
		double* _lin_auxqia11_verify = (double*)malloc(sizeof(double)*((N) * (N) * (M) * (M)));
		mallocCheck(_lin_auxqia11_verify, ((N) * (N) * (M) * (M)), double);
		double**** auxqia11_verify = (double****)malloc(sizeof(double***)*(N));
		mallocCheck(auxqia11_verify, (N), double***);
		for (mz1=0;mz1 < N; mz1++) {
			auxqia11_verify[mz1] = (double***)malloc(sizeof(double**)*(N));
			mallocCheck(auxqia11_verify[mz1], (N), double**);
			for (mz2=0;mz2 < N; mz2++) {
				auxqia11_verify[mz1][mz2] = (double**)malloc(sizeof(double*)*(M));
				mallocCheck(auxqia11_verify[mz1][mz2], (M), double*);
				for (mz3=0;mz3 < M; mz3++) {
					auxqia11_verify[mz1][mz2][mz3] = &_lin_auxqia11_verify[(mz1*((N) * (M) * (M))) + (mz2*((M) * (M))) + (mz3*(M))];
				}
			}
		}
	#endif
//Input Initialization
	{
		#if defined (RANDOM)
			#define S0(i) (seq0(i) = rand()) 
		#elif defined (CHECKING) || defined (VERIFY)
			#ifdef NO_PROMPT
				#define S0(i) scanf("%c", &seq0(i)); char c; while((c=getchar())!=-1 && c !='\n')
			#else
				//#define S0(i) printf("seq0(%ld)=",(long) i); scanf("%c", &seq0(i)); char c; while((c=getchar())!=-1 && c !='\n')
				#define S0(i) scanf("%c", &seq0(i)); char c; while((c=getchar())!=-1 && c !='\n')
			#endif
		#else
			#define S0(i) (seq0(i) = 'a')   //Default value
		#endif
		
		
		int c1=1;

		FILE *fp;
   		char buff[N];
		fp = fopen(argv[4], "r");
		fscanf(fp,"%c",&seq0(0));
		while(fgets(buff, N-1, fp) != NULL)
		   {
			
			fscanf(fp,"%c",&seq0(c1));
			c1=c1+1;;
		   }

		fclose(fp);
		for(c1=0;c1 <= N-1;c1+=1)
		 {
			seq01(c1)=tonum(seq0(c1));
			
			if(seq01(c1)==4)
				{printf("%c\t %u \n",seq0(c1),seq01(c1));printf("Invalid input seq0uence\n");exit(0);}		 
		 }
		#undef S0
	}

	{
		#if defined (RANDOM)
			#define S0(i) (seqr(i) = rand()) 
		#elif defined (CHECKING) || defined (VERIFY)
			#ifdef NO_PROMPT
				#define S0(i) scanf("%c", &seqr(i)); char c; while((c=getchar())!=-1 && c !='\n')
			#else
				//#define S0(i) printf("seqr(%ld)=",(long) i); scanf("%c", &seqr(i)); char c; while((c=getchar())!=-1 && c !='\n')
				#define S0(i) scanf("%c", &seqr(i)); char c; while((c=getchar())!=-1 && c !='\n')
			#endif
		#else
			#define S0(i) (seqr(i) = 'a')   //Default value
		#endif
		
		
		int c1=1;

		FILE *fp;
   		char buff[M];
		fp = fopen(argv[5], "r");
		fscanf(fp,"%c",&seqr(0));
		while(fgets(buff, M-1, fp) != NULL)
		   {
			
			fscanf(fp,"%c",&seqr(c1));
			c1=c1+1;;
		   }

		fclose(fp);
		for(c1=0;c1 <= M-1;c1+=1)
		 {
			seqr1(c1)=tonum(seqr(c1));
			if(seqr1(c1)==4)
				{printf("%c\t %u \n",seqr(c1),seqr1(c1));printf("Invalid input sequence\n");exit(0);}		 
		 }
		#undef S0
	}

	//Energy parameters
	char *dataDir=(char *)"./data/";	
	int NA=0;
	int polymer=0;
	double naConc=1.000000;
	double mgConc=0.000000;
	char *suffix=NULL;	
	double tMin=37.000000;
	int zip=0;
	int nodangle=0;
	int energyType=1;
	//double RT;
	Energy *energy;

	//Create a new energy structure
	energy = new Energy(dataDir, NA, polymer, naConc, mgConc, suffix, tMin, zip, nodangle, energyType);
	//RT = energy->getRT();
	double temp=37.000000 ; 
	energy->setTemperature(temp);
	
	//Timing
	struct timeval time;
	double elapsed_time;
	
	//Call the main computation
	gettimeofday(&time, NULL);
	elapsed_time = (((double) time.tv_sec) + ((double) time.tv_usec)/1000000);
	
	piRNAb2(energy,N, M, MHL, seq01, seqr1, seq1, Q00, Q10, Qi, Qiy, Qixm00, Qixm01, Qixm02, Qixm10, Qixm11, Qixm12, Qixk00, Qixk01, Qixk10, Qixk11, Qimm02, Qimm12, Qimm20, Qimm21, Qimm22, Qimk01, Qimk11, Qimk20, Qimk21, Qikm10, Qikm11, Qikm02, Qikm12, Qikk01, Qikk10, Qikk11, Qiann01, Qiann02, Qiann10, Qiann11, Qiann12, Qiann20, Qiann21, Qiann22, Qiand01, Qiand10, Qiand11, Qiand20, Qiand21, Qiadn01, Qiadn02, Qiadn10, Qiadn11, Qiadn12, Qiadd01, Qiadd10, Qiadd11, Qiar01, Qiar10, Qiar11, Qilr01, Qilr10, Qilr11, Qir01, Qir10, Qir11, Qia, Qib00, Qib01, Qib10, Qib11, Qinn01, Qinn02, Qinn10, Qinn11, Qinn12, Qinn20, Qinn21, Qinn22, Qind01, Qind10, Qind11, Qind20, Qind21, Qidn01, Qidn02, Qidn10, Qidn11, Qidn12, Qidd01, Qidd10, Qidd11, Qix00, Qix01, Qix10, Qix11, auxqiadd01, auxqiadd10, auxqiadd11, auxqia01, auxqia10, auxqia11);

	gettimeofday(&time, NULL);
	elapsed_time = (((double) time.tv_sec) + ((double) time.tv_usec)/1000000) - elapsed_time;

	// timing information
	//printf("Execution time : %lf sec.\n", elapsed_time);
	
	#ifdef TIMING
		FILE * fp = fopen( "trace.dat","a+");
		if (fp == NULL) {
				printf("I couldn't open trace.dat for writing.\n");
				exit(EXIT_FAILURE);
		}
		fprintf(fp, "%ld\t%ld\t%ld\t%lf\n",N,M,MHL,elapsed_time);
		fclose(fp);
	#endif
	
	//Verification Run
	#ifdef VERIFY
		#ifdef TIMING
			gettimeofday(&time, NULL);
			elapsed_time = (((double) time.tv_sec) + ((double) time.tv_usec)/1000000);
		#endif
    	piRNAb2_verify(energy,N, M, MHL, seq01, seqr1, seq1_verify, Q00_verify, Q10_verify, Qi_verify, Qiy_verify, Qixm00_verify, Qixm01_verify, Qixm02_verify, Qixm10_verify, Qixm11_verify, Qixm12_verify, Qixk00_verify, Qixk01_verify, Qixk10_verify, Qixk11_verify, Qimm02_verify, Qimm12_verify, Qimm20_verify, Qimm21_verify, Qimm22_verify, Qimk01_verify, Qimk11_verify, Qimk20_verify, Qimk21_verify, Qikm10_verify, Qikm11_verify, Qikm02_verify, Qikm12_verify, Qikk01_verify, Qikk10_verify, Qikk11_verify, Qiann01_verify, Qiann02_verify, Qiann10_verify, Qiann11_verify, Qiann12_verify, Qiann20_verify, Qiann21_verify, Qiann22_verify, Qiand01_verify, Qiand10_verify, Qiand11_verify, Qiand20_verify, Qiand21_verify, Qiadn01_verify, Qiadn02_verify, Qiadn10_verify, Qiadn11_verify, Qiadn12_verify, Qiadd01_verify, Qiadd10_verify, Qiadd11_verify, Qiar01_verify, Qiar10_verify, Qiar11_verify, Qilr01_verify, Qilr10_verify, Qilr11_verify, Qir01_verify, Qir10_verify, Qir11_verify, Qia_verify, Qib00_verify, Qib01_verify, Qib10_verify, Qib11_verify, Qinn01_verify, Qinn02_verify, Qinn10_verify, Qinn11_verify, Qinn12_verify, Qinn20_verify, Qinn21_verify, Qinn22_verify, Qind01_verify, Qind10_verify, Qind11_verify, Qind20_verify, Qind21_verify, Qidn01_verify, Qidn02_verify, Qidn10_verify, Qidn11_verify, Qidn12_verify, Qidd01_verify, Qidd10_verify, Qidd11_verify, Qix00_verify, Qix01_verify, Qix10_verify, Qix11_verify, auxqiadd01_verify, auxqiadd10_verify, auxqiadd11_verify, auxqia01_verify, auxqia10_verify, auxqia11_verify);
    	#ifdef TIMING
    		gettimeofday(&time, NULL);
			elapsed_time = (((double) time.tv_sec) + ((double) time.tv_usec)/1000000) - elapsed_time;
			
			FILE * fp_verify = fopen( "trace_verify.dat","a+");
			if (fp == NULL) {
					printf("I couldn't open trace_verify.dat for writing.\n");
					exit(EXIT_FAILURE);
			}
			fprintf(fp, "%ld\t%ld\t%ld\t%lf\n",N,M,MHL,elapsed_time);
			fclose(fp_verify);
		#endif
	#endif
    	
	#ifdef CHECKING
    	//Print Outputs
		{
			#ifdef NO_PROMPT
				#define S0(i) printf("%c\n",var_seq1(i))
			#else
				#define S0(i) printf("seq1(%ld)=\t",(long) i);printf("%c\n",var_seq1(i))
			#endif
			int c1;
			for(c1=0;c1 <= M-1;c1+=1)
			 {
			 	//S0((c1));
			 }
			#undef S0
		}
		{
			#ifdef NO_PROMPT
				#define S0(i,j) printf("%0.2lf\n",var_Q00(i,j))
			#else
				#define S0(i,j) printf("Q00(%ld,%ld)=\t",(long) i,(long) j);printf("%0.6lf\n",var_Q00(i,j))
			#endif
			int c1,c2;
			//for(c1=0;c1 <= N-1;c1+=1)
			 {
			 	//for(c2=c1;c2 <= N-1;c2+=1)
			 	 {
			 	 	//S0((0),(N-1));
			 	 }
			 }
			#undef S0
		}
		{
			#ifdef NO_PROMPT
				#define S0(i,j) printf("%0.2lf\n",var_Q10(i,j))
			#else
				#define S0(i,j) printf("Q10(%ld,%ld)=\t",(long) i,(long) j);printf("%0.6lf\n",var_Q10(i,j))
			#endif
			int c1,c2;
			for(c1=0;c1 <= N-1;c1+=1)
			 {
			 	for(c2=c1;c2 <= N-1;c2+=1)
			 	 {
			 	 	//S0((c1),(c2));
			 	 }
			 }
			#undef S0
		}
		{
			#ifdef NO_PROMPT
				#define S0(i1,j1,i2,j2) printf("%0.2lf\n",var_Qi(i1,j1,i2,j2))
			#else
				#define S0(i1,j1,i2,j2) printf("Qi(%ld,%ld,%ld,%ld)=\t",(long) i1,(long) j1,(long) i2,(long) j2);printf("%0.6lf\n",var_Qi(i1,j1,i2,j2))
			#endif
			
for(unsigned int l1 = 1; l1 <= N; l1++){
		for(unsigned int l2 = 1; l2 <= M; l2++)
		{
			
			for(int i1 = 0; (unsigned int)i1 <= N - l1; i1++){
				for(unsigned int i2 = 0; i2 <= M - l2; i2++)
				{
					int j1 = i1 + l1 - 1;
					int j2 = i2 + l2 - 1;
					
						S0((i1),(j1),(i2),(j2));
}}}}
			#undef S0
		}
		{
			#ifdef NO_PROMPT
				#define S0(i1,j1,i2,j2) printf("%0.2lf\n",var_Qiy(i1,j1,i2,j2))
			#else
				#define S0(i1,j1,i2,j2) printf("Qiy(%ld,%ld,%ld,%ld)=\t",(long) i1,(long) j1,(long) i2,(long) j2);printf("%0.6lf\n",var_Qiy(i1,j1,i2,j2))
			#endif
			
/*for(unsigned int l1 = 1; l1 <= N; l1++){
		for(unsigned int l2 = 1; l2 <= M; l2++)
		{
			
			for(int i1 = 0; (unsigned int)i1 <= N - l1; i1++){
				for(unsigned int i2 = 0; i2 <= M - l2; i2++)
				{
					int j1 = i1 + l1 - 1;
					int j2 = i2 + l2 - 1;
					if(energy->base_pair(seq01[i1], seq01[j1]) && energy->base_pair(seq1[i2], seq1[j2]) && j1 > i1+3 && j2 > i2+3){
						S0((i1),(j1),(i2),(j2));}
}}}}*/
			#undef S0
		}
		{
			#ifdef NO_PROMPT
				#define S0(i1,j1,i2,j2) printf("%0.2lf\n",var_Qixm00(i1,j1,i2,j2))
			#else
				#define S0(i1,j1,i2,j2) printf("Qixm00(%ld,%ld,%ld,%ld)=\t",(long) i1,(long) j1,(long) i2,(long) j2);printf("%0.6lf\n",var_Qixm00(i1,j1,i2,j2))
			#endif
			
/*for(unsigned int l1 = 1; l1 <= N; l1++){
		for(unsigned int l2 = 1; l2 <= M; l2++)
		{
			
			for(int i1 = 0; (unsigned int)i1 <= N - l1; i1++){
				for(unsigned int i2 = 0; i2 <= M - l2; i2++)
				{
					int j1 = i1 + l1 - 1;
					int j2 = i2 + l2 - 1;
					if(energy->base_pair(seq01[i1], seq01[j1]) && j1 > i1+3){
						S0((i1),(j1),(i2),(j2));}
}}}}*/
			#undef S0
		}
		{
			#ifdef NO_PROMPT
				#define S0(i1,j1,i2,j2) printf("%0.2lf\n",var_Qixm01(i1,j1,i2,j2))
			#else
				#define S0(i1,j1,i2,j2) printf("Qixm01(%ld,%ld,%ld,%ld)=\t",(long) i1,(long) j1,(long) i2,(long) j2);printf("%0.6lf\n",var_Qixm01(i1,j1,i2,j2))
			#endif
			/*for(unsigned int l1 = 1; l1 <= N; l1++){
		for(unsigned int l2 = 1; l2 <= M; l2++)
		{
			
			for(int i1 = 0; (unsigned int)i1 <= N - l1; i1++){
				for(unsigned int i2 = 0; i2 <= M - l2; i2++)
				{
					int j1 = i1 + l1 - 1;
					int j2 = i2 + l2 - 1;
					if(energy->base_pair(seq01[i1], seq01[j1]) && j1 > i1+3){
						S0((i1),(j1),(i2),(j2));}
}}}}*/
			#undef S0
		}
		{
			#ifdef NO_PROMPT
				#define S0(i1,j1,i2,j2) printf("%0.2lf\n",var_Qixm02(i1,j1,i2,j2))
			#else
				#define S0(i1,j1,i2,j2) printf("Qixm02(%ld,%ld,%ld,%ld)=\t",(long) i1,(long) j1,(long) i2,(long) j2);printf("%0.6lf\n",var_Qixm02(i1,j1,i2,j2))
			#endif
			
/*for(unsigned int l1 = 1; l1 <= N; l1++){
		for(unsigned int l2 = 1; l2 <= M; l2++)
		{
			
			for(int i1 = 0; (unsigned int)i1 <= N - l1; i1++){
				for(unsigned int i2 = 0; i2 <= M - l2; i2++)
				{
					int j1 = i1 + l1 - 1;
					int j2 = i2 + l2 - 1;
					if(energy->base_pair(seq01[i1], seq01[j1]) && j1 > i1+3){
						S0((i1),(j1),(i2),(j2));}
}}}}	*/
#undef S0
		}
		{
			#ifdef NO_PROMPT
				#define S0(i1,j1,i2,j2) printf("%0.2lf\n",var_Qixm10(i1,j1,i2,j2))
			#else
				#define S0(i1,j1,i2,j2) printf("Qixm10(%ld,%ld,%ld,%ld)=\t",(long) i1,(long) j1,(long) i2,(long) j2);printf("%0.6lf\n",var_Qixm10(i1,j1,i2,j2))
			#endif
			/*for(unsigned int l1 = 1; l1 <= N; l1++){
		for(unsigned int l2 = 1; l2 <= M; l2++)
		{
			
			for(int i1 = 0; (unsigned int)i1 <= N - l1; i1++){
				for(unsigned int i2 = 0; i2 <= M - l2; i2++)
				{
					int j1 = i1 + l1 - 1;
					int j2 = i2 + l2 - 1;
					if(energy->base_pair(seq1[i2], seq1[j2]) && j2 > i2+3){
						S0((i1),(j1),(i2),(j2));}
}}}}*/
			#undef S0
		}
		{
			#ifdef NO_PROMPT
				#define S0(i1,j1,i2,j2) printf("%0.2lf\n",var_Qixm11(i1,j1,i2,j2))
			#else
				#define S0(i1,j1,i2,j2) printf("Qixm11(%ld,%ld,%ld,%ld)=\t",(long) i1,(long) j1,(long) i2,(long) j2);printf("%0.6lf\n",var_Qixm11(i1,j1,i2,j2))
			#endif
			/*for(unsigned int l1 = 1; l1 <= N; l1++){
		for(unsigned int l2 = 1; l2 <= M; l2++)
		{
			
			for(int i1 = 0; (unsigned int)i1 <= N - l1; i1++){
				for(unsigned int i2 = 0; i2 <= M - l2; i2++)
				{
					int j1 = i1 + l1 - 1;
					int j2 = i2 + l2 - 1;
					if(energy->base_pair(seq1[i2], seq1[j2]) && j2 > i2+3){
						S0((i1),(j1),(i2),(j2));}
}}}}*/
			#undef S0
		}
		{
			#ifdef NO_PROMPT
				#define S0(i1,j1,i2,j2) printf("%0.2lf\n",var_Qixm12(i1,j1,i2,j2))
			#else
				#define S0(i1,j1,i2,j2) printf("Qixm12(%ld,%ld,%ld,%ld)=\t",(long) i1,(long) j1,(long) i2,(long) j2);printf("%0.6lf\n",var_Qixm12(i1,j1,i2,j2))
			#endif
		/*	for(unsigned int l1 = 1; l1 <= N; l1++){
		for(unsigned int l2 = 1; l2 <= M; l2++)
		{
			
			for(int i1 = 0; (unsigned int)i1 <= N - l1; i1++){
				for(unsigned int i2 = 0; i2 <= M - l2; i2++)
				{
					int j1 = i1 + l1 - 1;
					int j2 = i2 + l2 - 1;
					if(energy->base_pair(seq1[i2], seq1[j2]) && j2 > i2+3){
						S0((i1),(j1),(i2),(j2));}
}}}}*/
			#undef S0
		}
		{
			#ifdef NO_PROMPT
				#define S0(i1,j1,i2,j2) printf("%0.2lf\n",var_Qixk00(i1,j1,i2,j2))
			#else
				#define S0(i1,j1,i2,j2) printf("Qixk00(%ld,%ld,%ld,%ld)=\t",(long) i1,(long) j1,(long) i2,(long) j2);printf("%0.6lf\n",var_Qixk00(i1,j1,i2,j2))
			#endif
			/*for(unsigned int l1 = 1; l1 <= N; l1++){
		for(unsigned int l2 = 1; l2 <= M; l2++)
		{
			
			for(int i1 = 0; (unsigned int)i1 <= N - l1; i1++){
				for(unsigned int i2 = 0; i2 <= M - l2; i2++)
				{
					int j1 = i1 + l1 - 1;
					int j2 = i2 + l2 - 1;
					if(energy->base_pair(seq01[i1], seq01[j1]) && j1 > i1+3){
						S0((i1),(j1),(i2),(j2));}
}}}}*/
			#undef S0
		}
		{
			#ifdef NO_PROMPT
				#define S0(i1,j1,i2,j2) printf("%0.2lf\n",var_Qixk01(i1,j1,i2,j2))
			#else
				#define S0(i1,j1,i2,j2) printf("Qixk01(%ld,%ld,%ld,%ld)=\t",(long) i1,(long) j1,(long) i2,(long) j2);printf("%0.6lf\n",var_Qixk01(i1,j1,i2,j2))
			#endif
			
/*for(unsigned int l1 = 1; l1 <= N; l1++){
		for(unsigned int l2 = 1; l2 <= M; l2++)
		{
			
			for(int i1 = 0; (unsigned int)i1 <= N - l1; i1++){
				for(unsigned int i2 = 0; i2 <= M - l2; i2++)
				{
					int j1 = i1 + l1 - 1;
					int j2 = i2 + l2 - 1;
					if(energy->base_pair(seq01[i1], seq01[j1]) && j1 > i1+3){
						S0((i1),(j1),(i2),(j2));}
}}}}*/
			#undef S0

		}
		{
			#ifdef NO_PROMPT
				#define S0(i1,j1,i2,j2) printf("%0.2lf\n",var_Qixk10(i1,j1,i2,j2))
			#else
				#define S0(i1,j1,i2,j2) printf("Qixk10(%ld,%ld,%ld,%ld)=\t",(long) i1,(long) j1,(long) i2,(long) j2);printf("%0.6lf\n",var_Qixk10(i1,j1,i2,j2))
			#endif
		/*	for(unsigned int l1 = 1; l1 <= N; l1++){
		for(unsigned int l2 = 1; l2 <= M; l2++)
		{
			
			for(int i1 = 0; (unsigned int)i1 <= N - l1; i1++){
				for(unsigned int i2 = 0; i2 <= M - l2; i2++)
				{
					int j1 = i1 + l1 - 1;
					int j2 = i2 + l2 - 1;
					if(energy->base_pair(seq1[i2], seq1[j2]) && j2 > i2+3){
						S0((i1),(j1),(i2),(j2));}
}}}}*/
			#undef S0
		}
		{
			#ifdef NO_PROMPT
				#define S0(i1,j1,i2,j2) printf("%0.2lf\n",var_Qixk11(i1,j1,i2,j2))
			#else
				#define S0(i1,j1,i2,j2) printf("Qixk11(%ld,%ld,%ld,%ld)=\t",(long) i1,(long) j1,(long) i2,(long) j2);printf("%0.6lf\n",var_Qixk11(i1,j1,i2,j2))
			#endif
			/*for(unsigned int l1 = 1; l1 <= N; l1++){
		for(unsigned int l2 = 1; l2 <= M; l2++)
		{
			
			for(int i1 = 0; (unsigned int)i1 <= N - l1; i1++){
				for(unsigned int i2 = 0; i2 <= M - l2; i2++)
				{
					int j1 = i1 + l1 - 1;
					int j2 = i2 + l2 - 1;
					if(energy->base_pair(seq1[i2], seq1[j2]) && j2 > i2+3){
						S0((i1),(j1),(i2),(j2));}
}}}}*/
			#undef S0
		}
		{
			#ifdef NO_PROMPT
				#define S0(i1,j1,i2,j2) printf("%0.2lf\n",var_Qimm02(i1,j1,i2,j2))
			#else
				#define S0(i1,j1,i2,j2) printf("Qimm02(%ld,%ld,%ld,%ld)=\t",(long) i1,(long) j1,(long) i2,(long) j2);printf("%0.6lf\n",var_Qimm02(i1,j1,i2,j2))
			#endif
		/*	for(unsigned int l1 = 1; l1 <= N; l1++){
		for(unsigned int l2 = 1; l2 <= M; l2++)
		{
			
			for(int i1 = 0; (unsigned int)i1 <= N - l1; i1++){
				for(unsigned int i2 = 0; i2 <= M - l2; i2++)
				{
					int j1 = i1 + l1 - 1;
					int j2 = i2 + l2 - 1;
					
						S0((i1),(j1),(i2),(j2));
}}}}*/
			#undef S0
		}
		{
			#ifdef NO_PROMPT
				#define S0(i1,j1,i2,j2) printf("%0.2lf\n",var_Qimm12(i1,j1,i2,j2))
			#else
				#define S0(i1,j1,i2,j2) printf("Qimm12(%ld,%ld,%ld,%ld)=\t",(long) i1,(long) j1,(long) i2,(long) j2);printf("%0.6lf\n",var_Qimm12(i1,j1,i2,j2))
			#endif
		/*	for(unsigned int l1 = 1; l1 <= N; l1++){
		for(unsigned int l2 = 1; l2 <= M; l2++)
		{
			
			for(int i1 = 0; (unsigned int)i1 <= N - l1; i1++){
				for(unsigned int i2 = 0; i2 <= M - l2; i2++)
				{
					int j1 = i1 + l1 - 1;
					int j2 = i2 + l2 - 1;
					
						S0((i1),(j1),(i2),(j2));
}}}}*/
			#undef S0
		}
		{
			#ifdef NO_PROMPT
				#define S0(i1,j1,i2,j2) printf("%0.2lf\n",var_Qimm20(i1,j1,i2,j2))
			#else
				#define S0(i1,j1,i2,j2) printf("Qimm20(%ld,%ld,%ld,%ld)=\t",(long) i1,(long) j1,(long) i2,(long) j2);printf("%0.6lf\n",var_Qimm20(i1,j1,i2,j2))
			#endif
			/*for(unsigned int l1 = 1; l1 <= N; l1++){
		for(unsigned int l2 = 1; l2 <= M; l2++)
		{
			
			for(int i1 = 0; (unsigned int)i1 <= N - l1; i1++){
				for(unsigned int i2 = 0; i2 <= M - l2; i2++)
				{
					int j1 = i1 + l1 - 1;
					int j2 = i2 + l2 - 1;
					
						S0((i1),(j1),(i2),(j2));
}}}}*/
			#undef S0
		}
		{
			#ifdef NO_PROMPT
				#define S0(i1,j1,i2,j2) printf("%0.2lf\n",var_Qimm21(i1,j1,i2,j2))
			#else
				#define S0(i1,j1,i2,j2) printf("Qimm21(%ld,%ld,%ld,%ld)=\t",(long) i1,(long) j1,(long) i2,(long) j2);printf("%0.6lf\n",var_Qimm21(i1,j1,i2,j2))
			#endif
			/*for(unsigned int l1 = 1; l1 <= N; l1++){
		for(unsigned int l2 = 1; l2 <= M; l2++)
		{
			
			for(int i1 = 0; (unsigned int)i1 <= N - l1; i1++){
				for(unsigned int i2 = 0; i2 <= M - l2; i2++)
				{
					int j1 = i1 + l1 - 1;
					int j2 = i2 + l2 - 1;
					
						S0((i1),(j1),(i2),(j2));
}}}}*/
			#undef S0
		}
		{
			#ifdef NO_PROMPT
				#define S0(i1,j1,i2,j2) printf("%0.2lf\n",var_Qimm22(i1,j1,i2,j2))
			#else
				#define S0(i1,j1,i2,j2) printf("Qimm22(%ld,%ld,%ld,%ld)=\t",(long) i1,(long) j1,(long) i2,(long) j2);printf("%0.6lf\n",var_Qimm22(i1,j1,i2,j2))
			#endif
			/*for(unsigned int l1 = 1; l1 <= N; l1++){
		for(unsigned int l2 = 1; l2 <= M; l2++)
		{
			
			for(int i1 = 0; (unsigned int)i1 <= N - l1; i1++){
				for(unsigned int i2 = 0; i2 <= M - l2; i2++)
				{
					int j1 = i1 + l1 - 1;
					int j2 = i2 + l2 - 1;
					
						S0((i1),(j1),(i2),(j2));
}}}}*/
			#undef S0
		}
		{
			#ifdef NO_PROMPT
				#define S0(i1,j1,i2,j2) printf("%0.2lf\n",var_Qimk01(i1,j1,i2,j2))
			#else
				#define S0(i1,j1,i2,j2) printf("Qimk01(%ld,%ld,%ld,%ld)=\t",(long) i1,(long) j1,(long) i2,(long) j2);printf("%0.6lf\n",var_Qimk01(i1,j1,i2,j2))
			#endif
			/*for(unsigned int l1 = 1; l1 <= N; l1++){
		for(unsigned int l2 = 1; l2 <= M; l2++)
		{
			
			for(int i1 = 0; (unsigned int)i1 <= N - l1; i1++){
				for(unsigned int i2 = 0; i2 <= M - l2; i2++)
				{
					int j1 = i1 + l1 - 1;
					int j2 = i2 + l2 - 1;
					
						S0((i1),(j1),(i2),(j2));
}}}}*/
			#undef S0
		}
		{
			#ifdef NO_PROMPT
				#define S0(i1,j1,i2,j2) printf("%0.2lf\n",var_Qimk11(i1,j1,i2,j2))
			#else
				#define S0(i1,j1,i2,j2) printf("Qimk11(%ld,%ld,%ld,%ld)=\t",(long) i1,(long) j1,(long) i2,(long) j2);printf("%0.6lf\n",var_Qimk11(i1,j1,i2,j2))
			#endif
			/*for(unsigned int l1 = 1; l1 <= N; l1++){
		for(unsigned int l2 = 1; l2 <= M; l2++)
		{
			
			for(int i1 = 0; (unsigned int)i1 <= N - l1; i1++){
				for(unsigned int i2 = 0; i2 <= M - l2; i2++)
				{
					int j1 = i1 + l1 - 1;
					int j2 = i2 + l2 - 1;
					
						S0((i1),(j1),(i2),(j2));
}}}}*/
			#undef S0
		}
		{
			#ifdef NO_PROMPT
				#define S0(i1,j1,i2,j2) printf("%0.2lf\n",var_Qimk20(i1,j1,i2,j2))
			#else
				#define S0(i1,j1,i2,j2) printf("Qimk20(%ld,%ld,%ld,%ld)=\t",(long) i1,(long) j1,(long) i2,(long) j2);printf("%0.6lf\n",var_Qimk20(i1,j1,i2,j2))
			#endif
			/*for(unsigned int l1 = 1; l1 <= N; l1++){
		for(unsigned int l2 = 1; l2 <= M; l2++)
		{
			
			for(int i1 = 0; (unsigned int)i1 <= N - l1; i1++){
				for(unsigned int i2 = 0; i2 <= M - l2; i2++)
				{
					int j1 = i1 + l1 - 1;
					int j2 = i2 + l2 - 1;
					
						S0((i1),(j1),(i2),(j2));
}}}}*/
			#undef S0
		}
		{
			#ifdef NO_PROMPT
				#define S0(i1,j1,i2,j2) printf("%0.2lf\n",var_Qimk21(i1,j1,i2,j2))
			#else
				#define S0(i1,j1,i2,j2) printf("Qimk21(%ld,%ld,%ld,%ld)=\t",(long) i1,(long) j1,(long) i2,(long) j2);printf("%0.6lf\n",var_Qimk21(i1,j1,i2,j2))
			#endif
			/*for(unsigned int l1 = 1; l1 <= N; l1++){
		for(unsigned int l2 = 1; l2 <= M; l2++)
		{
			
			for(int i1 = 0; (unsigned int)i1 <= N - l1; i1++){
				for(unsigned int i2 = 0; i2 <= M - l2; i2++)
				{
					int j1 = i1 + l1 - 1;
					int j2 = i2 + l2 - 1;
					
						S0((i1),(j1),(i2),(j2));
}}}}*/
			#undef S0
		}
		{
			#ifdef NO_PROMPT
				#define S0(i1,j1,i2,j2) printf("%0.2lf\n",var_Qikm10(i1,j1,i2,j2))
			#else
				#define S0(i1,j1,i2,j2) printf("Qikm10(%ld,%ld,%ld,%ld)=\t",(long) i1,(long) j1,(long) i2,(long) j2);printf("%0.6lf\n",var_Qikm10(i1,j1,i2,j2))
			#endif
			/*for(unsigned int l1 = 1; l1 <= N; l1++){
		for(unsigned int l2 = 1; l2 <= M; l2++)
		{
			
			for(int i1 = 0; (unsigned int)i1 <= N - l1; i1++){
				for(unsigned int i2 = 0; i2 <= M - l2; i2++)
				{
					int j1 = i1 + l1 - 1;
					int j2 = i2 + l2 - 1;
					
						S0((i1),(j1),(i2),(j2));
}}}}*/
			#undef S0
		}
		{
			#ifdef NO_PROMPT
				#define S0(i1,j1,i2,j2) printf("%0.2lf\n",var_Qikm11(i1,j1,i2,j2))
			#else
				#define S0(i1,j1,i2,j2) printf("Qikm11(%ld,%ld,%ld,%ld)=\t",(long) i1,(long) j1,(long) i2,(long) j2);printf("%0.6lf\n",var_Qikm11(i1,j1,i2,j2))
			#endif
			/*for(unsigned int l1 = 1; l1 <= N; l1++){
		for(unsigned int l2 = 1; l2 <= M; l2++)
		{
			
			for(int i1 = 0; (unsigned int)i1 <= N - l1; i1++){
				for(unsigned int i2 = 0; i2 <= M - l2; i2++)
				{
					int j1 = i1 + l1 - 1;
					int j2 = i2 + l2 - 1;
					
						S0((i1),(j1),(i2),(j2));
}}}}*/
			#undef S0
		}
		{
			#ifdef NO_PROMPT
				#define S0(i1,j1,i2,j2) printf("%0.2lf\n",var_Qikm02(i1,j1,i2,j2))
			#else
				#define S0(i1,j1,i2,j2) printf("Qikm02(%ld,%ld,%ld,%ld)=\t",(long) i1,(long) j1,(long) i2,(long) j2);printf("%0.6lf\n",var_Qikm02(i1,j1,i2,j2))
			#endif
			/*for(unsigned int l1 = 1; l1 <= N; l1++){
		for(unsigned int l2 = 1; l2 <= M; l2++)
		{
			
			for(int i1 = 0; (unsigned int)i1 <= N - l1; i1++){
				for(unsigned int i2 = 0; i2 <= M - l2; i2++)
				{
					int j1 = i1 + l1 - 1;
					int j2 = i2 + l2 - 1;
					
						S0((i1),(j1),(i2),(j2));
}}}}*/
			#undef S0
		}
		{
			#ifdef NO_PROMPT
				#define S0(i1,j1,i2,j2) printf("%0.2lf\n",var_Qikm12(i1,j1,i2,j2))
			#else
				#define S0(i1,j1,i2,j2) printf("Qikm12(%ld,%ld,%ld,%ld)=\t",(long) i1,(long) j1,(long) i2,(long) j2);printf("%0.6lf\n",var_Qikm12(i1,j1,i2,j2))
			#endif
			/*for(unsigned int l1 = 1; l1 <= N; l1++){
		for(unsigned int l2 = 1; l2 <= M; l2++)
		{
			
			for(int i1 = 0; (unsigned int)i1 <= N - l1; i1++){
				for(unsigned int i2 = 0; i2 <= M - l2; i2++)
				{
					int j1 = i1 + l1 - 1;
					int j2 = i2 + l2 - 1;
					
						S0((i1),(j1),(i2),(j2));
}}}}*/
			#undef S0
		}
		{
			#ifdef NO_PROMPT
				#define S0(i1,j1,i2,j2) printf("%0.2lf\n",var_Qikk01(i1,j1,i2,j2))
			#else
				#define S0(i1,j1,i2,j2) printf("Qikk01(%ld,%ld,%ld,%ld)=\t",(long) i1,(long) j1,(long) i2,(long) j2);printf("%0.6lf\n",var_Qikk01(i1,j1,i2,j2))
			#endif
			/*for(unsigned int l1 = 1; l1 <= N; l1++){
		for(unsigned int l2 = 1; l2 <= M; l2++)
		{
			
			for(int i1 = 0; (unsigned int)i1 <= N - l1; i1++){
				for(unsigned int i2 = 0; i2 <= M - l2; i2++)
				{
					int j1 = i1 + l1 - 1;
					int j2 = i2 + l2 - 1;
					
						S0((i1),(j1),(i2),(j2));
}}}}*/
			#undef S0
		}
		{
			#ifdef NO_PROMPT
				#define S0(i1,j1,i2,j2) printf("%0.2lf\n",var_Qikk10(i1,j1,i2,j2))
			#else
				#define S0(i1,j1,i2,j2) printf("Qikk10(%ld,%ld,%ld,%ld)=\t",(long) i1,(long) j1,(long) i2,(long) j2);printf("%0.6lf\n",var_Qikk10(i1,j1,i2,j2))
			#endif
			/*for(unsigned int l1 = 1; l1 <= N; l1++){
		for(unsigned int l2 = 1; l2 <= M; l2++)
		{
			
			for(int i1 = 0; (unsigned int)i1 <= N - l1; i1++){
				for(unsigned int i2 = 0; i2 <= M - l2; i2++)
				{
					int j1 = i1 + l1 - 1;
					int j2 = i2 + l2 - 1;
					
						S0((i1),(j1),(i2),(j2));
}}}}*/
			#undef S0
		}
		{
			#ifdef NO_PROMPT
				#define S0(i1,j1,i2,j2) printf("%0.2lf\n",var_Qikk11(i1,j1,i2,j2))
			#else
				#define S0(i1,j1,i2,j2) printf("Qikk11(%ld,%ld,%ld,%ld)=\t",(long) i1,(long) j1,(long) i2,(long) j2);printf("%0.6lf\n",var_Qikk11(i1,j1,i2,j2))
			#endif
			/*for(unsigned int l1 = 1; l1 <= N; l1++){
		for(unsigned int l2 = 1; l2 <= M; l2++)
		{
			
			for(int i1 = 0; (unsigned int)i1 <= N - l1; i1++){
				for(unsigned int i2 = 0; i2 <= M - l2; i2++)
				{
					int j1 = i1 + l1 - 1;
					int j2 = i2 + l2 - 1;
					
						S0((i1),(j1),(i2),(j2));
}}}}*/
			#undef S0
		}
		{
			#ifdef NO_PROMPT
				#define S0(i1,j1,i2,j2) printf("%0.2lf\n",var_Qiann01(i1,j1,i2,j2))
			#else
				#define S0(i1,j1,i2,j2) printf("Qiann01(%ld,%ld,%ld,%ld)=\t",(long) i1,(long) j1,(long) i2,(long) j2);printf("%0.6lf\n",var_Qiann01(i1,j1,i2,j2))
			#endif
			/*for(unsigned int l1 = 1; l1 <= N; l1++){
		for(unsigned int l2 = 1; l2 <= M; l2++)
		{
			
			for(int i1 = 0; (unsigned int)i1 <= N - l1; i1++){
				for(unsigned int i2 = 0; i2 <= M - l2; i2++)
				{
					int j1 = i1 + l1 - 1;
					int j2 = i2 + l2 - 1;
					
						S0((i1),(j1),(i2),(j2));
}}}}*/
			#undef S0
		}
		{
			#ifdef NO_PROMPT
				#define S0(i1,j1,i2,j2) printf("%0.2lf\n",var_Qiann02(i1,j1,i2,j2))
			#else
				#define S0(i1,j1,i2,j2) printf("Qiann02(%ld,%ld,%ld,%ld)=\t",(long) i1,(long) j1,(long) i2,(long) j2);printf("%0.6lf\n",var_Qiann02(i1,j1,i2,j2))
			#endif
			/*for(unsigned int l1 = 1; l1 <= N; l1++){
		for(unsigned int l2 = 1; l2 <= M; l2++)
		{
			
			for(int i1 = 0; (unsigned int)i1 <= N - l1; i1++){
				for(unsigned int i2 = 0; i2 <= M - l2; i2++)
				{
					int j1 = i1 + l1 - 1;
					int j2 = i2 + l2 - 1;
					
						S0((i1),(j1),(i2),(j2));
}}}}*/
			#undef S0
		}
		{
			#ifdef NO_PROMPT
				#define S0(i1,j1,i2,j2) printf("%0.2lf\n",var_Qiann10(i1,j1,i2,j2))
			#else
				#define S0(i1,j1,i2,j2) printf("Qiann10(%ld,%ld,%ld,%ld)=\t",(long) i1,(long) j1,(long) i2,(long) j2);printf("%0.6lf\n",var_Qiann10(i1,j1,i2,j2))
			#endif
			/*for(unsigned int l1 = 1; l1 <= N; l1++){
		for(unsigned int l2 = 1; l2 <= M; l2++)
		{
			
			for(int i1 = 0; (unsigned int)i1 <= N - l1; i1++){
				for(unsigned int i2 = 0; i2 <= M - l2; i2++)
				{
					int j1 = i1 + l1 - 1;
					int j2 = i2 + l2 - 1;
					
						S0((i1),(j1),(i2),(j2));
}}}}*/
			#undef S0
		}
		{
			#ifdef NO_PROMPT
				#define S0(i1,j1,i2,j2) printf("%0.2lf\n",var_Qiann11(i1,j1,i2,j2))
			#else
				#define S0(i1,j1,i2,j2) printf("Qiann11(%ld,%ld,%ld,%ld)=\t",(long) i1,(long) j1,(long) i2,(long) j2);printf("%0.6lf\n",var_Qiann11(i1,j1,i2,j2))
			#endif
			/*for(unsigned int l1 = 1; l1 <= N; l1++){
		for(unsigned int l2 = 1; l2 <= M; l2++)
		{
			
			for(int i1 = 0; (unsigned int)i1 <= N - l1; i1++){
				for(unsigned int i2 = 0; i2 <= M - l2; i2++)
				{
					int j1 = i1 + l1 - 1;
					int j2 = i2 + l2 - 1;
					
						S0((i1),(j1),(i2),(j2));
}}}}*/
			#undef S0
		}
		{
			#ifdef NO_PROMPT
				#define S0(i1,j1,i2,j2) printf("%0.2lf\n",var_Qiann12(i1,j1,i2,j2))
			#else
				#define S0(i1,j1,i2,j2) printf("Qiann12(%ld,%ld,%ld,%ld)=\t",(long) i1,(long) j1,(long) i2,(long) j2);printf("%0.6lf\n",var_Qiann12(i1,j1,i2,j2))
			#endif
			/*for(unsigned int l1 = 1; l1 <= N; l1++){
		for(unsigned int l2 = 1; l2 <= M; l2++)
		{
			
			for(int i1 = 0; (unsigned int)i1 <= N - l1; i1++){
				for(unsigned int i2 = 0; i2 <= M - l2; i2++)
				{
					int j1 = i1 + l1 - 1;
					int j2 = i2 + l2 - 1;
					
						S0((i1),(j1),(i2),(j2));
}}}}*/
			#undef S0
		}
		{
			#ifdef NO_PROMPT
				#define S0(i1,j1,i2,j2) printf("%0.2lf\n",var_Qiann20(i1,j1,i2,j2))
			#else
				#define S0(i1,j1,i2,j2) printf("Qiann20(%ld,%ld,%ld,%ld)=\t",(long) i1,(long) j1,(long) i2,(long) j2);printf("%0.6lf\n",var_Qiann20(i1,j1,i2,j2))
			#endif
			/*for(unsigned int l1 = 1; l1 <= N; l1++){
		for(unsigned int l2 = 1; l2 <= M; l2++)
		{
			
			for(int i1 = 0; (unsigned int)i1 <= N - l1; i1++){
				for(unsigned int i2 = 0; i2 <= M - l2; i2++)
				{
					int j1 = i1 + l1 - 1;
					int j2 = i2 + l2 - 1;
					
						S0((i1),(j1),(i2),(j2));
}}}}*/
			#undef S0
		}
		{
			#ifdef NO_PROMPT
				#define S0(i1,j1,i2,j2) printf("%0.2lf\n",var_Qiann21(i1,j1,i2,j2))
			#else
				#define S0(i1,j1,i2,j2) printf("Qiann21(%ld,%ld,%ld,%ld)=\t",(long) i1,(long) j1,(long) i2,(long) j2);printf("%0.6lf\n",var_Qiann21(i1,j1,i2,j2))
			#endif
			/*for(unsigned int l1 = 1; l1 <= N; l1++){
		for(unsigned int l2 = 1; l2 <= M; l2++)
		{
			
			for(int i1 = 0; (unsigned int)i1 <= N - l1; i1++){
				for(unsigned int i2 = 0; i2 <= M - l2; i2++)
				{
					int j1 = i1 + l1 - 1;
					int j2 = i2 + l2 - 1;
					
						S0((i1),(j1),(i2),(j2));
}}}}*/
			#undef S0
		}
		{
			#ifdef NO_PROMPT
				#define S0(i1,j1,i2,j2) printf("%0.2lf\n",var_Qiann22(i1,j1,i2,j2))
			#else
				#define S0(i1,j1,i2,j2) printf("Qiann22(%ld,%ld,%ld,%ld)=\t",(long) i1,(long) j1,(long) i2,(long) j2);printf("%0.6lf\n",var_Qiann22(i1,j1,i2,j2))
			#endif
			/*for(unsigned int l1 = 1; l1 <= N; l1++){
		for(unsigned int l2 = 1; l2 <= M; l2++)
		{
			
			for(int i1 = 0; (unsigned int)i1 <= N - l1; i1++){
				for(unsigned int i2 = 0; i2 <= M - l2; i2++)
				{
					int j1 = i1 + l1 - 1;
					int j2 = i2 + l2 - 1;
					
						S0((i1),(j1),(i2),(j2));
}}}}*/
			#undef S0
		}
		{
			#ifdef NO_PROMPT
				#define S0(i1,j1,i2,j2) printf("%0.2lf\n",var_Qiand01(i1,j1,i2,j2))
			#else
				#define S0(i1,j1,i2,j2) printf("Qiand01(%ld,%ld,%ld,%ld)=\t",(long) i1,(long) j1,(long) i2,(long) j2);printf("%0.6lf\n",var_Qiand01(i1,j1,i2,j2))
			#endif
			/*for(unsigned int l1 = 1; l1 <= N; l1++){
		for(unsigned int l2 = 1; l2 <= M; l2++)
		{
			
			for(int i1 = 0; (unsigned int)i1 <= N - l1; i1++){
				for(unsigned int i2 = 0; i2 <= M - l2; i2++)
				{
					int j1 = i1 + l1 - 1;
					int j2 = i2 + l2 - 1;
					
						S0((i1),(j1),(i2),(j2));
}}}}*/
			#undef S0
		}
		{
			#ifdef NO_PROMPT
				#define S0(i1,j1,i2,j2) printf("%0.2lf\n",var_Qiand10(i1,j1,i2,j2))
			#else
				#define S0(i1,j1,i2,j2) printf("Qiand10(%ld,%ld,%ld,%ld)=\t",(long) i1,(long) j1,(long) i2,(long) j2);printf("%0.6lf\n",var_Qiand10(i1,j1,i2,j2))
			#endif
			/*for(unsigned int l1 = 1; l1 <= N; l1++){
		for(unsigned int l2 = 1; l2 <= M; l2++)
		{
			
			for(int i1 = 0; (unsigned int)i1 <= N - l1; i1++){
				for(unsigned int i2 = 0; i2 <= M - l2; i2++)
				{
					int j1 = i1 + l1 - 1;
					int j2 = i2 + l2 - 1;
					
						S0((i1),(j1),(i2),(j2));
}}}}*/
			#undef S0
		}
		{
			#ifdef NO_PROMPT
				#define S0(i1,j1,i2,j2) printf("%0.2lf\n",var_Qiand11(i1,j1,i2,j2))
			#else
				#define S0(i1,j1,i2,j2) printf("Qiand11(%ld,%ld,%ld,%ld)=\t",(long) i1,(long) j1,(long) i2,(long) j2);printf("%0.6lf\n",var_Qiand11(i1,j1,i2,j2))
			#endif
			/*for(unsigned int l1 = 1; l1 <= N; l1++){
		for(unsigned int l2 = 1; l2 <= M; l2++)
		{
			
			for(int i1 = 0; (unsigned int)i1 <= N - l1; i1++){
				for(unsigned int i2 = 0; i2 <= M - l2; i2++)
				{
					int j1 = i1 + l1 - 1;
					int j2 = i2 + l2 - 1;
					
						S0((i1),(j1),(i2),(j2));
}}}}*/
			#undef S0
		}
		{
			#ifdef NO_PROMPT
				#define S0(i1,j1,i2,j2) printf("%0.2lf\n",var_Qiand20(i1,j1,i2,j2))
			#else
				#define S0(i1,j1,i2,j2) printf("Qiand20(%ld,%ld,%ld,%ld)=\t",(long) i1,(long) j1,(long) i2,(long) j2);printf("%0.6lf\n",var_Qiand20(i1,j1,i2,j2))
			#endif
			/*for(unsigned int l1 = 1; l1 <= N; l1++){
		for(unsigned int l2 = 1; l2 <= M; l2++)
		{
			
			for(int i1 = 0; (unsigned int)i1 <= N - l1; i1++){
				for(unsigned int i2 = 0; i2 <= M - l2; i2++)
				{
					int j1 = i1 + l1 - 1;
					int j2 = i2 + l2 - 1;
					
						S0((i1),(j1),(i2),(j2));
}}}}*/
			#undef S0
		}
		{
			#ifdef NO_PROMPT
				#define S0(i1,j1,i2,j2) printf("%0.2lf\n",var_Qiand21(i1,j1,i2,j2))
			#else
				#define S0(i1,j1,i2,j2) printf("Qiand21(%ld,%ld,%ld,%ld)=\t",(long) i1,(long) j1,(long) i2,(long) j2);printf("%0.6lf\n",var_Qiand21(i1,j1,i2,j2))
			#endif
			/*for(unsigned int l1 = 1; l1 <= N; l1++){
		for(unsigned int l2 = 1; l2 <= M; l2++)
		{
			
			for(int i1 = 0; (unsigned int)i1 <= N - l1; i1++){
				for(unsigned int i2 = 0; i2 <= M - l2; i2++)
				{
					int j1 = i1 + l1 - 1;
					int j2 = i2 + l2 - 1;
					
						S0((i1),(j1),(i2),(j2));
}}}}*/
			#undef S0
		}
		{
			#ifdef NO_PROMPT
				#define S0(i1,j1,i2,j2) printf("%0.2lf\n",var_Qiadn01(i1,j1,i2,j2))
			#else
				#define S0(i1,j1,i2,j2) printf("Qiadn01(%ld,%ld,%ld,%ld)=\t",(long) i1,(long) j1,(long) i2,(long) j2);printf("%0.6lf\n",var_Qiadn01(i1,j1,i2,j2))
			#endif
			/*for(unsigned int l1 = 1; l1 <= N; l1++){
		for(unsigned int l2 = 1; l2 <= M; l2++)
		{
			
			for(int i1 = 0; (unsigned int)i1 <= N - l1; i1++){
				for(unsigned int i2 = 0; i2 <= M - l2; i2++)
				{
					int j1 = i1 + l1 - 1;
					int j2 = i2 + l2 - 1;
					
						S0((i1),(j1),(i2),(j2));
}}}}*/
			#undef S0
		}
		{
			#ifdef NO_PROMPT
				#define S0(i1,j1,i2,j2) printf("%0.2lf\n",var_Qiadn02(i1,j1,i2,j2))
			#else
				#define S0(i1,j1,i2,j2) printf("Qiadn02(%ld,%ld,%ld,%ld)=\t",(long) i1,(long) j1,(long) i2,(long) j2);printf("%0.6lf\n",var_Qiadn02(i1,j1,i2,j2))
			#endif
			/*for(unsigned int l1 = 1; l1 <= N; l1++){
		for(unsigned int l2 = 1; l2 <= M; l2++)
		{
			
			for(int i1 = 0; (unsigned int)i1 <= N - l1; i1++){
				for(unsigned int i2 = 0; i2 <= M - l2; i2++)
				{
					int j1 = i1 + l1 - 1;
					int j2 = i2 + l2 - 1;
					
						S0((i1),(j1),(i2),(j2));
}}}}*/
			#undef S0
		}
		{
			#ifdef NO_PROMPT
				#define S0(i1,j1,i2,j2) printf("%0.2lf\n",var_Qiadn10(i1,j1,i2,j2))
			#else
				#define S0(i1,j1,i2,j2) printf("Qiadn10(%ld,%ld,%ld,%ld)=\t",(long) i1,(long) j1,(long) i2,(long) j2);printf("%0.6lf\n",var_Qiadn10(i1,j1,i2,j2))
			#endif
			/*for(unsigned int l1 = 1; l1 <= N; l1++){
		for(unsigned int l2 = 1; l2 <= M; l2++)
		{
			
			for(int i1 = 0; (unsigned int)i1 <= N - l1; i1++){
				for(unsigned int i2 = 0; i2 <= M - l2; i2++)
				{
					int j1 = i1 + l1 - 1;
					int j2 = i2 + l2 - 1;
					
						S0((i1),(j1),(i2),(j2));
}}}}*/
			#undef S0
		}
		{
			#ifdef NO_PROMPT
				#define S0(i1,j1,i2,j2) printf("%0.2lf\n",var_Qiadn11(i1,j1,i2,j2))
			#else
				#define S0(i1,j1,i2,j2) printf("Qiadn11(%ld,%ld,%ld,%ld)=\t",(long) i1,(long) j1,(long) i2,(long) j2);printf("%0.6lf\n",var_Qiadn11(i1,j1,i2,j2))
			#endif
			/*for(unsigned int l1 = 1; l1 <= N; l1++){
		for(unsigned int l2 = 1; l2 <= M; l2++)
		{
			
			for(int i1 = 0; (unsigned int)i1 <= N - l1; i1++){
				for(unsigned int i2 = 0; i2 <= M - l2; i2++)
				{
					int j1 = i1 + l1 - 1;
					int j2 = i2 + l2 - 1;
					
						S0((i1),(j1),(i2),(j2));
}}}}*/
			#undef S0
		}
		{
			#ifdef NO_PROMPT
				#define S0(i1,j1,i2,j2) printf("%0.2lf\n",var_Qiadn12(i1,j1,i2,j2))
			#else
				#define S0(i1,j1,i2,j2) printf("Qiadn12(%ld,%ld,%ld,%ld)=\t",(long) i1,(long) j1,(long) i2,(long) j2);printf("%0.6lf\n",var_Qiadn12(i1,j1,i2,j2))
			#endif
			/*for(unsigned int l1 = 1; l1 <= N; l1++){
		for(unsigned int l2 = 1; l2 <= M; l2++)
		{
			
			for(int i1 = 0; (unsigned int)i1 <= N - l1; i1++){
				for(unsigned int i2 = 0; i2 <= M - l2; i2++)
				{
					int j1 = i1 + l1 - 1;
					int j2 = i2 + l2 - 1;
					
						S0((i1),(j1),(i2),(j2));
}}}}*/
			#undef S0
		}
		{
			#ifdef NO_PROMPT
				#define S0(i1,j1,i2,j2) printf("%0.2lf\n",var_Qiadd01(i1,j1,i2,j2))
			#else
				#define S0(i1,j1,i2,j2) printf("Qiadd01(%ld,%ld,%ld,%ld)=\t",(long) i1,(long) j1,(long) i2,(long) j2);printf("%0.6lf\n",var_Qiadd01(i1,j1,i2,j2))
			#endif
			/*for(unsigned int l1 = 1; l1 <= N; l1++){
		for(unsigned int l2 = 1; l2 <= M; l2++)
		{
			
			for(int i1 = 0; (unsigned int)i1 <= N - l1; i1++){
				for(unsigned int i2 = 0; i2 <= M - l2; i2++)
				{
					int j1 = i1 + l1 - 1;
					int j2 = i2 + l2 - 1;
					
						S0((i1),(j1),(i2),(j2));
}}}}*/
			#undef S0
		}
		{
			#ifdef NO_PROMPT
				#define S0(i1,j1,i2,j2) printf("%0.2lf\n",var_Qiadd10(i1,j1,i2,j2))
			#else
				#define S0(i1,j1,i2,j2) printf("Qiadd10(%ld,%ld,%ld,%ld)=\t",(long) i1,(long) j1,(long) i2,(long) j2);printf("%0.6lf\n",var_Qiadd10(i1,j1,i2,j2))
			#endif
			/*for(unsigned int l1 = 1; l1 <= N; l1++){
		for(unsigned int l2 = 1; l2 <= M; l2++)
		{
			
			for(int i1 = 0; (unsigned int)i1 <= N - l1; i1++){
				for(unsigned int i2 = 0; i2 <= M - l2; i2++)
				{
					int j1 = i1 + l1 - 1;
					int j2 = i2 + l2 - 1;
					
						S0((i1),(j1),(i2),(j2));
}}}}*/
			#undef S0
		}
		{
			#ifdef NO_PROMPT
				#define S0(i1,j1,i2,j2) printf("%0.2lf\n",var_Qiadd11(i1,j1,i2,j2))
			#else
				#define S0(i1,j1,i2,j2) printf("Qiadd11(%ld,%ld,%ld,%ld)=\t",(long) i1,(long) j1,(long) i2,(long) j2);printf("%0.6lf\n",var_Qiadd11(i1,j1,i2,j2))
			#endif
			/*for(unsigned int l1 = 1; l1 <= N; l1++){
		for(unsigned int l2 = 1; l2 <= M; l2++)
		{
			
			for(int i1 = 0; (unsigned int)i1 <= N - l1; i1++){
				for(unsigned int i2 = 0; i2 <= M - l2; i2++)
				{
					int j1 = i1 + l1 - 1;
					int j2 = i2 + l2 - 1;
					
						S0((i1),(j1),(i2),(j2));
}}}}*/
			#undef S0
		}
		{
			#ifdef NO_PROMPT
				#define S0(i1,j1,i2,j2) printf("%0.2lf\n",var_Qiar01(i1,j1,i2,j2))
			#else
				#define S0(i1,j1,i2,j2) printf("Qiar01(%ld,%ld,%ld,%ld)=\t",(long) i1,(long) j1,(long) i2,(long) j2);printf("%0.6lf\n",var_Qiar01(i1,j1,i2,j2))
			#endif

			/*for(unsigned int l1 = 1; l1 <= N; l1++){
		for(unsigned int l2 = 1; l2 <= M; l2++)
		{
			
			for(int i1 = 0; (unsigned int)i1 <= N - l1; i1++){
				for(unsigned int i2 = 0; i2 <= M - l2; i2++)
				{
					int j1 = i1 + l1 - 1;
					int j2 = i2 + l2 - 1;
					if(energy->base_pair(seq01[j1], seq1[j2])){
						S0((i1),(j1),(i2),(j2));}
}}}}*/
			#undef S0
		}
		{
			#ifdef NO_PROMPT
				#define S0(i1,j1,i2,j2) printf("%0.2lf\n",var_Qiar10(i1,j1,i2,j2))
			#else
				#define S0(i1,j1,i2,j2) printf("Qiar10(%ld,%ld,%ld,%ld)=\t",(long) i1,(long) j1,(long) i2,(long) j2);printf("%0.6lf\n",var_Qiar10(i1,j1,i2,j2))
			#endif
			/*for(unsigned int l1 = 1; l1 <= N; l1++){
		for(unsigned int l2 = 1; l2 <= M; l2++)
		{
			
			for(int i1 = 0; (unsigned int)i1 <= N - l1; i1++){
				for(unsigned int i2 = 0; i2 <= M - l2; i2++)
				{
					int j1 = i1 + l1 - 1;
					int j2 = i2 + l2 - 1;
					if(energy->base_pair(seq01[j1], seq1[j2])){
						S0((i1),(j1),(i2),(j2));}
}}}}*/
			#undef S0
		}
		{
			#ifdef NO_PROMPT
				#define S0(i1,j1,i2,j2) printf("%0.2lf\n",var_Qiar11(i1,j1,i2,j2))
			#else
				#define S0(i1,j1,i2,j2) printf("Qiar11(%ld,%ld,%ld,%ld)=\t",(long) i1,(long) j1,(long) i2,(long) j2);printf("%0.6lf\n",var_Qiar11(i1,j1,i2,j2))
			#endif
			/*for(unsigned int l1 = 1; l1 <= N; l1++){
		for(unsigned int l2 = 1; l2 <= M; l2++)
		{
			
			for(int i1 = 0; (unsigned int)i1 <= N - l1; i1++){
				for(unsigned int i2 = 0; i2 <= M - l2; i2++)
				{
					int j1 = i1 + l1 - 1;
					int j2 = i2 + l2 - 1;
					if(energy->base_pair(seq01[j1], seq1[j2])){
						S0((i1),(j1),(i2),(j2));}
}}}}*/
			#undef S0
		}
		{
			#ifdef NO_PROMPT
				#define S0(i1,j1,i2,j2) printf("%0.2lf\n",var_Qilr01(i1,j1,i2,j2))
			#else
				#define S0(i1,j1,i2,j2) printf("Qilr01(%ld,%ld,%ld,%ld)=\t",(long) i1,(long) j1,(long) i2,(long) j2);printf("%0.6lf\n",var_Qilr01(i1,j1,i2,j2))
			#endif
			/*for(unsigned int l1 = 1; l1 <= N; l1++){
		for(unsigned int l2 = 1; l2 <= M; l2++)
		{
			
			for(int i1 = 0; (unsigned int)i1 <= N - l1; i1++){
				for(unsigned int i2 = 0; i2 <= M - l2; i2++)
				{
					int j1 = i1 + l1 - 1;
					int j2 = i2 + l2 - 1;
					if(energy->base_pair(seq01[j1], seq1[j2])){
						S0((i1),(j1),(i2),(j2));}
}}}}*/
			#undef S0
		}
		{
			#ifdef NO_PROMPT
				#define S0(i1,j1,i2,j2) printf("%0.2lf\n",var_Qilr10(i1,j1,i2,j2))
			#else
				#define S0(i1,j1,i2,j2) printf("Qilr10(%ld,%ld,%ld,%ld)=\t",(long) i1,(long) j1,(long) i2,(long) j2);printf("%0.6lf\n",var_Qilr10(i1,j1,i2,j2))
			#endif
			/*for(unsigned int l1 = 1; l1 <= N; l1++){
		for(unsigned int l2 = 1; l2 <= M; l2++)
		{
			
			for(int i1 = 0; (unsigned int)i1 <= N - l1; i1++){
				for(unsigned int i2 = 0; i2 <= M - l2; i2++)
				{
					int j1 = i1 + l1 - 1;
					int j2 = i2 + l2 - 1;
					if(energy->base_pair(seq01[j1], seq1[j2])){
						S0((i1),(j1),(i2),(j2));}
}}}}*/
			#undef S0
		}
		{
			#ifdef NO_PROMPT
				#define S0(i1,j1,i2,j2) printf("%0.2lf\n",var_Qilr11(i1,j1,i2,j2))
			#else
				#define S0(i1,j1,i2,j2) printf("Qilr11(%ld,%ld,%ld,%ld)=\t",(long) i1,(long) j1,(long) i2,(long) j2);printf("%0.6lf\n",var_Qilr11(i1,j1,i2,j2))
			#endif
			/*for(unsigned int l1 = 1; l1 <= N; l1++){
		for(unsigned int l2 = 1; l2 <= M; l2++)
		{
			
			for(int i1 = 0; (unsigned int)i1 <= N - l1; i1++){
				for(unsigned int i2 = 0; i2 <= M - l2; i2++)
				{
					int j1 = i1 + l1 - 1;
					int j2 = i2 + l2 - 1;
					if(energy->base_pair(seq01[j1], seq1[j2])){
						S0((i1),(j1),(i2),(j2));}
}}}}*/
			#undef S0
		}
		{
			#ifdef NO_PROMPT
				#define S0(i1,j1,i2,j2) printf("%0.2lf\n",var_Qir01(i1,j1,i2,j2))
			#else
				#define S0(i1,j1,i2,j2) printf("Qir01(%ld,%ld,%ld,%ld)=\t",(long) i1,(long) j1,(long) i2,(long) j2);printf("%0.6lf\n",var_Qir01(i1,j1,i2,j2))
			#endif
			/*for(unsigned int l1 = 1; l1 <= N; l1++){
		for(unsigned int l2 = 1; l2 <= M; l2++)
		{
			
			for(int i1 = 0; (unsigned int)i1 <= N - l1; i1++){
				for(unsigned int i2 = 0; i2 <= M - l2; i2++)
				{
					int j1 = i1 + l1 - 1;
					int j2 = i2 + l2 - 1;
					if(energy->base_pair(seq01[j1], seq1[j2])){
						S0((i1),(j1),(i2),(j2));}
}}}}*/
			#undef S0
		}
		{
			#ifdef NO_PROMPT
				#define S0(i1,j1,i2,j2) printf("%0.2lf\n",var_Qir10(i1,j1,i2,j2))
			#else
				#define S0(i1,j1,i2,j2) printf("Qir10(%ld,%ld,%ld,%ld)=\t",(long) i1,(long) j1,(long) i2,(long) j2);printf("%0.6lf\n",var_Qir10(i1,j1,i2,j2))
			#endif
			/*for(unsigned int l1 = 1; l1 <= N; l1++){
		for(unsigned int l2 = 1; l2 <= M; l2++)
		{
			
			for(int i1 = 0; (unsigned int)i1 <= N - l1; i1++){
				for(unsigned int i2 = 0; i2 <= M - l2; i2++)
				{
					int j1 = i1 + l1 - 1;
					int j2 = i2 + l2 - 1;
					if(energy->base_pair(seq01[j1], seq1[j2])){
						S0((i1),(j1),(i2),(j2));}
}}}}*/
			#undef S0
		}
		{
			#ifdef NO_PROMPT
				#define S0(i1,j1,i2,j2) printf("%0.2lf\n",var_Qir11(i1,j1,i2,j2))
			#else
				#define S0(i1,j1,i2,j2) printf("Qir11(%ld,%ld,%ld,%ld)=\t",(long) i1,(long) j1,(long) i2,(long) j2);printf("%0.6lf\n",var_Qir11(i1,j1,i2,j2))
			#endif
			/*for(unsigned int l1 = 1; l1 <= N; l1++){
		for(unsigned int l2 = 1; l2 <= M; l2++)
		{
			
			for(int i1 = 0; (unsigned int)i1 <= N - l1; i1++){
				for(unsigned int i2 = 0; i2 <= M - l2; i2++)
				{
					int j1 = i1 + l1 - 1;
					int j2 = i2 + l2 - 1;
					if(energy->base_pair(seq01[j1], seq1[j2])){
						S0((i1),(j1),(i2),(j2));}
}}}}*/
			#undef S0
		}
		{
			#ifdef NO_PROMPT
				#define S0(i1,j1,i2,j2) printf("%0.2lf\n",var_Qia(i1,j1,i2,j2))
			#else
				#define S0(i1,j1,i2,j2) printf("Qia(%ld,%ld,%ld,%ld)=\t",(long) i1,(long) j1,(long) i2,(long) j2);printf("%0.6lf\n",var_Qia(i1,j1,i2,j2))
			#endif
			/*for(unsigned int l1 = 1; l1 <= N; l1++){
		for(unsigned int l2 = 1; l2 <= M; l2++)
		{
			
			for(int i1 = 0; (unsigned int)i1 <= N - l1; i1++){
				for(unsigned int i2 = 0; i2 <= M - l2; i2++)
				{
					int j1 = i1 + l1 - 1;
					int j2 = i2 + l2 - 1;
					
						S0((i1),(j1),(i2),(j2));
}}}}*/
			#undef S0
		}
		{
			#ifdef NO_PROMPT
				#define S0(i1,j1,i2,j2) printf("%0.2lf\n",var_Qib00(i1,j1,i2,j2))
			#else
				#define S0(i1,j1,i2,j2) printf("Qib00(%ld,%ld,%ld,%ld)=\t",(long) i1,(long) j1,(long) i2,(long) j2);printf("%0.6lf\n",var_Qib00(i1,j1,i2,j2))
			#endif
			/*for(unsigned int l1 = 1; l1 <= N; l1++){
		for(unsigned int l2 = 1; l2 <= M; l2++)
		{
			
			for(int i1 = 0; (unsigned int)i1 <= N - l1; i1++){
				for(unsigned int i2 = 0; i2 <= M - l2; i2++)
				{
					int j1 = i1 + l1 - 1;
					int j2 = i2 + l2 - 1;
					
						S0((i1),(j1),(i2),(j2));
}}}}*/
			#undef S0
		}
		{
			#ifdef NO_PROMPT
				#define S0(i1,j1,i2,j2) printf("%0.2lf\n",var_Qib01(i1,j1,i2,j2))
			#else
				#define S0(i1,j1,i2,j2) printf("Qib01(%ld,%ld,%ld,%ld)=\t",(long) i1,(long) j1,(long) i2,(long) j2);printf("%0.6lf\n",var_Qib01(i1,j1,i2,j2))
			#endif
			/*for(unsigned int l1 = 1; l1 <= N; l1++){
		for(unsigned int l2 = 1; l2 <= M; l2++)
		{
			
			for(int i1 = 0; (unsigned int)i1 <= N - l1; i1++){
				for(unsigned int i2 = 0; i2 <= M - l2; i2++)
				{
					int j1 = i1 + l1 - 1;
					int j2 = i2 + l2 - 1;
					
						S0((i1),(j1),(i2),(j2));
}}}}*/
			#undef S0
		}
		{
			#ifdef NO_PROMPT
				#define S0(i1,j1,i2,j2) printf("%0.2lf\n",var_Qib10(i1,j1,i2,j2))
			#else
				#define S0(i1,j1,i2,j2) printf("Qib10(%ld,%ld,%ld,%ld)=\t",(long) i1,(long) j1,(long) i2,(long) j2);printf("%0.6lf\n",var_Qib10(i1,j1,i2,j2))
			#endif
			/*for(unsigned int l1 = 1; l1 <= N; l1++){
		for(unsigned int l2 = 1; l2 <= M; l2++)
		{
			
			for(int i1 = 0; (unsigned int)i1 <= N - l1; i1++){
				for(unsigned int i2 = 0; i2 <= M - l2; i2++)
				{
					int j1 = i1 + l1 - 1;
					int j2 = i2 + l2 - 1;
					
						S0((i1),(j1),(i2),(j2));
}}}}*/
			#undef S0
		}
		{
			#ifdef NO_PROMPT
				#define S0(i1,j1,i2,j2) printf("%0.2lf\n",var_Qib11(i1,j1,i2,j2))
			#else
				#define S0(i1,j1,i2,j2) printf("Qib11(%ld,%ld,%ld,%ld)=\t",(long) i1,(long) j1,(long) i2,(long) j2);printf("%0.6lf\n",var_Qib11(i1,j1,i2,j2))
			#endif
			/*for(unsigned int l1 = 1; l1 <= N; l1++){
		for(unsigned int l2 = 1; l2 <= M; l2++)
		{
			
			for(int i1 = 0; (unsigned int)i1 <= N - l1; i1++){
				for(unsigned int i2 = 0; i2 <= M - l2; i2++)
				{
					int j1 = i1 + l1 - 1;
					int j2 = i2 + l2 - 1;
					
						S0((i1),(j1),(i2),(j2));
}}}}*/
			#undef S0
		}
		{
			#ifdef NO_PROMPT
				#define S0(i1,j1,i2,j2) printf("%0.2lf\n",var_Qinn01(i1,j1,i2,j2))
			#else
				#define S0(i1,j1,i2,j2) printf("Qinn01(%ld,%ld,%ld,%ld)=\t",(long) i1,(long) j1,(long) i2,(long) j2);printf("%0.6lf\n",var_Qinn01(i1,j1,i2,j2))
			#endif
			/*for(unsigned int l1 = 1; l1 <= N; l1++){
		for(unsigned int l2 = 1; l2 <= M; l2++)
		{
			
			for(int i1 = 0; (unsigned int)i1 <= N - l1; i1++){
				for(unsigned int i2 = 0; i2 <= M - l2; i2++)
				{
					int j1 = i1 + l1 - 1;
					int j2 = i2 + l2 - 1;
					
						S0((i1),(j1),(i2),(j2));
}}}}*/
			#undef S0
		}
		{
			#ifdef NO_PROMPT
				#define S0(i1,j1,i2,j2) printf("%0.2lf\n",var_Qinn02(i1,j1,i2,j2))
			#else
				#define S0(i1,j1,i2,j2) printf("Qinn02(%ld,%ld,%ld,%ld)=\t",(long) i1,(long) j1,(long) i2,(long) j2);printf("%0.6lf\n",var_Qinn02(i1,j1,i2,j2))
			#endif
			/*for(unsigned int l1 = 1; l1 <= N; l1++){
		for(unsigned int l2 = 1; l2 <= M; l2++)
		{
			
			for(int i1 = 0; (unsigned int)i1 <= N - l1; i1++){
				for(unsigned int i2 = 0; i2 <= M - l2; i2++)
				{
					int j1 = i1 + l1 - 1;
					int j2 = i2 + l2 - 1;
					
						S0((i1),(j1),(i2),(j2));
}}}}*/
			#undef S0
		}
		{
			#ifdef NO_PROMPT
				#define S0(i1,j1,i2,j2) printf("%0.2lf\n",var_Qinn10(i1,j1,i2,j2))
			#else
				#define S0(i1,j1,i2,j2) printf("Qinn10(%ld,%ld,%ld,%ld)=\t",(long) i1,(long) j1,(long) i2,(long) j2);printf("%0.6lf\n",var_Qinn10(i1,j1,i2,j2))
			#endif
			/*for(unsigned int l1 = 1; l1 <= N; l1++){
		for(unsigned int l2 = 1; l2 <= M; l2++)
		{
			
			for(int i1 = 0; (unsigned int)i1 <= N - l1; i1++){
				for(unsigned int i2 = 0; i2 <= M - l2; i2++)
				{
					int j1 = i1 + l1 - 1;
					int j2 = i2 + l2 - 1;
					
						S0((i1),(j1),(i2),(j2));
}}}}*/
			#undef S0
		}
		{
			#ifdef NO_PROMPT
				#define S0(i1,j1,i2,j2) printf("%0.2lf\n",var_Qinn11(i1,j1,i2,j2))
			#else
				#define S0(i1,j1,i2,j2) printf("Qinn11(%ld,%ld,%ld,%ld)=\t",(long) i1,(long) j1,(long) i2,(long) j2);printf("%0.6lf\n",var_Qinn11(i1,j1,i2,j2))
			#endif
			/*for(unsigned int l1 = 1; l1 <= N; l1++){
		for(unsigned int l2 = 1; l2 <= M; l2++)
		{
			
			for(int i1 = 0; (unsigned int)i1 <= N - l1; i1++){
				for(unsigned int i2 = 0; i2 <= M - l2; i2++)
				{
					int j1 = i1 + l1 - 1;
					int j2 = i2 + l2 - 1;
					
						S0((i1),(j1),(i2),(j2));
}}}}*/
			#undef S0
		}
		{
			#ifdef NO_PROMPT
				#define S0(i1,j1,i2,j2) printf("%0.2lf\n",var_Qinn12(i1,j1,i2,j2))
			#else
				#define S0(i1,j1,i2,j2) printf("Qinn12(%ld,%ld,%ld,%ld)=\t",(long) i1,(long) j1,(long) i2,(long) j2);printf("%0.6lf\n",var_Qinn12(i1,j1,i2,j2))
			#endif
			/*for(unsigned int l1 = 1; l1 <= N; l1++){
		for(unsigned int l2 = 1; l2 <= M; l2++)
		{
			
			for(int i1 = 0; (unsigned int)i1 <= N - l1; i1++){
				for(unsigned int i2 = 0; i2 <= M - l2; i2++)
				{
					int j1 = i1 + l1 - 1;
					int j2 = i2 + l2 - 1;
					
						S0((i1),(j1),(i2),(j2));
}}}}*/
			#undef S0
		}
		{
			#ifdef NO_PROMPT
				#define S0(i1,j1,i2,j2) printf("%0.2lf\n",var_Qinn20(i1,j1,i2,j2))
			#else
				#define S0(i1,j1,i2,j2) printf("Qinn20(%ld,%ld,%ld,%ld)=\t",(long) i1,(long) j1,(long) i2,(long) j2);printf("%0.6lf\n",var_Qinn20(i1,j1,i2,j2))
			#endif
			/*for(unsigned int l1 = 1; l1 <= N; l1++){
		for(unsigned int l2 = 1; l2 <= M; l2++)
		{
			
			for(int i1 = 0; (unsigned int)i1 <= N - l1; i1++){
				for(unsigned int i2 = 0; i2 <= M - l2; i2++)
				{
					int j1 = i1 + l1 - 1;
					int j2 = i2 + l2 - 1;
					
						S0((i1),(j1),(i2),(j2));
}}}}*/
			#undef S0
		}
		{
			#ifdef NO_PROMPT
				#define S0(i1,j1,i2,j2) printf("%0.2lf\n",var_Qinn21(i1,j1,i2,j2))
			#else
				#define S0(i1,j1,i2,j2) printf("Qinn21(%ld,%ld,%ld,%ld)=\t",(long) i1,(long) j1,(long) i2,(long) j2);printf("%0.6lf\n",var_Qinn21(i1,j1,i2,j2))
			#endif
			/*for(unsigned int l1 = 1; l1 <= N; l1++){
		for(unsigned int l2 = 1; l2 <= M; l2++)
		{
			
			for(int i1 = 0; (unsigned int)i1 <= N - l1; i1++){
				for(unsigned int i2 = 0; i2 <= M - l2; i2++)
				{
					int j1 = i1 + l1 - 1;
					int j2 = i2 + l2 - 1;
					
						S0((i1),(j1),(i2),(j2));
}}}}*/
			#undef S0
		}
		{
			#ifdef NO_PROMPT
				#define S0(i1,j1,i2,j2) printf("%0.2lf\n",var_Qinn22(i1,j1,i2,j2))
			#else
				#define S0(i1,j1,i2,j2) printf("Qinn22(%ld,%ld,%ld,%ld)=\t",(long) i1,(long) j1,(long) i2,(long) j2);printf("%0.6lf\n",var_Qinn22(i1,j1,i2,j2))
			#endif
			/*for(unsigned int l1 = 1; l1 <= N; l1++){
		for(unsigned int l2 = 1; l2 <= M; l2++)
		{
			
			for(int i1 = 0; (unsigned int)i1 <= N - l1; i1++){
				for(unsigned int i2 = 0; i2 <= M - l2; i2++)
				{
					int j1 = i1 + l1 - 1;
					int j2 = i2 + l2 - 1;
					
						S0((i1),(j1),(i2),(j2));
}}}}*/
			#undef S0
		}
		{
			#ifdef NO_PROMPT
				#define S0(i1,j1,i2,j2) printf("%0.2lf\n",var_Qind01(i1,j1,i2,j2))
			#else
				#define S0(i1,j1,i2,j2) printf("Qind01(%ld,%ld,%ld,%ld)=\t",(long) i1,(long) j1,(long) i2,(long) j2);printf("%0.6lf\n",var_Qind01(i1,j1,i2,j2))
			#endif
			/*for(unsigned int l1 = 1; l1 <= N; l1++){
		for(unsigned int l2 = 1; l2 <= M; l2++)
		{
			
			for(int i1 = 0; (unsigned int)i1 <= N - l1; i1++){
				for(unsigned int i2 = 0; i2 <= M - l2; i2++)
				{
					int j1 = i1 + l1 - 1;
					int j2 = i2 + l2 - 1;
					
						S0((i1),(j1),(i2),(j2));
}}}}*/
			#undef S0
		}
		{
			#ifdef NO_PROMPT
				#define S0(i1,j1,i2,j2) printf("%0.2lf\n",var_Qind10(i1,j1,i2,j2))
			#else
				#define S0(i1,j1,i2,j2) printf("Qind10(%ld,%ld,%ld,%ld)=\t",(long) i1,(long) j1,(long) i2,(long) j2);printf("%0.6lf\n",var_Qind10(i1,j1,i2,j2))
			#endif
			/*for(unsigned int l1 = 1; l1 <= N; l1++){
		for(unsigned int l2 = 1; l2 <= M; l2++)
		{
			
			for(int i1 = 0; (unsigned int)i1 <= N - l1; i1++){
				for(unsigned int i2 = 0; i2 <= M - l2; i2++)
				{
					int j1 = i1 + l1 - 1;
					int j2 = i2 + l2 - 1;
					
						S0((i1),(j1),(i2),(j2));
}}}}*/
			#undef S0
		}
		{
			#ifdef NO_PROMPT
				#define S0(i1,j1,i2,j2) printf("%0.2lf\n",var_Qind11(i1,j1,i2,j2))
			#else
				#define S0(i1,j1,i2,j2) printf("Qind11(%ld,%ld,%ld,%ld)=\t",(long) i1,(long) j1,(long) i2,(long) j2);printf("%0.6lf\n",var_Qind11(i1,j1,i2,j2))
			#endif
			/*for(unsigned int l1 = 1; l1 <= N; l1++){
		for(unsigned int l2 = 1; l2 <= M; l2++)
		{
			
			for(int i1 = 0; (unsigned int)i1 <= N - l1; i1++){
				for(unsigned int i2 = 0; i2 <= M - l2; i2++)
				{
					int j1 = i1 + l1 - 1;
					int j2 = i2 + l2 - 1;
					
						S0((i1),(j1),(i2),(j2));
}}}}*/
			#undef S0
		}
		{
			#ifdef NO_PROMPT
				#define S0(i1,j1,i2,j2) printf("%0.2lf\n",var_Qind20(i1,j1,i2,j2))
			#else
				#define S0(i1,j1,i2,j2) printf("Qind20(%ld,%ld,%ld,%ld)=\t",(long) i1,(long) j1,(long) i2,(long) j2);printf("%0.6lf\n",var_Qind20(i1,j1,i2,j2))
			#endif
			/*for(unsigned int l1 = 1; l1 <= N; l1++){
		for(unsigned int l2 = 1; l2 <= M; l2++)
		{
			
			for(int i1 = 0; (unsigned int)i1 <= N - l1; i1++){
				for(unsigned int i2 = 0; i2 <= M - l2; i2++)
				{
					int j1 = i1 + l1 - 1;
					int j2 = i2 + l2 - 1;
					
						S0((i1),(j1),(i2),(j2));
}}}}*/
			#undef S0
		}
		{
			#ifdef NO_PROMPT
				#define S0(i1,j1,i2,j2) printf("%0.2lf\n",var_Qind21(i1,j1,i2,j2))
			#else
				#define S0(i1,j1,i2,j2) printf("Qind21(%ld,%ld,%ld,%ld)=\t",(long) i1,(long) j1,(long) i2,(long) j2);printf("%0.6lf\n",var_Qind21(i1,j1,i2,j2))
			#endif
			/*for(unsigned int l1 = 1; l1 <= N; l1++){
		for(unsigned int l2 = 1; l2 <= M; l2++)
		{
			
			for(int i1 = 0; (unsigned int)i1 <= N - l1; i1++){
				for(unsigned int i2 = 0; i2 <= M - l2; i2++)
				{
					int j1 = i1 + l1 - 1;
					int j2 = i2 + l2 - 1;
					
						S0((i1),(j1),(i2),(j2));
}}}}*/
			#undef S0
		}
		{
			#ifdef NO_PROMPT
				#define S0(i1,j1,i2,j2) printf("%0.2lf\n",var_Qidn01(i1,j1,i2,j2))
			#else
				#define S0(i1,j1,i2,j2) printf("Qidn01(%ld,%ld,%ld,%ld)=\t",(long) i1,(long) j1,(long) i2,(long) j2);printf("%0.6lf\n",var_Qidn01(i1,j1,i2,j2))
			#endif
			/*for(unsigned int l1 = 1; l1 <= N; l1++){
		for(unsigned int l2 = 1; l2 <= M; l2++)
		{
			
			for(int i1 = 0; (unsigned int)i1 <= N - l1; i1++){
				for(unsigned int i2 = 0; i2 <= M - l2; i2++)
				{
					int j1 = i1 + l1 - 1;
					int j2 = i2 + l2 - 1;
					
						S0((i1),(j1),(i2),(j2));
}}}}*/
			#undef S0
		}
		{
			#ifdef NO_PROMPT
				#define S0(i1,j1,i2,j2) printf("%0.2lf\n",var_Qidn02(i1,j1,i2,j2))
			#else
				#define S0(i1,j1,i2,j2) printf("Qidn02(%ld,%ld,%ld,%ld)=\t",(long) i1,(long) j1,(long) i2,(long) j2);printf("%0.6lf\n",var_Qidn02(i1,j1,i2,j2))
			#endif
			/*for(unsigned int l1 = 1; l1 <= N; l1++){
		for(unsigned int l2 = 1; l2 <= M; l2++)
		{
			
			for(int i1 = 0; (unsigned int)i1 <= N - l1; i1++){
				for(unsigned int i2 = 0; i2 <= M - l2; i2++)
				{
					int j1 = i1 + l1 - 1;
					int j2 = i2 + l2 - 1;
					
						S0((i1),(j1),(i2),(j2));
}}}}*/
			#undef S0
		}
		{
			#ifdef NO_PROMPT
				#define S0(i1,j1,i2,j2) printf("%0.2lf\n",var_Qidn10(i1,j1,i2,j2))
			#else
				#define S0(i1,j1,i2,j2) printf("Qidn10(%ld,%ld,%ld,%ld)=\t",(long) i1,(long) j1,(long) i2,(long) j2);printf("%0.6lf\n",var_Qidn10(i1,j1,i2,j2))
			#endif
			/*for(unsigned int l1 = 1; l1 <= N; l1++){
		for(unsigned int l2 = 1; l2 <= M; l2++)
		{
			
			for(int i1 = 0; (unsigned int)i1 <= N - l1; i1++){
				for(unsigned int i2 = 0; i2 <= M - l2; i2++)
				{
					int j1 = i1 + l1 - 1;
					int j2 = i2 + l2 - 1;
					
						S0((i1),(j1),(i2),(j2));
}}}}*/
			#undef S0
		}
		{
			#ifdef NO_PROMPT
				#define S0(i1,j1,i2,j2) printf("%0.2lf\n",var_Qidn11(i1,j1,i2,j2))
			#else
				#define S0(i1,j1,i2,j2) printf("Qidn11(%ld,%ld,%ld,%ld)=\t",(long) i1,(long) j1,(long) i2,(long) j2);printf("%0.6lf\n",var_Qidn11(i1,j1,i2,j2))
			#endif
			/*for(unsigned int l1 = 1; l1 <= N; l1++){
		for(unsigned int l2 = 1; l2 <= M; l2++)
		{
			
			for(int i1 = 0; (unsigned int)i1 <= N - l1; i1++){
				for(unsigned int i2 = 0; i2 <= M - l2; i2++)
				{
					int j1 = i1 + l1 - 1;
					int j2 = i2 + l2 - 1;
					
						S0((i1),(j1),(i2),(j2));
}}}}*/
			#undef S0
		}
		{
			#ifdef NO_PROMPT
				#define S0(i1,j1,i2,j2) printf("%0.2lf\n",var_Qidn12(i1,j1,i2,j2))
			#else
				#define S0(i1,j1,i2,j2) printf("Qidn12(%ld,%ld,%ld,%ld)=\t",(long) i1,(long) j1,(long) i2,(long) j2);printf("%0.6lf\n",var_Qidn12(i1,j1,i2,j2))
			#endif
			/*for(unsigned int l1 = 1; l1 <= N; l1++){
		for(unsigned int l2 = 1; l2 <= M; l2++)
		{
			
			for(int i1 = 0; (unsigned int)i1 <= N - l1; i1++){
				for(unsigned int i2 = 0; i2 <= M - l2; i2++)
				{
					int j1 = i1 + l1 - 1;
					int j2 = i2 + l2 - 1;
					
						S0((i1),(j1),(i2),(j2));
}}}}*/
			#undef S0
		}
		{
			#ifdef NO_PROMPT
				#define S0(i1,j1,i2,j2) printf("%0.2lf\n",var_Qidd01(i1,j1,i2,j2))
			#else
				#define S0(i1,j1,i2,j2) printf("Qidd01(%ld,%ld,%ld,%ld)=\t",(long) i1,(long) j1,(long) i2,(long) j2);printf("%0.6lf\n",var_Qidd01(i1,j1,i2,j2))
			#endif
			/*for(unsigned int l1 = 1; l1 <= N; l1++){
		for(unsigned int l2 = 1; l2 <= M; l2++)
		{
			
			for(int i1 = 0; (unsigned int)i1 <= N - l1; i1++){
				for(unsigned int i2 = 0; i2 <= M - l2; i2++)
				{
					int j1 = i1 + l1 - 1;
					int j2 = i2 + l2 - 1;
					
						S0((i1),(j1),(i2),(j2));
}}}}*/
			#undef S0
		}
		{
			#ifdef NO_PROMPT
				#define S0(i1,j1,i2,j2) printf("%0.2lf\n",var_Qidd10(i1,j1,i2,j2))
			#else
				#define S0(i1,j1,i2,j2) printf("Qidd10(%ld,%ld,%ld,%ld)=\t",(long) i1,(long) j1,(long) i2,(long) j2);printf("%0.6lf\n",var_Qidd10(i1,j1,i2,j2))
			#endif
			/*for(unsigned int l1 = 1; l1 <= N; l1++){
		for(unsigned int l2 = 1; l2 <= M; l2++)
		{
			
			for(int i1 = 0; (unsigned int)i1 <= N - l1; i1++){
				for(unsigned int i2 = 0; i2 <= M - l2; i2++)
				{
					int j1 = i1 + l1 - 1;
					int j2 = i2 + l2 - 1;
					
						S0((i1),(j1),(i2),(j2));
}}}}*/
			#undef S0
		}
		{
			#ifdef NO_PROMPT
				#define S0(i1,j1,i2,j2) printf("%0.2lf\n",var_Qidd11(i1,j1,i2,j2))
			#else
				#define S0(i1,j1,i2,j2) printf("Qidd11(%ld,%ld,%ld,%ld)=\t",(long) i1,(long) j1,(long) i2,(long) j2);printf("%0.6lf\n",var_Qidd11(i1,j1,i2,j2))
			#endif
			/*for(unsigned int l1 = 1; l1 <= N; l1++){
		for(unsigned int l2 = 1; l2 <= M; l2++)
		{
			
			for(int i1 = 0; (unsigned int)i1 <= N - l1; i1++){
				for(unsigned int i2 = 0; i2 <= M - l2; i2++)
				{
					int j1 = i1 + l1 - 1;
					int j2 = i2 + l2 - 1;
					
						S0((i1),(j1),(i2),(j2));
}}}}*/
			#undef S0
		}
		/*{
			#ifdef NO_PROMPT
				#define S0(i1,j1,i2,j2) printf("%0.2lf\n",var_Qix00(i1,j1,i2,j2))
			#else
				#define S0(i1,j1,i2,j2) printf("Qix00(%ld,%ld,%ld,%ld)=",(long) i1,(long) j1,(long) i2,(long) j2);printf("%0.2lf\n",var_Qix00(i1,j1,i2,j2))
			#endif
			int c1,c2,c3,c4;
			for(c1=0;c1 <= N-1;c1+=1)
			 {
			 	for(c2=c1;c2 <= N-1;c2+=1)
			 	 {
			 	 	for(c3=0;c3 <= M-1;c3+=1)
			 	 	 {
			 	 	 	for(c4=c3;c4 <= M-1;c4+=1)
			 	 	 	 {
			 	 	 	 	S0((c1),(c2),(c3),(c4));
			 	 	 	 }
			 	 	 }
			 	 }
			 }
			#undef S0
		}
		{
			#ifdef NO_PROMPT
				#define S0(i1,j1,i2,j2) printf("%0.2lf\n",var_Qix01(i1,j1,i2,j2))
			#else
				#define S0(i1,j1,i2,j2) printf("Qix01(%ld,%ld,%ld,%ld)=",(long) i1,(long) j1,(long) i2,(long) j2);printf("%0.2lf\n",var_Qix01(i1,j1,i2,j2))
			#endif
			int c1,c2,c3,c4;
			for(c1=0;c1 <= N-1;c1+=1)
			 {
			 	for(c2=c1;c2 <= N-1;c2+=1)
			 	 {
			 	 	for(c3=0;c3 <= M-1;c3+=1)
			 	 	 {
			 	 	 	for(c4=c3;c4 <= M-1;c4+=1)
			 	 	 	 {
			 	 	 	 	S0((c1),(c2),(c3),(c4));
			 	 	 	 }
			 	 	 }
			 	 }
			 }
			#undef S0
		}
		{
			#ifdef NO_PROMPT
				#define S0(i1,j1,i2,j2) printf("%0.2lf\n",var_Qix10(i1,j1,i2,j2))
			#else
				#define S0(i1,j1,i2,j2) printf("Qix10(%ld,%ld,%ld,%ld)=",(long) i1,(long) j1,(long) i2,(long) j2);printf("%0.2lf\n",var_Qix10(i1,j1,i2,j2))
			#endif
			int c1,c2,c3,c4;
			for(c1=0;c1 <= N-1;c1+=1)
			 {
			 	for(c2=c1;c2 <= N-1;c2+=1)
			 	 {
			 	 	for(c3=0;c3 <= M-1;c3+=1)
			 	 	 {
			 	 	 	for(c4=c3;c4 <= M-1;c4+=1)
			 	 	 	 {
			 	 	 	 	S0((c1),(c2),(c3),(c4));
			 	 	 	 }
			 	 	 }
			 	 }
			 }
			#undef S0
		}
		{
			#ifdef NO_PROMPT
				#define S0(i1,j1,i2,j2) printf("%0.2lf\n",var_Qix11(i1,j1,i2,j2))
			#else
				#define S0(i1,j1,i2,j2) printf("Qix11(%ld,%ld,%ld,%ld)=",(long) i1,(long) j1,(long) i2,(long) j2);printf("%0.2lf\n",var_Qix11(i1,j1,i2,j2))
			#endif
			int c1,c2,c3,c4;
			for(c1=0;c1 <= N-1;c1+=1)
			 {
			 	for(c2=c1;c2 <= N-1;c2+=1)
			 	 {
			 	 	for(c3=0;c3 <= M-1;c3+=1)
			 	 	 {
			 	 	 	for(c4=c3;c4 <= M-1;c4+=1)
			 	 	 	 {
			 	 	 	 	S0((c1),(c2),(c3),(c4));
			 	 	 	 }
			 	 	 }
			 	 }
			 }
			#undef S0
		}
		{
			#ifdef NO_PROMPT
				#define S0(i1,j1,i2,j2) printf("%0.2lf\n",var_auxqiadd01(i1,j1,i2,j2))
			#else
				#define S0(i1,j1,i2,j2) printf("auxqiadd01(%ld,%ld,%ld,%ld)=",(long) i1,(long) j1,(long) i2,(long) j2);printf("%0.2lf\n",var_auxqiadd01(i1,j1,i2,j2))
			#endif
			int c1,c2,c3,c4;
			for(c1=0;c1 <= N-1;c1+=1)
			 {
			 	for(c2=c1;c2 <= N-1;c2+=1)
			 	 {
			 	 	for(c3=0;c3 <= M-1;c3+=1)
			 	 	 {
			 	 	 	for(c4=c3;c4 <= M-1;c4+=1)
			 	 	 	 {
			 	 	 	 	S0((c1),(c2),(c3),(c4));
			 	 	 	 }
			 	 	 }
			 	 }
			 }
			#undef S0
		}
		{
			#ifdef NO_PROMPT
				#define S0(i1,j1,i2,j2) printf("%0.2lf\n",var_auxqiadd10(i1,j1,i2,j2))
			#else
				#define S0(i1,j1,i2,j2) printf("auxqiadd10(%ld,%ld,%ld,%ld)=",(long) i1,(long) j1,(long) i2,(long) j2);printf("%0.2lf\n",var_auxqiadd10(i1,j1,i2,j2))
			#endif
			int c1,c2,c3,c4;
			for(c1=0;c1 <= N-1;c1+=1)
			 {
			 	for(c2=c1;c2 <= N-1;c2+=1)
			 	 {
			 	 	for(c3=0;c3 <= M-1;c3+=1)
			 	 	 {
			 	 	 	for(c4=c3;c4 <= M-1;c4+=1)
			 	 	 	 {
			 	 	 	 	S0((c1),(c2),(c3),(c4));
			 	 	 	 }
			 	 	 }
			 	 }
			 }
			#undef S0
		}
		{
			#ifdef NO_PROMPT
				#define S0(i1,j1,i2,j2) printf("%0.2lf\n",var_auxqiadd11(i1,j1,i2,j2))
			#else
				#define S0(i1,j1,i2,j2) printf("auxqiadd11(%ld,%ld,%ld,%ld)=",(long) i1,(long) j1,(long) i2,(long) j2);printf("%0.2lf\n",var_auxqiadd11(i1,j1,i2,j2))
			#endif
			int c1,c2,c3,c4;
			for(c1=0;c1 <= N-1;c1+=1)
			 {
			 	for(c2=c1;c2 <= N-1;c2+=1)
			 	 {
			 	 	for(c3=0;c3 <= M-1;c3+=1)
			 	 	 {
			 	 	 	for(c4=c3;c4 <= M-1;c4+=1)
			 	 	 	 {
			 	 	 	 	S0((c1),(c2),(c3),(c4));
			 	 	 	 }
			 	 	 }
			 	 }
			 }
			#undef S0
		}
		{
			#ifdef NO_PROMPT
				#define S0(i1,j1,i2,j2) printf("%0.2lf\n",var_auxqia01(i1,j1,i2,j2))
			#else
				#define S0(i1,j1,i2,j2) printf("auxqia01(%ld,%ld,%ld,%ld)=",(long) i1,(long) j1,(long) i2,(long) j2);printf("%0.2lf\n",var_auxqia01(i1,j1,i2,j2))
			#endif
			int c1,c2,c3,c4;
			for(c1=0;c1 <= N-1;c1+=1)
			 {
			 	for(c2=c1;c2 <= N-1;c2+=1)
			 	 {
			 	 	for(c3=0;c3 <= M-1;c3+=1)
			 	 	 {
			 	 	 	for(c4=c3;c4 <= M-1;c4+=1)
			 	 	 	 {
			 	 	 	 	S0((c1),(c2),(c3),(c4));
			 	 	 	 }
			 	 	 }
			 	 }
			 }
			#undef S0
		}
		{
			#ifdef NO_PROMPT
				#define S0(i1,j1,i2,j2) printf("%0.2lf\n",var_auxqia10(i1,j1,i2,j2))
			#else
				#define S0(i1,j1,i2,j2) printf("auxqia10(%ld,%ld,%ld,%ld)=",(long) i1,(long) j1,(long) i2,(long) j2);printf("%0.2lf\n",var_auxqia10(i1,j1,i2,j2))
			#endif
			int c1,c2,c3,c4;
			for(c1=0;c1 <= N-1;c1+=1)
			 {
			 	for(c2=c1;c2 <= N-1;c2+=1)
			 	 {
			 	 	for(c3=0;c3 <= M-1;c3+=1)
			 	 	 {
			 	 	 	for(c4=c3;c4 <= M-1;c4+=1)
			 	 	 	 {
			 	 	 	 	S0((c1),(c2),(c3),(c4));
			 	 	 	 }
			 	 	 }
			 	 }
			 }
			#undef S0
		}
		{
			#ifdef NO_PROMPT
				#define S0(i1,j1,i2,j2) printf("%0.2lf\n",var_auxqia11(i1,j1,i2,j2))
			#else
				#define S0(i1,j1,i2,j2) printf("auxqia11(%ld,%ld,%ld,%ld)=",(long) i1,(long) j1,(long) i2,(long) j2);printf("%0.2lf\n",var_auxqia11(i1,j1,i2,j2))
			#endif
			int c1,c2,c3,c4;
			for(c1=0;c1 <= N-1;c1+=1)
			 {
			 	for(c2=c1;c2 <= N-1;c2+=1)
			 	 {
			 	 	for(c3=0;c3 <= M-1;c3+=1)
			 	 	 {
			 	 	 	for(c4=c3;c4 <= M-1;c4+=1)
			 	 	 	 {
			 	 	 	 	S0((c1),(c2),(c3),(c4));
			 	 	 	 }
			 	 	 }
			 	 }
			 }
			#undef S0
		}
	#elif VERIFY
		//Compare outputs for verification
		{
			//Error Counter
			int _errors_ = 0;
			#define S0(i) if (abs(1 - var_seq1_verify(i)/var_seq1(i)) > EPSILON) _errors_++;
			int c1;
			for(c1=0;c1 <= M-1;c1+=1)
			 {
			 	S0((c1));
			 }
			#undef S0
			if(_errors_ == 0){
				printf("TEST PASSED\n");
			}else{
				printf("TEST FAILED\n");
			}
		}
		{
			//Error Counter
			int _errors_ = 0;
			#define S0(i,j) if (fabs(1.0 - var_Q00_verify(i,j)/var_Q00(i,j)) > EPSILON) _errors_++;
			int c1,c2;
			for(c1=0;c1 <= N-1;c1+=1)
			 {
			 	for(c2=c1;c2 <= N-1;c2+=1)
			 	 {
			 	 	S0((c1),(c2));
			 	 }
			 }
			#undef S0
			if(_errors_ == 0){
				printf("TEST PASSED\n");
			}else{
				printf("TEST FAILED\n");
			}
		}
		{
			//Error Counter
			int _errors_ = 0;
			#define S0(i,j) if (fabs(1.0 - var_Q10_verify(i,j)/var_Q10(i,j)) > EPSILON) _errors_++;
			int c1,c2;
			for(c1=0;c1 <= N-1;c1+=1)
			 {
			 	for(c2=c1;c2 <= N-1;c2+=1)
			 	 {
			 	 	S0((c1),(c2));
			 	 }
			 }
			#undef S0
			if(_errors_ == 0){
				printf("TEST PASSED\n");
			}else{
				printf("TEST FAILED\n");
			}
		}
		{
			//Error Counter
			int _errors_ = 0;
			#define S0(i1,j1,i2,j2) if (fabs(1.0 - var_Qi_verify(i1,j1,i2,j2)/var_Qi(i1,j1,i2,j2)) > EPSILON) _errors_++;
			int c1,c2,c3,c4;
			for(c1=0;c1 <= N-1;c1+=1)
			 {
			 	for(c2=c1;c2 <= N-1;c2+=1)
			 	 {
			 	 	for(c3=0;c3 <= M-1;c3+=1)
			 	 	 {
			 	 	 	for(c4=c3;c4 <= M-1;c4+=1)
			 	 	 	 {
			 	 	 	 	S0((c1),(c2),(c3),(c4));
			 	 	 	 }
			 	 	 }
			 	 }
			 }
			#undef S0
			if(_errors_ == 0){
				printf("TEST PASSED\n");
			}else{
				printf("TEST FAILED\n");
			}
		}
		{
			//Error Counter
			int _errors_ = 0;
			#define S0(i1,j1,i2,j2) if (fabs(1.0 - var_Qiy_verify(i1,j1,i2,j2)/var_Qiy(i1,j1,i2,j2)) > EPSILON) _errors_++;
			int c1,c2,c3,c4;
			for(c1=0;c1 <= N-1;c1+=1)
			 {
			 	for(c2=c1;c2 <= N-1;c2+=1)
			 	 {
			 	 	for(c3=0;c3 <= M-1;c3+=1)
			 	 	 {
			 	 	 	for(c4=c3;c4 <= M-1;c4+=1)
			 	 	 	 {
			 	 	 	 	S0((c1),(c2),(c3),(c4));
			 	 	 	 }
			 	 	 }
			 	 }
			 }
			#undef S0
			if(_errors_ == 0){
				printf("TEST PASSED\n");
			}else{
				printf("TEST FAILED\n");
			}
		}
		{
			//Error Counter
			int _errors_ = 0;
			#define S0(i1,j1,i2,j2) if (fabs(1.0 - var_Qixm00_verify(i1,j1,i2,j2)/var_Qixm00(i1,j1,i2,j2)) > EPSILON) _errors_++;
			int c1,c2,c3,c4;
			for(c1=0;c1 <= N-1;c1+=1)
			 {
			 	for(c2=c1;c2 <= N-1;c2+=1)
			 	 {
			 	 	for(c3=0;c3 <= M-1;c3+=1)
			 	 	 {
			 	 	 	for(c4=c3;c4 <= M-1;c4+=1)
			 	 	 	 {
			 	 	 	 	S0((c1),(c2),(c3),(c4));
			 	 	 	 }
			 	 	 }
			 	 }
			 }
			#undef S0
			if(_errors_ == 0){
				printf("TEST PASSED\n");
			}else{
				printf("TEST FAILED\n");
			}
		}
		{
			//Error Counter
			int _errors_ = 0;
			#define S0(i1,j1,i2,j2) if (fabs(1.0 - var_Qixm01_verify(i1,j1,i2,j2)/var_Qixm01(i1,j1,i2,j2)) > EPSILON) _errors_++;
			int c1,c2,c3,c4;
			for(c1=0;c1 <= N-1;c1+=1)
			 {
			 	for(c2=c1;c2 <= N-1;c2+=1)
			 	 {
			 	 	for(c3=0;c3 <= M-1;c3+=1)
			 	 	 {
			 	 	 	for(c4=c3;c4 <= M-1;c4+=1)
			 	 	 	 {
			 	 	 	 	S0((c1),(c2),(c3),(c4));
			 	 	 	 }
			 	 	 }
			 	 }
			 }
			#undef S0
			if(_errors_ == 0){
				printf("TEST PASSED\n");
			}else{
				printf("TEST FAILED\n");
			}
		}
		{
			//Error Counter
			int _errors_ = 0;
			#define S0(i1,j1,i2,j2) if (fabs(1.0 - var_Qixm02_verify(i1,j1,i2,j2)/var_Qixm02(i1,j1,i2,j2)) > EPSILON) _errors_++;
			int c1,c2,c3,c4;
			for(c1=0;c1 <= N-1;c1+=1)
			 {
			 	for(c2=c1;c2 <= N-1;c2+=1)
			 	 {
			 	 	for(c3=0;c3 <= M-1;c3+=1)
			 	 	 {
			 	 	 	for(c4=c3;c4 <= M-1;c4+=1)
			 	 	 	 {
			 	 	 	 	S0((c1),(c2),(c3),(c4));
			 	 	 	 }
			 	 	 }
			 	 }
			 }
			#undef S0
			if(_errors_ == 0){
				printf("TEST PASSED\n");
			}else{
				printf("TEST FAILED\n");
			}
		}
		{
			//Error Counter
			int _errors_ = 0;
			#define S0(i1,j1,i2,j2) if (fabs(1.0 - var_Qixm10_verify(i1,j1,i2,j2)/var_Qixm10(i1,j1,i2,j2)) > EPSILON) _errors_++;
			int c1,c2,c3,c4;
			for(c1=0;c1 <= N-1;c1+=1)
			 {
			 	for(c2=c1;c2 <= N-1;c2+=1)
			 	 {
			 	 	for(c3=0;c3 <= M-1;c3+=1)
			 	 	 {
			 	 	 	for(c4=c3;c4 <= M-1;c4+=1)
			 	 	 	 {
			 	 	 	 	S0((c1),(c2),(c3),(c4));
			 	 	 	 }
			 	 	 }
			 	 }
			 }
			#undef S0
			if(_errors_ == 0){
				printf("TEST PASSED\n");
			}else{
				printf("TEST FAILED\n");
			}
		}
		{
			//Error Counter
			int _errors_ = 0;
			#define S0(i1,j1,i2,j2) if (fabs(1.0 - var_Qixm11_verify(i1,j1,i2,j2)/var_Qixm11(i1,j1,i2,j2)) > EPSILON) _errors_++;
			int c1,c2,c3,c4;
			for(c1=0;c1 <= N-1;c1+=1)
			 {
			 	for(c2=c1;c2 <= N-1;c2+=1)
			 	 {
			 	 	for(c3=0;c3 <= M-1;c3+=1)
			 	 	 {
			 	 	 	for(c4=c3;c4 <= M-1;c4+=1)
			 	 	 	 {
			 	 	 	 	S0((c1),(c2),(c3),(c4));
			 	 	 	 }
			 	 	 }
			 	 }
			 }
			#undef S0
			if(_errors_ == 0){
				printf("TEST PASSED\n");
			}else{
				printf("TEST FAILED\n");
			}
		}
		{
			//Error Counter
			int _errors_ = 0;
			#define S0(i1,j1,i2,j2) if (fabs(1.0 - var_Qixm12_verify(i1,j1,i2,j2)/var_Qixm12(i1,j1,i2,j2)) > EPSILON) _errors_++;
			int c1,c2,c3,c4;
			for(c1=0;c1 <= N-1;c1+=1)
			 {
			 	for(c2=c1;c2 <= N-1;c2+=1)
			 	 {
			 	 	for(c3=0;c3 <= M-1;c3+=1)
			 	 	 {
			 	 	 	for(c4=c3;c4 <= M-1;c4+=1)
			 	 	 	 {
			 	 	 	 	S0((c1),(c2),(c3),(c4));
			 	 	 	 }
			 	 	 }
			 	 }
			 }
			#undef S0
			if(_errors_ == 0){
				printf("TEST PASSED\n");
			}else{
				printf("TEST FAILED\n");
			}
		}
		{
			//Error Counter
			int _errors_ = 0;
			#define S0(i1,j1,i2,j2) if (fabs(1.0 - var_Qixk00_verify(i1,j1,i2,j2)/var_Qixk00(i1,j1,i2,j2)) > EPSILON) _errors_++;
			int c1,c2,c3,c4;
			for(c1=0;c1 <= N-1;c1+=1)
			 {
			 	for(c2=c1;c2 <= N-1;c2+=1)
			 	 {
			 	 	for(c3=0;c3 <= M-1;c3+=1)
			 	 	 {
			 	 	 	for(c4=c3;c4 <= M-1;c4+=1)
			 	 	 	 {
			 	 	 	 	S0((c1),(c2),(c3),(c4));
			 	 	 	 }
			 	 	 }
			 	 }
			 }
			#undef S0
			if(_errors_ == 0){
				printf("TEST PASSED\n");
			}else{
				printf("TEST FAILED\n");
			}
		}
		{
			//Error Counter
			int _errors_ = 0;
			#define S0(i1,j1,i2,j2) if (fabs(1.0 - var_Qixk01_verify(i1,j1,i2,j2)/var_Qixk01(i1,j1,i2,j2)) > EPSILON) _errors_++;
			int c1,c2,c3,c4;
			for(c1=0;c1 <= N-1;c1+=1)
			 {
			 	for(c2=c1;c2 <= N-1;c2+=1)
			 	 {
			 	 	for(c3=0;c3 <= M-1;c3+=1)
			 	 	 {
			 	 	 	for(c4=c3;c4 <= M-1;c4+=1)
			 	 	 	 {
			 	 	 	 	S0((c1),(c2),(c3),(c4));
			 	 	 	 }
			 	 	 }
			 	 }
			 }
			#undef S0
			if(_errors_ == 0){
				printf("TEST PASSED\n");
			}else{
				printf("TEST FAILED\n");
			}
		}
		{
			//Error Counter
			int _errors_ = 0;
			#define S0(i1,j1,i2,j2) if (fabs(1.0 - var_Qixk10_verify(i1,j1,i2,j2)/var_Qixk10(i1,j1,i2,j2)) > EPSILON) _errors_++;
			int c1,c2,c3,c4;
			for(c1=0;c1 <= N-1;c1+=1)
			 {
			 	for(c2=c1;c2 <= N-1;c2+=1)
			 	 {
			 	 	for(c3=0;c3 <= M-1;c3+=1)
			 	 	 {
			 	 	 	for(c4=c3;c4 <= M-1;c4+=1)
			 	 	 	 {
			 	 	 	 	S0((c1),(c2),(c3),(c4));
			 	 	 	 }
			 	 	 }
			 	 }
			 }
			#undef S0
			if(_errors_ == 0){
				printf("TEST PASSED\n");
			}else{
				printf("TEST FAILED\n");
			}
		}
		{
			//Error Counter
			int _errors_ = 0;
			#define S0(i1,j1,i2,j2) if (fabs(1.0 - var_Qixk11_verify(i1,j1,i2,j2)/var_Qixk11(i1,j1,i2,j2)) > EPSILON) _errors_++;
			int c1,c2,c3,c4;
			for(c1=0;c1 <= N-1;c1+=1)
			 {
			 	for(c2=c1;c2 <= N-1;c2+=1)
			 	 {
			 	 	for(c3=0;c3 <= M-1;c3+=1)
			 	 	 {
			 	 	 	for(c4=c3;c4 <= M-1;c4+=1)
			 	 	 	 {
			 	 	 	 	S0((c1),(c2),(c3),(c4));
			 	 	 	 }
			 	 	 }
			 	 }
			 }
			#undef S0
			if(_errors_ == 0){
				printf("TEST PASSED\n");
			}else{
				printf("TEST FAILED\n");
			}
		}
		{
			//Error Counter
			int _errors_ = 0;
			#define S0(i1,j1,i2,j2) if (fabs(1.0 - var_Qimm02_verify(i1,j1,i2,j2)/var_Qimm02(i1,j1,i2,j2)) > EPSILON) _errors_++;
			int c1,c2,c3,c4;
			for(c1=0;c1 <= N-1;c1+=1)
			 {
			 	for(c2=c1;c2 <= N-1;c2+=1)
			 	 {
			 	 	for(c3=0;c3 <= M-1;c3+=1)
			 	 	 {
			 	 	 	for(c4=c3;c4 <= M-1;c4+=1)
			 	 	 	 {
			 	 	 	 	S0((c1),(c2),(c3),(c4));
			 	 	 	 }
			 	 	 }
			 	 }
			 }
			#undef S0
			if(_errors_ == 0){
				printf("TEST PASSED\n");
			}else{
				printf("TEST FAILED\n");
			}
		}
		{
			//Error Counter
			int _errors_ = 0;
			#define S0(i1,j1,i2,j2) if (fabs(1.0 - var_Qimm12_verify(i1,j1,i2,j2)/var_Qimm12(i1,j1,i2,j2)) > EPSILON) _errors_++;
			int c1,c2,c3,c4;
			for(c1=0;c1 <= N-1;c1+=1)
			 {
			 	for(c2=c1;c2 <= N-1;c2+=1)
			 	 {
			 	 	for(c3=0;c3 <= M-1;c3+=1)
			 	 	 {
			 	 	 	for(c4=c3;c4 <= M-1;c4+=1)
			 	 	 	 {
			 	 	 	 	S0((c1),(c2),(c3),(c4));
			 	 	 	 }
			 	 	 }
			 	 }
			 }
			#undef S0
			if(_errors_ == 0){
				printf("TEST PASSED\n");
			}else{
				printf("TEST FAILED\n");
			}
		}
		{
			//Error Counter
			int _errors_ = 0;
			#define S0(i1,j1,i2,j2) if (fabs(1.0 - var_Qimm20_verify(i1,j1,i2,j2)/var_Qimm20(i1,j1,i2,j2)) > EPSILON) _errors_++;
			int c1,c2,c3,c4;
			for(c1=0;c1 <= N-1;c1+=1)
			 {
			 	for(c2=c1;c2 <= N-1;c2+=1)
			 	 {
			 	 	for(c3=0;c3 <= M-1;c3+=1)
			 	 	 {
			 	 	 	for(c4=c3;c4 <= M-1;c4+=1)
			 	 	 	 {
			 	 	 	 	S0((c1),(c2),(c3),(c4));
			 	 	 	 }
			 	 	 }
			 	 }
			 }
			#undef S0
			if(_errors_ == 0){
				printf("TEST PASSED\n");
			}else{
				printf("TEST FAILED\n");
			}
		}
		{
			//Error Counter
			int _errors_ = 0;
			#define S0(i1,j1,i2,j2) if (fabs(1.0 - var_Qimm21_verify(i1,j1,i2,j2)/var_Qimm21(i1,j1,i2,j2)) > EPSILON) _errors_++;
			int c1,c2,c3,c4;
			for(c1=0;c1 <= N-1;c1+=1)
			 {
			 	for(c2=c1;c2 <= N-1;c2+=1)
			 	 {
			 	 	for(c3=0;c3 <= M-1;c3+=1)
			 	 	 {
			 	 	 	for(c4=c3;c4 <= M-1;c4+=1)
			 	 	 	 {
			 	 	 	 	S0((c1),(c2),(c3),(c4));
			 	 	 	 }
			 	 	 }
			 	 }
			 }
			#undef S0
			if(_errors_ == 0){
				printf("TEST PASSED\n");
			}else{
				printf("TEST FAILED\n");
			}
		}
		{
			//Error Counter
			int _errors_ = 0;
			#define S0(i1,j1,i2,j2) if (fabs(1.0 - var_Qimm22_verify(i1,j1,i2,j2)/var_Qimm22(i1,j1,i2,j2)) > EPSILON) _errors_++;
			int c1,c2,c3,c4;
			for(c1=0;c1 <= N-1;c1+=1)
			 {
			 	for(c2=c1;c2 <= N-1;c2+=1)
			 	 {
			 	 	for(c3=0;c3 <= M-1;c3+=1)
			 	 	 {
			 	 	 	for(c4=c3;c4 <= M-1;c4+=1)
			 	 	 	 {
			 	 	 	 	S0((c1),(c2),(c3),(c4));
			 	 	 	 }
			 	 	 }
			 	 }
			 }
			#undef S0
			if(_errors_ == 0){
				printf("TEST PASSED\n");
			}else{
				printf("TEST FAILED\n");
			}
		}
		{
			//Error Counter
			int _errors_ = 0;
			#define S0(i1,j1,i2,j2) if (fabs(1.0 - var_Qimk01_verify(i1,j1,i2,j2)/var_Qimk01(i1,j1,i2,j2)) > EPSILON) _errors_++;
			int c1,c2,c3,c4;
			for(c1=0;c1 <= N-1;c1+=1)
			 {
			 	for(c2=c1;c2 <= N-1;c2+=1)
			 	 {
			 	 	for(c3=0;c3 <= M-1;c3+=1)
			 	 	 {
			 	 	 	for(c4=c3;c4 <= M-1;c4+=1)
			 	 	 	 {
			 	 	 	 	S0((c1),(c2),(c3),(c4));
			 	 	 	 }
			 	 	 }
			 	 }
			 }
			#undef S0
			if(_errors_ == 0){
				printf("TEST PASSED\n");
			}else{
				printf("TEST FAILED\n");
			}
		}
		{
			//Error Counter
			int _errors_ = 0;
			#define S0(i1,j1,i2,j2) if (fabs(1.0 - var_Qimk11_verify(i1,j1,i2,j2)/var_Qimk11(i1,j1,i2,j2)) > EPSILON) _errors_++;
			int c1,c2,c3,c4;
			for(c1=0;c1 <= N-1;c1+=1)
			 {
			 	for(c2=c1;c2 <= N-1;c2+=1)
			 	 {
			 	 	for(c3=0;c3 <= M-1;c3+=1)
			 	 	 {
			 	 	 	for(c4=c3;c4 <= M-1;c4+=1)
			 	 	 	 {
			 	 	 	 	S0((c1),(c2),(c3),(c4));
			 	 	 	 }
			 	 	 }
			 	 }
			 }
			#undef S0
			if(_errors_ == 0){
				printf("TEST PASSED\n");
			}else{
				printf("TEST FAILED\n");
			}
		}
		{
			//Error Counter
			int _errors_ = 0;
			#define S0(i1,j1,i2,j2) if (fabs(1.0 - var_Qimk20_verify(i1,j1,i2,j2)/var_Qimk20(i1,j1,i2,j2)) > EPSILON) _errors_++;
			int c1,c2,c3,c4;
			for(c1=0;c1 <= N-1;c1+=1)
			 {
			 	for(c2=c1;c2 <= N-1;c2+=1)
			 	 {
			 	 	for(c3=0;c3 <= M-1;c3+=1)
			 	 	 {
			 	 	 	for(c4=c3;c4 <= M-1;c4+=1)
			 	 	 	 {
			 	 	 	 	S0((c1),(c2),(c3),(c4));
			 	 	 	 }
			 	 	 }
			 	 }
			 }
			#undef S0
			if(_errors_ == 0){
				printf("TEST PASSED\n");
			}else{
				printf("TEST FAILED\n");
			}
		}
		{
			//Error Counter
			int _errors_ = 0;
			#define S0(i1,j1,i2,j2) if (fabs(1.0 - var_Qimk21_verify(i1,j1,i2,j2)/var_Qimk21(i1,j1,i2,j2)) > EPSILON) _errors_++;
			int c1,c2,c3,c4;
			for(c1=0;c1 <= N-1;c1+=1)
			 {
			 	for(c2=c1;c2 <= N-1;c2+=1)
			 	 {
			 	 	for(c3=0;c3 <= M-1;c3+=1)
			 	 	 {
			 	 	 	for(c4=c3;c4 <= M-1;c4+=1)
			 	 	 	 {
			 	 	 	 	S0((c1),(c2),(c3),(c4));
			 	 	 	 }
			 	 	 }
			 	 }
			 }
			#undef S0
			if(_errors_ == 0){
				printf("TEST PASSED\n");
			}else{
				printf("TEST FAILED\n");
			}
		}
		{
			//Error Counter
			int _errors_ = 0;
			#define S0(i1,j1,i2,j2) if (fabs(1.0 - var_Qikm10_verify(i1,j1,i2,j2)/var_Qikm10(i1,j1,i2,j2)) > EPSILON) _errors_++;
			int c1,c2,c3,c4;
			for(c1=0;c1 <= N-1;c1+=1)
			 {
			 	for(c2=c1;c2 <= N-1;c2+=1)
			 	 {
			 	 	for(c3=0;c3 <= M-1;c3+=1)
			 	 	 {
			 	 	 	for(c4=c3;c4 <= M-1;c4+=1)
			 	 	 	 {
			 	 	 	 	S0((c1),(c2),(c3),(c4));
			 	 	 	 }
			 	 	 }
			 	 }
			 }
			#undef S0
			if(_errors_ == 0){
				printf("TEST PASSED\n");
			}else{
				printf("TEST FAILED\n");
			}
		}
		{
			//Error Counter
			int _errors_ = 0;
			#define S0(i1,j1,i2,j2) if (fabs(1.0 - var_Qikm11_verify(i1,j1,i2,j2)/var_Qikm11(i1,j1,i2,j2)) > EPSILON) _errors_++;
			int c1,c2,c3,c4;
			for(c1=0;c1 <= N-1;c1+=1)
			 {
			 	for(c2=c1;c2 <= N-1;c2+=1)
			 	 {
			 	 	for(c3=0;c3 <= M-1;c3+=1)
			 	 	 {
			 	 	 	for(c4=c3;c4 <= M-1;c4+=1)
			 	 	 	 {
			 	 	 	 	S0((c1),(c2),(c3),(c4));
			 	 	 	 }
			 	 	 }
			 	 }
			 }
			#undef S0
			if(_errors_ == 0){
				printf("TEST PASSED\n");
			}else{
				printf("TEST FAILED\n");
			}
		}
		{
			//Error Counter
			int _errors_ = 0;
			#define S0(i1,j1,i2,j2) if (fabs(1.0 - var_Qikm02_verify(i1,j1,i2,j2)/var_Qikm02(i1,j1,i2,j2)) > EPSILON) _errors_++;
			int c1,c2,c3,c4;
			for(c1=0;c1 <= N-1;c1+=1)
			 {
			 	for(c2=c1;c2 <= N-1;c2+=1)
			 	 {
			 	 	for(c3=0;c3 <= M-1;c3+=1)
			 	 	 {
			 	 	 	for(c4=c3;c4 <= M-1;c4+=1)
			 	 	 	 {
			 	 	 	 	S0((c1),(c2),(c3),(c4));
			 	 	 	 }
			 	 	 }
			 	 }
			 }
			#undef S0
			if(_errors_ == 0){
				printf("TEST PASSED\n");
			}else{
				printf("TEST FAILED\n");
			}
		}
		{
			//Error Counter
			int _errors_ = 0;
			#define S0(i1,j1,i2,j2) if (fabs(1.0 - var_Qikm12_verify(i1,j1,i2,j2)/var_Qikm12(i1,j1,i2,j2)) > EPSILON) _errors_++;
			int c1,c2,c3,c4;
			for(c1=0;c1 <= N-1;c1+=1)
			 {
			 	for(c2=c1;c2 <= N-1;c2+=1)
			 	 {
			 	 	for(c3=0;c3 <= M-1;c3+=1)
			 	 	 {
			 	 	 	for(c4=c3;c4 <= M-1;c4+=1)
			 	 	 	 {
			 	 	 	 	S0((c1),(c2),(c3),(c4));
			 	 	 	 }
			 	 	 }
			 	 }
			 }
			#undef S0
			if(_errors_ == 0){
				printf("TEST PASSED\n");
			}else{
				printf("TEST FAILED\n");
			}
		}
		{
			//Error Counter
			int _errors_ = 0;
			#define S0(i1,j1,i2,j2) if (fabs(1.0 - var_Qikk01_verify(i1,j1,i2,j2)/var_Qikk01(i1,j1,i2,j2)) > EPSILON) _errors_++;
			int c1,c2,c3,c4;
			for(c1=0;c1 <= N-1;c1+=1)
			 {
			 	for(c2=c1;c2 <= N-1;c2+=1)
			 	 {
			 	 	for(c3=0;c3 <= M-1;c3+=1)
			 	 	 {
			 	 	 	for(c4=c3;c4 <= M-1;c4+=1)
			 	 	 	 {
			 	 	 	 	S0((c1),(c2),(c3),(c4));
			 	 	 	 }
			 	 	 }
			 	 }
			 }
			#undef S0
			if(_errors_ == 0){
				printf("TEST PASSED\n");
			}else{
				printf("TEST FAILED\n");
			}
		}
		{
			//Error Counter
			int _errors_ = 0;
			#define S0(i1,j1,i2,j2) if (fabs(1.0 - var_Qikk10_verify(i1,j1,i2,j2)/var_Qikk10(i1,j1,i2,j2)) > EPSILON) _errors_++;
			int c1,c2,c3,c4;
			for(c1=0;c1 <= N-1;c1+=1)
			 {
			 	for(c2=c1;c2 <= N-1;c2+=1)
			 	 {
			 	 	for(c3=0;c3 <= M-1;c3+=1)
			 	 	 {
			 	 	 	for(c4=c3;c4 <= M-1;c4+=1)
			 	 	 	 {
			 	 	 	 	S0((c1),(c2),(c3),(c4));
			 	 	 	 }
			 	 	 }
			 	 }
			 }
			#undef S0
			if(_errors_ == 0){
				printf("TEST PASSED\n");
			}else{
				printf("TEST FAILED\n");
			}
		}
		{
			//Error Counter
			int _errors_ = 0;
			#define S0(i1,j1,i2,j2) if (fabs(1.0 - var_Qikk11_verify(i1,j1,i2,j2)/var_Qikk11(i1,j1,i2,j2)) > EPSILON) _errors_++;
			int c1,c2,c3,c4;
			for(c1=0;c1 <= N-1;c1+=1)
			 {
			 	for(c2=c1;c2 <= N-1;c2+=1)
			 	 {
			 	 	for(c3=0;c3 <= M-1;c3+=1)
			 	 	 {
			 	 	 	for(c4=c3;c4 <= M-1;c4+=1)
			 	 	 	 {
			 	 	 	 	S0((c1),(c2),(c3),(c4));
			 	 	 	 }
			 	 	 }
			 	 }
			 }
			#undef S0
			if(_errors_ == 0){
				printf("TEST PASSED\n");
			}else{
				printf("TEST FAILED\n");
			}
		}
		{
			//Error Counter
			int _errors_ = 0;
			#define S0(i1,j1,i2,j2) if (fabs(1.0 - var_Qiann01_verify(i1,j1,i2,j2)/var_Qiann01(i1,j1,i2,j2)) > EPSILON) _errors_++;
			int c1,c2,c3,c4;
			for(c1=0;c1 <= N-1;c1+=1)
			 {
			 	for(c2=c1;c2 <= N-1;c2+=1)
			 	 {
			 	 	for(c3=0;c3 <= M-1;c3+=1)
			 	 	 {
			 	 	 	for(c4=c3;c4 <= M-1;c4+=1)
			 	 	 	 {
			 	 	 	 	S0((c1),(c2),(c3),(c4));
			 	 	 	 }
			 	 	 }
			 	 }
			 }
			#undef S0
			if(_errors_ == 0){
				printf("TEST PASSED\n");
			}else{
				printf("TEST FAILED\n");
			}
		}
		{
			//Error Counter
			int _errors_ = 0;
			#define S0(i1,j1,i2,j2) if (fabs(1.0 - var_Qiann02_verify(i1,j1,i2,j2)/var_Qiann02(i1,j1,i2,j2)) > EPSILON) _errors_++;
			int c1,c2,c3,c4;
			for(c1=0;c1 <= N-1;c1+=1)
			 {
			 	for(c2=c1;c2 <= N-1;c2+=1)
			 	 {
			 	 	for(c3=0;c3 <= M-1;c3+=1)
			 	 	 {
			 	 	 	for(c4=c3;c4 <= M-1;c4+=1)
			 	 	 	 {
			 	 	 	 	S0((c1),(c2),(c3),(c4));
			 	 	 	 }
			 	 	 }
			 	 }
			 }
			#undef S0
			if(_errors_ == 0){
				printf("TEST PASSED\n");
			}else{
				printf("TEST FAILED\n");
			}
		}
		{
			//Error Counter
			int _errors_ = 0;
			#define S0(i1,j1,i2,j2) if (fabs(1.0 - var_Qiann10_verify(i1,j1,i2,j2)/var_Qiann10(i1,j1,i2,j2)) > EPSILON) _errors_++;
			int c1,c2,c3,c4;
			for(c1=0;c1 <= N-1;c1+=1)
			 {
			 	for(c2=c1;c2 <= N-1;c2+=1)
			 	 {
			 	 	for(c3=0;c3 <= M-1;c3+=1)
			 	 	 {
			 	 	 	for(c4=c3;c4 <= M-1;c4+=1)
			 	 	 	 {
			 	 	 	 	S0((c1),(c2),(c3),(c4));
			 	 	 	 }
			 	 	 }
			 	 }
			 }
			#undef S0
			if(_errors_ == 0){
				printf("TEST PASSED\n");
			}else{
				printf("TEST FAILED\n");
			}
		}
		{
			//Error Counter
			int _errors_ = 0;
			#define S0(i1,j1,i2,j2) if (fabs(1.0 - var_Qiann11_verify(i1,j1,i2,j2)/var_Qiann11(i1,j1,i2,j2)) > EPSILON) _errors_++;
			int c1,c2,c3,c4;
			for(c1=0;c1 <= N-1;c1+=1)
			 {
			 	for(c2=c1;c2 <= N-1;c2+=1)
			 	 {
			 	 	for(c3=0;c3 <= M-1;c3+=1)
			 	 	 {
			 	 	 	for(c4=c3;c4 <= M-1;c4+=1)
			 	 	 	 {
			 	 	 	 	S0((c1),(c2),(c3),(c4));
			 	 	 	 }
			 	 	 }
			 	 }
			 }
			#undef S0
			if(_errors_ == 0){
				printf("TEST PASSED\n");
			}else{
				printf("TEST FAILED\n");
			}
		}
		{
			//Error Counter
			int _errors_ = 0;
			#define S0(i1,j1,i2,j2) if (fabs(1.0 - var_Qiann12_verify(i1,j1,i2,j2)/var_Qiann12(i1,j1,i2,j2)) > EPSILON) _errors_++;
			int c1,c2,c3,c4;
			for(c1=0;c1 <= N-1;c1+=1)
			 {
			 	for(c2=c1;c2 <= N-1;c2+=1)
			 	 {
			 	 	for(c3=0;c3 <= M-1;c3+=1)
			 	 	 {
			 	 	 	for(c4=c3;c4 <= M-1;c4+=1)
			 	 	 	 {
			 	 	 	 	S0((c1),(c2),(c3),(c4));
			 	 	 	 }
			 	 	 }
			 	 }
			 }
			#undef S0
			if(_errors_ == 0){
				printf("TEST PASSED\n");
			}else{
				printf("TEST FAILED\n");
			}
		}
		{
			//Error Counter
			int _errors_ = 0;
			#define S0(i1,j1,i2,j2) if (fabs(1.0 - var_Qiann20_verify(i1,j1,i2,j2)/var_Qiann20(i1,j1,i2,j2)) > EPSILON) _errors_++;
			int c1,c2,c3,c4;
			for(c1=0;c1 <= N-1;c1+=1)
			 {
			 	for(c2=c1;c2 <= N-1;c2+=1)
			 	 {
			 	 	for(c3=0;c3 <= M-1;c3+=1)
			 	 	 {
			 	 	 	for(c4=c3;c4 <= M-1;c4+=1)
			 	 	 	 {
			 	 	 	 	S0((c1),(c2),(c3),(c4));
			 	 	 	 }
			 	 	 }
			 	 }
			 }
			#undef S0
			if(_errors_ == 0){
				printf("TEST PASSED\n");
			}else{
				printf("TEST FAILED\n");
			}
		}
		{
			//Error Counter
			int _errors_ = 0;
			#define S0(i1,j1,i2,j2) if (fabs(1.0 - var_Qiann21_verify(i1,j1,i2,j2)/var_Qiann21(i1,j1,i2,j2)) > EPSILON) _errors_++;
			int c1,c2,c3,c4;
			for(c1=0;c1 <= N-1;c1+=1)
			 {
			 	for(c2=c1;c2 <= N-1;c2+=1)
			 	 {
			 	 	for(c3=0;c3 <= M-1;c3+=1)
			 	 	 {
			 	 	 	for(c4=c3;c4 <= M-1;c4+=1)
			 	 	 	 {
			 	 	 	 	S0((c1),(c2),(c3),(c4));
			 	 	 	 }
			 	 	 }
			 	 }
			 }
			#undef S0
			if(_errors_ == 0){
				printf("TEST PASSED\n");
			}else{
				printf("TEST FAILED\n");
			}
		}
		{
			//Error Counter
			int _errors_ = 0;
			#define S0(i1,j1,i2,j2) if (fabs(1.0 - var_Qiann22_verify(i1,j1,i2,j2)/var_Qiann22(i1,j1,i2,j2)) > EPSILON) _errors_++;
			int c1,c2,c3,c4;
			for(c1=0;c1 <= N-1;c1+=1)
			 {
			 	for(c2=c1;c2 <= N-1;c2+=1)
			 	 {
			 	 	for(c3=0;c3 <= M-1;c3+=1)
			 	 	 {
			 	 	 	for(c4=c3;c4 <= M-1;c4+=1)
			 	 	 	 {
			 	 	 	 	S0((c1),(c2),(c3),(c4));
			 	 	 	 }
			 	 	 }
			 	 }
			 }
			#undef S0
			if(_errors_ == 0){
				printf("TEST PASSED\n");
			}else{
				printf("TEST FAILED\n");
			}
		}
		{
			//Error Counter
			int _errors_ = 0;
			#define S0(i1,j1,i2,j2) if (fabs(1.0 - var_Qiand01_verify(i1,j1,i2,j2)/var_Qiand01(i1,j1,i2,j2)) > EPSILON) _errors_++;
			int c1,c2,c3,c4;
			for(c1=0;c1 <= N-1;c1+=1)
			 {
			 	for(c2=c1;c2 <= N-1;c2+=1)
			 	 {
			 	 	for(c3=0;c3 <= M-1;c3+=1)
			 	 	 {
			 	 	 	for(c4=c3;c4 <= M-1;c4+=1)
			 	 	 	 {
			 	 	 	 	S0((c1),(c2),(c3),(c4));
			 	 	 	 }
			 	 	 }
			 	 }
			 }
			#undef S0
			if(_errors_ == 0){
				printf("TEST PASSED\n");
			}else{
				printf("TEST FAILED\n");
			}
		}
		{
			//Error Counter
			int _errors_ = 0;
			#define S0(i1,j1,i2,j2) if (fabs(1.0 - var_Qiand10_verify(i1,j1,i2,j2)/var_Qiand10(i1,j1,i2,j2)) > EPSILON) _errors_++;
			int c1,c2,c3,c4;
			for(c1=0;c1 <= N-1;c1+=1)
			 {
			 	for(c2=c1;c2 <= N-1;c2+=1)
			 	 {
			 	 	for(c3=0;c3 <= M-1;c3+=1)
			 	 	 {
			 	 	 	for(c4=c3;c4 <= M-1;c4+=1)
			 	 	 	 {
			 	 	 	 	S0((c1),(c2),(c3),(c4));
			 	 	 	 }
			 	 	 }
			 	 }
			 }
			#undef S0
			if(_errors_ == 0){
				printf("TEST PASSED\n");
			}else{
				printf("TEST FAILED\n");
			}
		}
		{
			//Error Counter
			int _errors_ = 0;
			#define S0(i1,j1,i2,j2) if (fabs(1.0 - var_Qiand11_verify(i1,j1,i2,j2)/var_Qiand11(i1,j1,i2,j2)) > EPSILON) _errors_++;
			int c1,c2,c3,c4;
			for(c1=0;c1 <= N-1;c1+=1)
			 {
			 	for(c2=c1;c2 <= N-1;c2+=1)
			 	 {
			 	 	for(c3=0;c3 <= M-1;c3+=1)
			 	 	 {
			 	 	 	for(c4=c3;c4 <= M-1;c4+=1)
			 	 	 	 {
			 	 	 	 	S0((c1),(c2),(c3),(c4));
			 	 	 	 }
			 	 	 }
			 	 }
			 }
			#undef S0
			if(_errors_ == 0){
				printf("TEST PASSED\n");
			}else{
				printf("TEST FAILED\n");
			}
		}
		{
			//Error Counter
			int _errors_ = 0;
			#define S0(i1,j1,i2,j2) if (fabs(1.0 - var_Qiand20_verify(i1,j1,i2,j2)/var_Qiand20(i1,j1,i2,j2)) > EPSILON) _errors_++;
			int c1,c2,c3,c4;
			for(c1=0;c1 <= N-1;c1+=1)
			 {
			 	for(c2=c1;c2 <= N-1;c2+=1)
			 	 {
			 	 	for(c3=0;c3 <= M-1;c3+=1)
			 	 	 {
			 	 	 	for(c4=c3;c4 <= M-1;c4+=1)
			 	 	 	 {
			 	 	 	 	S0((c1),(c2),(c3),(c4));
			 	 	 	 }
			 	 	 }
			 	 }
			 }
			#undef S0
			if(_errors_ == 0){
				printf("TEST PASSED\n");
			}else{
				printf("TEST FAILED\n");
			}
		}
		{
			//Error Counter
			int _errors_ = 0;
			#define S0(i1,j1,i2,j2) if (fabs(1.0 - var_Qiand21_verify(i1,j1,i2,j2)/var_Qiand21(i1,j1,i2,j2)) > EPSILON) _errors_++;
			int c1,c2,c3,c4;
			for(c1=0;c1 <= N-1;c1+=1)
			 {
			 	for(c2=c1;c2 <= N-1;c2+=1)
			 	 {
			 	 	for(c3=0;c3 <= M-1;c3+=1)
			 	 	 {
			 	 	 	for(c4=c3;c4 <= M-1;c4+=1)
			 	 	 	 {
			 	 	 	 	S0((c1),(c2),(c3),(c4));
			 	 	 	 }
			 	 	 }
			 	 }
			 }
			#undef S0
			if(_errors_ == 0){
				printf("TEST PASSED\n");
			}else{
				printf("TEST FAILED\n");
			}
		}
		{
			//Error Counter
			int _errors_ = 0;
			#define S0(i1,j1,i2,j2) if (fabs(1.0 - var_Qiadn01_verify(i1,j1,i2,j2)/var_Qiadn01(i1,j1,i2,j2)) > EPSILON) _errors_++;
			int c1,c2,c3,c4;
			for(c1=0;c1 <= N-1;c1+=1)
			 {
			 	for(c2=c1;c2 <= N-1;c2+=1)
			 	 {
			 	 	for(c3=0;c3 <= M-1;c3+=1)
			 	 	 {
			 	 	 	for(c4=c3;c4 <= M-1;c4+=1)
			 	 	 	 {
			 	 	 	 	S0((c1),(c2),(c3),(c4));
			 	 	 	 }
			 	 	 }
			 	 }
			 }
			#undef S0
			if(_errors_ == 0){
				printf("TEST PASSED\n");
			}else{
				printf("TEST FAILED\n");
			}
		}
		{
			//Error Counter
			int _errors_ = 0;
			#define S0(i1,j1,i2,j2) if (fabs(1.0 - var_Qiadn02_verify(i1,j1,i2,j2)/var_Qiadn02(i1,j1,i2,j2)) > EPSILON) _errors_++;
			int c1,c2,c3,c4;
			for(c1=0;c1 <= N-1;c1+=1)
			 {
			 	for(c2=c1;c2 <= N-1;c2+=1)
			 	 {
			 	 	for(c3=0;c3 <= M-1;c3+=1)
			 	 	 {
			 	 	 	for(c4=c3;c4 <= M-1;c4+=1)
			 	 	 	 {
			 	 	 	 	S0((c1),(c2),(c3),(c4));
			 	 	 	 }
			 	 	 }
			 	 }
			 }
			#undef S0
			if(_errors_ == 0){
				printf("TEST PASSED\n");
			}else{
				printf("TEST FAILED\n");
			}
		}
		{
			//Error Counter
			int _errors_ = 0;
			#define S0(i1,j1,i2,j2) if (fabs(1.0 - var_Qiadn10_verify(i1,j1,i2,j2)/var_Qiadn10(i1,j1,i2,j2)) > EPSILON) _errors_++;
			int c1,c2,c3,c4;
			for(c1=0;c1 <= N-1;c1+=1)
			 {
			 	for(c2=c1;c2 <= N-1;c2+=1)
			 	 {
			 	 	for(c3=0;c3 <= M-1;c3+=1)
			 	 	 {
			 	 	 	for(c4=c3;c4 <= M-1;c4+=1)
			 	 	 	 {
			 	 	 	 	S0((c1),(c2),(c3),(c4));
			 	 	 	 }
			 	 	 }
			 	 }
			 }
			#undef S0
			if(_errors_ == 0){
				printf("TEST PASSED\n");
			}else{
				printf("TEST FAILED\n");
			}
		}
		{
			//Error Counter
			int _errors_ = 0;
			#define S0(i1,j1,i2,j2) if (fabs(1.0 - var_Qiadn11_verify(i1,j1,i2,j2)/var_Qiadn11(i1,j1,i2,j2)) > EPSILON) _errors_++;
			int c1,c2,c3,c4;
			for(c1=0;c1 <= N-1;c1+=1)
			 {
			 	for(c2=c1;c2 <= N-1;c2+=1)
			 	 {
			 	 	for(c3=0;c3 <= M-1;c3+=1)
			 	 	 {
			 	 	 	for(c4=c3;c4 <= M-1;c4+=1)
			 	 	 	 {
			 	 	 	 	S0((c1),(c2),(c3),(c4));
			 	 	 	 }
			 	 	 }
			 	 }
			 }
			#undef S0
			if(_errors_ == 0){
				printf("TEST PASSED\n");
			}else{
				printf("TEST FAILED\n");
			}
		}
		{
			//Error Counter
			int _errors_ = 0;
			#define S0(i1,j1,i2,j2) if (fabs(1.0 - var_Qiadn12_verify(i1,j1,i2,j2)/var_Qiadn12(i1,j1,i2,j2)) > EPSILON) _errors_++;
			int c1,c2,c3,c4;
			for(c1=0;c1 <= N-1;c1+=1)
			 {
			 	for(c2=c1;c2 <= N-1;c2+=1)
			 	 {
			 	 	for(c3=0;c3 <= M-1;c3+=1)
			 	 	 {
			 	 	 	for(c4=c3;c4 <= M-1;c4+=1)
			 	 	 	 {
			 	 	 	 	S0((c1),(c2),(c3),(c4));
			 	 	 	 }
			 	 	 }
			 	 }
			 }
			#undef S0
			if(_errors_ == 0){
				printf("TEST PASSED\n");
			}else{
				printf("TEST FAILED\n");
			}
		}
		{
			//Error Counter
			int _errors_ = 0;
			#define S0(i1,j1,i2,j2) if (fabs(1.0 - var_Qiadd01_verify(i1,j1,i2,j2)/var_Qiadd01(i1,j1,i2,j2)) > EPSILON) _errors_++;
			int c1,c2,c3,c4;
			for(c1=0;c1 <= N-1;c1+=1)
			 {
			 	for(c2=c1;c2 <= N-1;c2+=1)
			 	 {
			 	 	for(c3=0;c3 <= M-1;c3+=1)
			 	 	 {
			 	 	 	for(c4=c3;c4 <= M-1;c4+=1)
			 	 	 	 {
			 	 	 	 	S0((c1),(c2),(c3),(c4));
			 	 	 	 }
			 	 	 }
			 	 }
			 }
			#undef S0
			if(_errors_ == 0){
				printf("TEST PASSED\n");
			}else{
				printf("TEST FAILED\n");
			}
		}
		{
			//Error Counter
			int _errors_ = 0;
			#define S0(i1,j1,i2,j2) if (fabs(1.0 - var_Qiadd10_verify(i1,j1,i2,j2)/var_Qiadd10(i1,j1,i2,j2)) > EPSILON) _errors_++;
			int c1,c2,c3,c4;
			for(c1=0;c1 <= N-1;c1+=1)
			 {
			 	for(c2=c1;c2 <= N-1;c2+=1)
			 	 {
			 	 	for(c3=0;c3 <= M-1;c3+=1)
			 	 	 {
			 	 	 	for(c4=c3;c4 <= M-1;c4+=1)
			 	 	 	 {
			 	 	 	 	S0((c1),(c2),(c3),(c4));
			 	 	 	 }
			 	 	 }
			 	 }
			 }
			#undef S0
			if(_errors_ == 0){
				printf("TEST PASSED\n");
			}else{
				printf("TEST FAILED\n");
			}
		}
		{
			//Error Counter
			int _errors_ = 0;
			#define S0(i1,j1,i2,j2) if (fabs(1.0 - var_Qiadd11_verify(i1,j1,i2,j2)/var_Qiadd11(i1,j1,i2,j2)) > EPSILON) _errors_++;
			int c1,c2,c3,c4;
			for(c1=0;c1 <= N-1;c1+=1)
			 {
			 	for(c2=c1;c2 <= N-1;c2+=1)
			 	 {
			 	 	for(c3=0;c3 <= M-1;c3+=1)
			 	 	 {
			 	 	 	for(c4=c3;c4 <= M-1;c4+=1)
			 	 	 	 {
			 	 	 	 	S0((c1),(c2),(c3),(c4));
			 	 	 	 }
			 	 	 }
			 	 }
			 }
			#undef S0
			if(_errors_ == 0){
				printf("TEST PASSED\n");
			}else{
				printf("TEST FAILED\n");
			}
		}
		{
			//Error Counter
			int _errors_ = 0;
			#define S0(i1,j1,i2,j2) if (fabs(1.0 - var_Qiar01_verify(i1,j1,i2,j2)/var_Qiar01(i1,j1,i2,j2)) > EPSILON) _errors_++;
			int c1,c2,c3,c4;
			for(c1=0;c1 <= N-1;c1+=1)
			 {
			 	for(c2=c1;c2 <= N-1;c2+=1)
			 	 {
			 	 	for(c3=0;c3 <= M-1;c3+=1)
			 	 	 {
			 	 	 	for(c4=c3;c4 <= M-1;c4+=1)
			 	 	 	 {
			 	 	 	 	S0((c1),(c2),(c3),(c4));
			 	 	 	 }
			 	 	 }
			 	 }
			 }
			#undef S0
			if(_errors_ == 0){
				printf("TEST PASSED\n");
			}else{
				printf("TEST FAILED\n");
			}
		}
		{
			//Error Counter
			int _errors_ = 0;
			#define S0(i1,j1,i2,j2) if (fabs(1.0 - var_Qiar10_verify(i1,j1,i2,j2)/var_Qiar10(i1,j1,i2,j2)) > EPSILON) _errors_++;
			int c1,c2,c3,c4;
			for(c1=0;c1 <= N-1;c1+=1)
			 {
			 	for(c2=c1;c2 <= N-1;c2+=1)
			 	 {
			 	 	for(c3=0;c3 <= M-1;c3+=1)
			 	 	 {
			 	 	 	for(c4=c3;c4 <= M-1;c4+=1)
			 	 	 	 {
			 	 	 	 	S0((c1),(c2),(c3),(c4));
			 	 	 	 }
			 	 	 }
			 	 }
			 }
			#undef S0
			if(_errors_ == 0){
				printf("TEST PASSED\n");
			}else{
				printf("TEST FAILED\n");
			}
		}
		{
			//Error Counter
			int _errors_ = 0;
			#define S0(i1,j1,i2,j2) if (fabs(1.0 - var_Qiar11_verify(i1,j1,i2,j2)/var_Qiar11(i1,j1,i2,j2)) > EPSILON) _errors_++;
			int c1,c2,c3,c4;
			for(c1=0;c1 <= N-1;c1+=1)
			 {
			 	for(c2=c1;c2 <= N-1;c2+=1)
			 	 {
			 	 	for(c3=0;c3 <= M-1;c3+=1)
			 	 	 {
			 	 	 	for(c4=c3;c4 <= M-1;c4+=1)
			 	 	 	 {
			 	 	 	 	S0((c1),(c2),(c3),(c4));
			 	 	 	 }
			 	 	 }
			 	 }
			 }
			#undef S0
			if(_errors_ == 0){
				printf("TEST PASSED\n");
			}else{
				printf("TEST FAILED\n");
			}
		}
		{
			//Error Counter
			int _errors_ = 0;
			#define S0(i1,j1,i2,j2) if (fabs(1.0 - var_Qilr01_verify(i1,j1,i2,j2)/var_Qilr01(i1,j1,i2,j2)) > EPSILON) _errors_++;
			int c1,c2,c3,c4;
			for(c1=0;c1 <= N-1;c1+=1)
			 {
			 	for(c2=c1;c2 <= N-1;c2+=1)
			 	 {
			 	 	for(c3=0;c3 <= M-1;c3+=1)
			 	 	 {
			 	 	 	for(c4=c3;c4 <= M-1;c4+=1)
			 	 	 	 {
			 	 	 	 	S0((c1),(c2),(c3),(c4));
			 	 	 	 }
			 	 	 }
			 	 }
			 }
			#undef S0
			if(_errors_ == 0){
				printf("TEST PASSED\n");
			}else{
				printf("TEST FAILED\n");
			}
		}
		{
			//Error Counter
			int _errors_ = 0;
			#define S0(i1,j1,i2,j2) if (fabs(1.0 - var_Qilr10_verify(i1,j1,i2,j2)/var_Qilr10(i1,j1,i2,j2)) > EPSILON) _errors_++;
			int c1,c2,c3,c4;
			for(c1=0;c1 <= N-1;c1+=1)
			 {
			 	for(c2=c1;c2 <= N-1;c2+=1)
			 	 {
			 	 	for(c3=0;c3 <= M-1;c3+=1)
			 	 	 {
			 	 	 	for(c4=c3;c4 <= M-1;c4+=1)
			 	 	 	 {
			 	 	 	 	S0((c1),(c2),(c3),(c4));
			 	 	 	 }
			 	 	 }
			 	 }
			 }
			#undef S0
			if(_errors_ == 0){
				printf("TEST PASSED\n");
			}else{
				printf("TEST FAILED\n");
			}
		}
		{
			//Error Counter
			int _errors_ = 0;
			#define S0(i1,j1,i2,j2) if (fabs(1.0 - var_Qilr11_verify(i1,j1,i2,j2)/var_Qilr11(i1,j1,i2,j2)) > EPSILON) _errors_++;
			int c1,c2,c3,c4;
			for(c1=0;c1 <= N-1;c1+=1)
			 {
			 	for(c2=c1;c2 <= N-1;c2+=1)
			 	 {
			 	 	for(c3=0;c3 <= M-1;c3+=1)
			 	 	 {
			 	 	 	for(c4=c3;c4 <= M-1;c4+=1)
			 	 	 	 {
			 	 	 	 	S0((c1),(c2),(c3),(c4));
			 	 	 	 }
			 	 	 }
			 	 }
			 }
			#undef S0
			if(_errors_ == 0){
				printf("TEST PASSED\n");
			}else{
				printf("TEST FAILED\n");
			}
		}
		{
			//Error Counter
			int _errors_ = 0;
			#define S0(i1,j1,i2,j2) if (fabs(1.0 - var_Qir01_verify(i1,j1,i2,j2)/var_Qir01(i1,j1,i2,j2)) > EPSILON) _errors_++;
			int c1,c2,c3,c4;
			for(c1=0;c1 <= N-1;c1+=1)
			 {
			 	for(c2=c1;c2 <= N-1;c2+=1)
			 	 {
			 	 	for(c3=0;c3 <= M-1;c3+=1)
			 	 	 {
			 	 	 	for(c4=c3;c4 <= M-1;c4+=1)
			 	 	 	 {
			 	 	 	 	S0((c1),(c2),(c3),(c4));
			 	 	 	 }
			 	 	 }
			 	 }
			 }
			#undef S0
			if(_errors_ == 0){
				printf("TEST PASSED\n");
			}else{
				printf("TEST FAILED\n");
			}
		}
		{
			//Error Counter
			int _errors_ = 0;
			#define S0(i1,j1,i2,j2) if (fabs(1.0 - var_Qir10_verify(i1,j1,i2,j2)/var_Qir10(i1,j1,i2,j2)) > EPSILON) _errors_++;
			int c1,c2,c3,c4;
			for(c1=0;c1 <= N-1;c1+=1)
			 {
			 	for(c2=c1;c2 <= N-1;c2+=1)
			 	 {
			 	 	for(c3=0;c3 <= M-1;c3+=1)
			 	 	 {
			 	 	 	for(c4=c3;c4 <= M-1;c4+=1)
			 	 	 	 {
			 	 	 	 	S0((c1),(c2),(c3),(c4));
			 	 	 	 }
			 	 	 }
			 	 }
			 }
			#undef S0
			if(_errors_ == 0){
				printf("TEST PASSED\n");
			}else{
				printf("TEST FAILED\n");
			}
		}
		{
			//Error Counter
			int _errors_ = 0;
			#define S0(i1,j1,i2,j2) if (fabs(1.0 - var_Qir11_verify(i1,j1,i2,j2)/var_Qir11(i1,j1,i2,j2)) > EPSILON) _errors_++;
			int c1,c2,c3,c4;
			for(c1=0;c1 <= N-1;c1+=1)
			 {
			 	for(c2=c1;c2 <= N-1;c2+=1)
			 	 {
			 	 	for(c3=0;c3 <= M-1;c3+=1)
			 	 	 {
			 	 	 	for(c4=c3;c4 <= M-1;c4+=1)
			 	 	 	 {
			 	 	 	 	S0((c1),(c2),(c3),(c4));
			 	 	 	 }
			 	 	 }
			 	 }
			 }
			#undef S0
			if(_errors_ == 0){
				printf("TEST PASSED\n");
			}else{
				printf("TEST FAILED\n");
			}
		}
		{
			//Error Counter
			int _errors_ = 0;
			#define S0(i1,j1,i2,j2) if (fabs(1.0 - var_Qia_verify(i1,j1,i2,j2)/var_Qia(i1,j1,i2,j2)) > EPSILON) _errors_++;
			int c1,c2,c3,c4;
			for(c1=0;c1 <= N-1;c1+=1)
			 {
			 	for(c2=c1;c2 <= N-1;c2+=1)
			 	 {
			 	 	for(c3=0;c3 <= M-1;c3+=1)
			 	 	 {
			 	 	 	for(c4=c3;c4 <= M-1;c4+=1)
			 	 	 	 {
			 	 	 	 	S0((c1),(c2),(c3),(c4));
			 	 	 	 }
			 	 	 }
			 	 }
			 }
			#undef S0
			if(_errors_ == 0){
				printf("TEST PASSED\n");
			}else{
				printf("TEST FAILED\n");
			}
		}
		{
			//Error Counter
			int _errors_ = 0;
			#define S0(i1,j1,i2,j2) if (fabs(1.0 - var_Qib00_verify(i1,j1,i2,j2)/var_Qib00(i1,j1,i2,j2)) > EPSILON) _errors_++;
			int c1,c2,c3,c4;
			for(c1=0;c1 <= N-1;c1+=1)
			 {
			 	for(c2=c1;c2 <= N-1;c2+=1)
			 	 {
			 	 	for(c3=0;c3 <= M-1;c3+=1)
			 	 	 {
			 	 	 	for(c4=c3;c4 <= M-1;c4+=1)
			 	 	 	 {
			 	 	 	 	S0((c1),(c2),(c3),(c4));
			 	 	 	 }
			 	 	 }
			 	 }
			 }
			#undef S0
			if(_errors_ == 0){
				printf("TEST PASSED\n");
			}else{
				printf("TEST FAILED\n");
			}
		}
		{
			//Error Counter
			int _errors_ = 0;
			#define S0(i1,j1,i2,j2) if (fabs(1.0 - var_Qib01_verify(i1,j1,i2,j2)/var_Qib01(i1,j1,i2,j2)) > EPSILON) _errors_++;
			int c1,c2,c3,c4;
			for(c1=0;c1 <= N-1;c1+=1)
			 {
			 	for(c2=c1;c2 <= N-1;c2+=1)
			 	 {
			 	 	for(c3=0;c3 <= M-1;c3+=1)
			 	 	 {
			 	 	 	for(c4=c3;c4 <= M-1;c4+=1)
			 	 	 	 {
			 	 	 	 	S0((c1),(c2),(c3),(c4));
			 	 	 	 }
			 	 	 }
			 	 }
			 }
			#undef S0
			if(_errors_ == 0){
				printf("TEST PASSED\n");
			}else{
				printf("TEST FAILED\n");
			}
		}
		{
			//Error Counter
			int _errors_ = 0;
			#define S0(i1,j1,i2,j2) if (fabs(1.0 - var_Qib10_verify(i1,j1,i2,j2)/var_Qib10(i1,j1,i2,j2)) > EPSILON) _errors_++;
			int c1,c2,c3,c4;
			for(c1=0;c1 <= N-1;c1+=1)
			 {
			 	for(c2=c1;c2 <= N-1;c2+=1)
			 	 {
			 	 	for(c3=0;c3 <= M-1;c3+=1)
			 	 	 {
			 	 	 	for(c4=c3;c4 <= M-1;c4+=1)
			 	 	 	 {
			 	 	 	 	S0((c1),(c2),(c3),(c4));
			 	 	 	 }
			 	 	 }
			 	 }
			 }
			#undef S0
			if(_errors_ == 0){
				printf("TEST PASSED\n");
			}else{
				printf("TEST FAILED\n");
			}
		}
		{
			//Error Counter
			int _errors_ = 0;
			#define S0(i1,j1,i2,j2) if (fabs(1.0 - var_Qib11_verify(i1,j1,i2,j2)/var_Qib11(i1,j1,i2,j2)) > EPSILON) _errors_++;
			int c1,c2,c3,c4;
			for(c1=0;c1 <= N-1;c1+=1)
			 {
			 	for(c2=c1;c2 <= N-1;c2+=1)
			 	 {
			 	 	for(c3=0;c3 <= M-1;c3+=1)
			 	 	 {
			 	 	 	for(c4=c3;c4 <= M-1;c4+=1)
			 	 	 	 {
			 	 	 	 	S0((c1),(c2),(c3),(c4));
			 	 	 	 }
			 	 	 }
			 	 }
			 }
			#undef S0
			if(_errors_ == 0){
				printf("TEST PASSED\n");
			}else{
				printf("TEST FAILED\n");
			}
		}
		{
			//Error Counter
			int _errors_ = 0;
			#define S0(i1,j1,i2,j2) if (fabs(1.0 - var_Qinn01_verify(i1,j1,i2,j2)/var_Qinn01(i1,j1,i2,j2)) > EPSILON) _errors_++;
			int c1,c2,c3,c4;
			for(c1=0;c1 <= N-1;c1+=1)
			 {
			 	for(c2=c1;c2 <= N-1;c2+=1)
			 	 {
			 	 	for(c3=0;c3 <= M-1;c3+=1)
			 	 	 {
			 	 	 	for(c4=c3;c4 <= M-1;c4+=1)
			 	 	 	 {
			 	 	 	 	S0((c1),(c2),(c3),(c4));
			 	 	 	 }
			 	 	 }
			 	 }
			 }
			#undef S0
			if(_errors_ == 0){
				printf("TEST PASSED\n");
			}else{
				printf("TEST FAILED\n");
			}
		}
		{
			//Error Counter
			int _errors_ = 0;
			#define S0(i1,j1,i2,j2) if (fabs(1.0 - var_Qinn02_verify(i1,j1,i2,j2)/var_Qinn02(i1,j1,i2,j2)) > EPSILON) _errors_++;
			int c1,c2,c3,c4;
			for(c1=0;c1 <= N-1;c1+=1)
			 {
			 	for(c2=c1;c2 <= N-1;c2+=1)
			 	 {
			 	 	for(c3=0;c3 <= M-1;c3+=1)
			 	 	 {
			 	 	 	for(c4=c3;c4 <= M-1;c4+=1)
			 	 	 	 {
			 	 	 	 	S0((c1),(c2),(c3),(c4));
			 	 	 	 }
			 	 	 }
			 	 }
			 }
			#undef S0
			if(_errors_ == 0){
				printf("TEST PASSED\n");
			}else{
				printf("TEST FAILED\n");
			}
		}
		{
			//Error Counter
			int _errors_ = 0;
			#define S0(i1,j1,i2,j2) if (fabs(1.0 - var_Qinn10_verify(i1,j1,i2,j2)/var_Qinn10(i1,j1,i2,j2)) > EPSILON) _errors_++;
			int c1,c2,c3,c4;
			for(c1=0;c1 <= N-1;c1+=1)
			 {
			 	for(c2=c1;c2 <= N-1;c2+=1)
			 	 {
			 	 	for(c3=0;c3 <= M-1;c3+=1)
			 	 	 {
			 	 	 	for(c4=c3;c4 <= M-1;c4+=1)
			 	 	 	 {
			 	 	 	 	S0((c1),(c2),(c3),(c4));
			 	 	 	 }
			 	 	 }
			 	 }
			 }
			#undef S0
			if(_errors_ == 0){
				printf("TEST PASSED\n");
			}else{
				printf("TEST FAILED\n");
			}
		}
		{
			//Error Counter
			int _errors_ = 0;
			#define S0(i1,j1,i2,j2) if (fabs(1.0 - var_Qinn11_verify(i1,j1,i2,j2)/var_Qinn11(i1,j1,i2,j2)) > EPSILON) _errors_++;
			int c1,c2,c3,c4;
			for(c1=0;c1 <= N-1;c1+=1)
			 {
			 	for(c2=c1;c2 <= N-1;c2+=1)
			 	 {
			 	 	for(c3=0;c3 <= M-1;c3+=1)
			 	 	 {
			 	 	 	for(c4=c3;c4 <= M-1;c4+=1)
			 	 	 	 {
			 	 	 	 	S0((c1),(c2),(c3),(c4));
			 	 	 	 }
			 	 	 }
			 	 }
			 }
			#undef S0
			if(_errors_ == 0){
				printf("TEST PASSED\n");
			}else{
				printf("TEST FAILED\n");
			}
		}
		{
			//Error Counter
			int _errors_ = 0;
			#define S0(i1,j1,i2,j2) if (fabs(1.0 - var_Qinn12_verify(i1,j1,i2,j2)/var_Qinn12(i1,j1,i2,j2)) > EPSILON) _errors_++;
			int c1,c2,c3,c4;
			for(c1=0;c1 <= N-1;c1+=1)
			 {
			 	for(c2=c1;c2 <= N-1;c2+=1)
			 	 {
			 	 	for(c3=0;c3 <= M-1;c3+=1)
			 	 	 {
			 	 	 	for(c4=c3;c4 <= M-1;c4+=1)
			 	 	 	 {
			 	 	 	 	S0((c1),(c2),(c3),(c4));
			 	 	 	 }
			 	 	 }
			 	 }
			 }
			#undef S0
			if(_errors_ == 0){
				printf("TEST PASSED\n");
			}else{
				printf("TEST FAILED\n");
			}
		}
		{
			//Error Counter
			int _errors_ = 0;
			#define S0(i1,j1,i2,j2) if (fabs(1.0 - var_Qinn20_verify(i1,j1,i2,j2)/var_Qinn20(i1,j1,i2,j2)) > EPSILON) _errors_++;
			int c1,c2,c3,c4;
			for(c1=0;c1 <= N-1;c1+=1)
			 {
			 	for(c2=c1;c2 <= N-1;c2+=1)
			 	 {
			 	 	for(c3=0;c3 <= M-1;c3+=1)
			 	 	 {
			 	 	 	for(c4=c3;c4 <= M-1;c4+=1)
			 	 	 	 {
			 	 	 	 	S0((c1),(c2),(c3),(c4));
			 	 	 	 }
			 	 	 }
			 	 }
			 }
			#undef S0
			if(_errors_ == 0){
				printf("TEST PASSED\n");
			}else{
				printf("TEST FAILED\n");
			}
		}
		{
			//Error Counter
			int _errors_ = 0;
			#define S0(i1,j1,i2,j2) if (fabs(1.0 - var_Qinn21_verify(i1,j1,i2,j2)/var_Qinn21(i1,j1,i2,j2)) > EPSILON) _errors_++;
			int c1,c2,c3,c4;
			for(c1=0;c1 <= N-1;c1+=1)
			 {
			 	for(c2=c1;c2 <= N-1;c2+=1)
			 	 {
			 	 	for(c3=0;c3 <= M-1;c3+=1)
			 	 	 {
			 	 	 	for(c4=c3;c4 <= M-1;c4+=1)
			 	 	 	 {
			 	 	 	 	S0((c1),(c2),(c3),(c4));
			 	 	 	 }
			 	 	 }
			 	 }
			 }
			#undef S0
			if(_errors_ == 0){
				printf("TEST PASSED\n");
			}else{
				printf("TEST FAILED\n");
			}
		}
		{
			//Error Counter
			int _errors_ = 0;
			#define S0(i1,j1,i2,j2) if (fabs(1.0 - var_Qinn22_verify(i1,j1,i2,j2)/var_Qinn22(i1,j1,i2,j2)) > EPSILON) _errors_++;
			int c1,c2,c3,c4;
			for(c1=0;c1 <= N-1;c1+=1)
			 {
			 	for(c2=c1;c2 <= N-1;c2+=1)
			 	 {
			 	 	for(c3=0;c3 <= M-1;c3+=1)
			 	 	 {
			 	 	 	for(c4=c3;c4 <= M-1;c4+=1)
			 	 	 	 {
			 	 	 	 	S0((c1),(c2),(c3),(c4));
			 	 	 	 }
			 	 	 }
			 	 }
			 }
			#undef S0
			if(_errors_ == 0){
				printf("TEST PASSED\n");
			}else{
				printf("TEST FAILED\n");
			}
		}
		{
			//Error Counter
			int _errors_ = 0;
			#define S0(i1,j1,i2,j2) if (fabs(1.0 - var_Qind01_verify(i1,j1,i2,j2)/var_Qind01(i1,j1,i2,j2)) > EPSILON) _errors_++;
			int c1,c2,c3,c4;
			for(c1=0;c1 <= N-1;c1+=1)
			 {
			 	for(c2=c1;c2 <= N-1;c2+=1)
			 	 {
			 	 	for(c3=0;c3 <= M-1;c3+=1)
			 	 	 {
			 	 	 	for(c4=c3;c4 <= M-1;c4+=1)
			 	 	 	 {
			 	 	 	 	S0((c1),(c2),(c3),(c4));
			 	 	 	 }
			 	 	 }
			 	 }
			 }
			#undef S0
			if(_errors_ == 0){
				printf("TEST PASSED\n");
			}else{
				printf("TEST FAILED\n");
			}
		}
		{
			//Error Counter
			int _errors_ = 0;
			#define S0(i1,j1,i2,j2) if (fabs(1.0 - var_Qind10_verify(i1,j1,i2,j2)/var_Qind10(i1,j1,i2,j2)) > EPSILON) _errors_++;
			int c1,c2,c3,c4;
			for(c1=0;c1 <= N-1;c1+=1)
			 {
			 	for(c2=c1;c2 <= N-1;c2+=1)
			 	 {
			 	 	for(c3=0;c3 <= M-1;c3+=1)
			 	 	 {
			 	 	 	for(c4=c3;c4 <= M-1;c4+=1)
			 	 	 	 {
			 	 	 	 	S0((c1),(c2),(c3),(c4));
			 	 	 	 }
			 	 	 }
			 	 }
			 }
			#undef S0
			if(_errors_ == 0){
				printf("TEST PASSED\n");
			}else{
				printf("TEST FAILED\n");
			}
		}
		{
			//Error Counter
			int _errors_ = 0;
			#define S0(i1,j1,i2,j2) if (fabs(1.0 - var_Qind11_verify(i1,j1,i2,j2)/var_Qind11(i1,j1,i2,j2)) > EPSILON) _errors_++;
			int c1,c2,c3,c4;
			for(c1=0;c1 <= N-1;c1+=1)
			 {
			 	for(c2=c1;c2 <= N-1;c2+=1)
			 	 {
			 	 	for(c3=0;c3 <= M-1;c3+=1)
			 	 	 {
			 	 	 	for(c4=c3;c4 <= M-1;c4+=1)
			 	 	 	 {
			 	 	 	 	S0((c1),(c2),(c3),(c4));
			 	 	 	 }
			 	 	 }
			 	 }
			 }
			#undef S0
			if(_errors_ == 0){
				printf("TEST PASSED\n");
			}else{
				printf("TEST FAILED\n");
			}
		}
		{
			//Error Counter
			int _errors_ = 0;
			#define S0(i1,j1,i2,j2) if (fabs(1.0 - var_Qind20_verify(i1,j1,i2,j2)/var_Qind20(i1,j1,i2,j2)) > EPSILON) _errors_++;
			int c1,c2,c3,c4;
			for(c1=0;c1 <= N-1;c1+=1)
			 {
			 	for(c2=c1;c2 <= N-1;c2+=1)
			 	 {
			 	 	for(c3=0;c3 <= M-1;c3+=1)
			 	 	 {
			 	 	 	for(c4=c3;c4 <= M-1;c4+=1)
			 	 	 	 {
			 	 	 	 	S0((c1),(c2),(c3),(c4));
			 	 	 	 }
			 	 	 }
			 	 }
			 }
			#undef S0
			if(_errors_ == 0){
				printf("TEST PASSED\n");
			}else{
				printf("TEST FAILED\n");
			}
		}
		{
			//Error Counter
			int _errors_ = 0;
			#define S0(i1,j1,i2,j2) if (fabs(1.0 - var_Qind21_verify(i1,j1,i2,j2)/var_Qind21(i1,j1,i2,j2)) > EPSILON) _errors_++;
			int c1,c2,c3,c4;
			for(c1=0;c1 <= N-1;c1+=1)
			 {
			 	for(c2=c1;c2 <= N-1;c2+=1)
			 	 {
			 	 	for(c3=0;c3 <= M-1;c3+=1)
			 	 	 {
			 	 	 	for(c4=c3;c4 <= M-1;c4+=1)
			 	 	 	 {
			 	 	 	 	S0((c1),(c2),(c3),(c4));
			 	 	 	 }
			 	 	 }
			 	 }
			 }
			#undef S0
			if(_errors_ == 0){
				printf("TEST PASSED\n");
			}else{
				printf("TEST FAILED\n");
			}
		}
		{
			//Error Counter
			int _errors_ = 0;
			#define S0(i1,j1,i2,j2) if (fabs(1.0 - var_Qidn01_verify(i1,j1,i2,j2)/var_Qidn01(i1,j1,i2,j2)) > EPSILON) _errors_++;
			int c1,c2,c3,c4;
			for(c1=0;c1 <= N-1;c1+=1)
			 {
			 	for(c2=c1;c2 <= N-1;c2+=1)
			 	 {
			 	 	for(c3=0;c3 <= M-1;c3+=1)
			 	 	 {
			 	 	 	for(c4=c3;c4 <= M-1;c4+=1)
			 	 	 	 {
			 	 	 	 	S0((c1),(c2),(c3),(c4));
			 	 	 	 }
			 	 	 }
			 	 }
			 }
			#undef S0
			if(_errors_ == 0){
				printf("TEST PASSED\n");
			}else{
				printf("TEST FAILED\n");
			}
		}
		{
			//Error Counter
			int _errors_ = 0;
			#define S0(i1,j1,i2,j2) if (fabs(1.0 - var_Qidn02_verify(i1,j1,i2,j2)/var_Qidn02(i1,j1,i2,j2)) > EPSILON) _errors_++;
			int c1,c2,c3,c4;
			for(c1=0;c1 <= N-1;c1+=1)
			 {
			 	for(c2=c1;c2 <= N-1;c2+=1)
			 	 {
			 	 	for(c3=0;c3 <= M-1;c3+=1)
			 	 	 {
			 	 	 	for(c4=c3;c4 <= M-1;c4+=1)
			 	 	 	 {
			 	 	 	 	S0((c1),(c2),(c3),(c4));
			 	 	 	 }
			 	 	 }
			 	 }
			 }
			#undef S0
			if(_errors_ == 0){
				printf("TEST PASSED\n");
			}else{
				printf("TEST FAILED\n");
			}
		}
		{
			//Error Counter
			int _errors_ = 0;
			#define S0(i1,j1,i2,j2) if (fabs(1.0 - var_Qidn10_verify(i1,j1,i2,j2)/var_Qidn10(i1,j1,i2,j2)) > EPSILON) _errors_++;
			int c1,c2,c3,c4;
			for(c1=0;c1 <= N-1;c1+=1)
			 {
			 	for(c2=c1;c2 <= N-1;c2+=1)
			 	 {
			 	 	for(c3=0;c3 <= M-1;c3+=1)
			 	 	 {
			 	 	 	for(c4=c3;c4 <= M-1;c4+=1)
			 	 	 	 {
			 	 	 	 	S0((c1),(c2),(c3),(c4));
			 	 	 	 }
			 	 	 }
			 	 }
			 }
			#undef S0
			if(_errors_ == 0){
				printf("TEST PASSED\n");
			}else{
				printf("TEST FAILED\n");
			}
		}
		{
			//Error Counter
			int _errors_ = 0;
			#define S0(i1,j1,i2,j2) if (fabs(1.0 - var_Qidn11_verify(i1,j1,i2,j2)/var_Qidn11(i1,j1,i2,j2)) > EPSILON) _errors_++;
			int c1,c2,c3,c4;
			for(c1=0;c1 <= N-1;c1+=1)
			 {
			 	for(c2=c1;c2 <= N-1;c2+=1)
			 	 {
			 	 	for(c3=0;c3 <= M-1;c3+=1)
			 	 	 {
			 	 	 	for(c4=c3;c4 <= M-1;c4+=1)
			 	 	 	 {
			 	 	 	 	S0((c1),(c2),(c3),(c4));
			 	 	 	 }
			 	 	 }
			 	 }
			 }
			#undef S0
			if(_errors_ == 0){
				printf("TEST PASSED\n");
			}else{
				printf("TEST FAILED\n");
			}
		}
		{
			//Error Counter
			int _errors_ = 0;
			#define S0(i1,j1,i2,j2) if (fabs(1.0 - var_Qidn12_verify(i1,j1,i2,j2)/var_Qidn12(i1,j1,i2,j2)) > EPSILON) _errors_++;
			int c1,c2,c3,c4;
			for(c1=0;c1 <= N-1;c1+=1)
			 {
			 	for(c2=c1;c2 <= N-1;c2+=1)
			 	 {
			 	 	for(c3=0;c3 <= M-1;c3+=1)
			 	 	 {
			 	 	 	for(c4=c3;c4 <= M-1;c4+=1)
			 	 	 	 {
			 	 	 	 	S0((c1),(c2),(c3),(c4));
			 	 	 	 }
			 	 	 }
			 	 }
			 }
			#undef S0
			if(_errors_ == 0){
				printf("TEST PASSED\n");
			}else{
				printf("TEST FAILED\n");
			}
		}
		{
			//Error Counter
			int _errors_ = 0;
			#define S0(i1,j1,i2,j2) if (fabs(1.0 - var_Qidd01_verify(i1,j1,i2,j2)/var_Qidd01(i1,j1,i2,j2)) > EPSILON) _errors_++;
			int c1,c2,c3,c4;
			for(c1=0;c1 <= N-1;c1+=1)
			 {
			 	for(c2=c1;c2 <= N-1;c2+=1)
			 	 {
			 	 	for(c3=0;c3 <= M-1;c3+=1)
			 	 	 {
			 	 	 	for(c4=c3;c4 <= M-1;c4+=1)
			 	 	 	 {
			 	 	 	 	S0((c1),(c2),(c3),(c4));
			 	 	 	 }
			 	 	 }
			 	 }
			 }
			#undef S0
			if(_errors_ == 0){
				printf("TEST PASSED\n");
			}else{
				printf("TEST FAILED\n");
			}
		}
		{
			//Error Counter
			int _errors_ = 0;
			#define S0(i1,j1,i2,j2) if (fabs(1.0 - var_Qidd10_verify(i1,j1,i2,j2)/var_Qidd10(i1,j1,i2,j2)) > EPSILON) _errors_++;
			int c1,c2,c3,c4;
			for(c1=0;c1 <= N-1;c1+=1)
			 {
			 	for(c2=c1;c2 <= N-1;c2+=1)
			 	 {
			 	 	for(c3=0;c3 <= M-1;c3+=1)
			 	 	 {
			 	 	 	for(c4=c3;c4 <= M-1;c4+=1)
			 	 	 	 {
			 	 	 	 	S0((c1),(c2),(c3),(c4));
			 	 	 	 }
			 	 	 }
			 	 }
			 }
			#undef S0
			if(_errors_ == 0){
				printf("TEST PASSED\n");
			}else{
				printf("TEST FAILED\n");
			}
		}
		{
			//Error Counter
			int _errors_ = 0;
			#define S0(i1,j1,i2,j2) if (fabs(1.0 - var_Qidd11_verify(i1,j1,i2,j2)/var_Qidd11(i1,j1,i2,j2)) > EPSILON) _errors_++;
			int c1,c2,c3,c4;
			for(c1=0;c1 <= N-1;c1+=1)
			 {
			 	for(c2=c1;c2 <= N-1;c2+=1)
			 	 {
			 	 	for(c3=0;c3 <= M-1;c3+=1)
			 	 	 {
			 	 	 	for(c4=c3;c4 <= M-1;c4+=1)
			 	 	 	 {
			 	 	 	 	S0((c1),(c2),(c3),(c4));
			 	 	 	 }
			 	 	 }
			 	 }
			 }
			#undef S0
			if(_errors_ == 0){
				printf("TEST PASSED\n");
			}else{
				printf("TEST FAILED\n");
			}
		}
		{
			//Error Counter
			int _errors_ = 0;
			#define S0(i1,j1,i2,j2) if (fabs(1.0 - var_Qix00_verify(i1,j1,i2,j2)/var_Qix00(i1,j1,i2,j2)) > EPSILON) _errors_++;
			int c1,c2,c3,c4;
			for(c1=0;c1 <= N-1;c1+=1)
			 {
			 	for(c2=c1;c2 <= N-1;c2+=1)
			 	 {
			 	 	for(c3=0;c3 <= M-1;c3+=1)
			 	 	 {
			 	 	 	for(c4=c3;c4 <= M-1;c4+=1)
			 	 	 	 {
			 	 	 	 	S0((c1),(c2),(c3),(c4));
			 	 	 	 }
			 	 	 }
			 	 }
			 }
			#undef S0
			if(_errors_ == 0){
				printf("TEST PASSED\n");
			}else{
				printf("TEST FAILED\n");
			}
		}
		{
			//Error Counter
			int _errors_ = 0;
			#define S0(i1,j1,i2,j2) if (fabs(1.0 - var_Qix01_verify(i1,j1,i2,j2)/var_Qix01(i1,j1,i2,j2)) > EPSILON) _errors_++;
			int c1,c2,c3,c4;
			for(c1=0;c1 <= N-1;c1+=1)
			 {
			 	for(c2=c1;c2 <= N-1;c2+=1)
			 	 {
			 	 	for(c3=0;c3 <= M-1;c3+=1)
			 	 	 {
			 	 	 	for(c4=c3;c4 <= M-1;c4+=1)
			 	 	 	 {
			 	 	 	 	S0((c1),(c2),(c3),(c4));
			 	 	 	 }
			 	 	 }
			 	 }
			 }
			#undef S0
			if(_errors_ == 0){
				printf("TEST PASSED\n");
			}else{
				printf("TEST FAILED\n");
			}
		}
		{
			//Error Counter
			int _errors_ = 0;
			#define S0(i1,j1,i2,j2) if (fabs(1.0 - var_Qix10_verify(i1,j1,i2,j2)/var_Qix10(i1,j1,i2,j2)) > EPSILON) _errors_++;
			int c1,c2,c3,c4;
			for(c1=0;c1 <= N-1;c1+=1)
			 {
			 	for(c2=c1;c2 <= N-1;c2+=1)
			 	 {
			 	 	for(c3=0;c3 <= M-1;c3+=1)
			 	 	 {
			 	 	 	for(c4=c3;c4 <= M-1;c4+=1)
			 	 	 	 {
			 	 	 	 	S0((c1),(c2),(c3),(c4));
			 	 	 	 }
			 	 	 }
			 	 }
			 }
			#undef S0
			if(_errors_ == 0){
				printf("TEST PASSED\n");
			}else{
				printf("TEST FAILED\n");
			}
		}
		{
			//Error Counter
			int _errors_ = 0;
			#define S0(i1,j1,i2,j2) if (fabs(1.0 - var_Qix11_verify(i1,j1,i2,j2)/var_Qix11(i1,j1,i2,j2)) > EPSILON) _errors_++;
			int c1,c2,c3,c4;
			for(c1=0;c1 <= N-1;c1+=1)
			 {
			 	for(c2=c1;c2 <= N-1;c2+=1)
			 	 {
			 	 	for(c3=0;c3 <= M-1;c3+=1)
			 	 	 {
			 	 	 	for(c4=c3;c4 <= M-1;c4+=1)
			 	 	 	 {
			 	 	 	 	S0((c1),(c2),(c3),(c4));
			 	 	 	 }
			 	 	 }
			 	 }
			 }
			#undef S0
			if(_errors_ == 0){
				printf("TEST PASSED\n");
			}else{
				printf("TEST FAILED\n");
			}
		}
		{
			//Error Counter
			int _errors_ = 0;
			#define S0(i1,j1,i2,j2) if (fabs(1.0 - var_auxqiadd01_verify(i1,j1,i2,j2)/var_auxqiadd01(i1,j1,i2,j2)) > EPSILON) _errors_++;
			int c1,c2,c3,c4;
			for(c1=0;c1 <= N-1;c1+=1)
			 {
			 	for(c2=c1;c2 <= N-1;c2+=1)
			 	 {
			 	 	for(c3=0;c3 <= M-1;c3+=1)
			 	 	 {
			 	 	 	for(c4=c3;c4 <= M-1;c4+=1)
			 	 	 	 {
			 	 	 	 	S0((c1),(c2),(c3),(c4));
			 	 	 	 }
			 	 	 }
			 	 }
			 }
			#undef S0
			if(_errors_ == 0){
				printf("TEST PASSED\n");
			}else{
				printf("TEST FAILED\n");
			}
		}
		{
			//Error Counter
			int _errors_ = 0;
			#define S0(i1,j1,i2,j2) if (fabs(1.0 - var_auxqiadd10_verify(i1,j1,i2,j2)/var_auxqiadd10(i1,j1,i2,j2)) > EPSILON) _errors_++;
			int c1,c2,c3,c4;
			for(c1=0;c1 <= N-1;c1+=1)
			 {
			 	for(c2=c1;c2 <= N-1;c2+=1)
			 	 {
			 	 	for(c3=0;c3 <= M-1;c3+=1)
			 	 	 {
			 	 	 	for(c4=c3;c4 <= M-1;c4+=1)
			 	 	 	 {
			 	 	 	 	S0((c1),(c2),(c3),(c4));
			 	 	 	 }
			 	 	 }
			 	 }
			 }
			#undef S0
			if(_errors_ == 0){
				printf("TEST PASSED\n");
			}else{
				printf("TEST FAILED\n");
			}
		}
		{
			//Error Counter
			int _errors_ = 0;
			#define S0(i1,j1,i2,j2) if (fabs(1.0 - var_auxqiadd11_verify(i1,j1,i2,j2)/var_auxqiadd11(i1,j1,i2,j2)) > EPSILON) _errors_++;
			int c1,c2,c3,c4;
			for(c1=0;c1 <= N-1;c1+=1)
			 {
			 	for(c2=c1;c2 <= N-1;c2+=1)
			 	 {
			 	 	for(c3=0;c3 <= M-1;c3+=1)
			 	 	 {
			 	 	 	for(c4=c3;c4 <= M-1;c4+=1)
			 	 	 	 {
			 	 	 	 	S0((c1),(c2),(c3),(c4));
			 	 	 	 }
			 	 	 }
			 	 }
			 }
			#undef S0
			if(_errors_ == 0){
				printf("TEST PASSED\n");
			}else{
				printf("TEST FAILED\n");
			}
		}
		{
			//Error Counter
			int _errors_ = 0;
			#define S0(i1,j1,i2,j2) if (fabs(1.0 - var_auxqia01_verify(i1,j1,i2,j2)/var_auxqia01(i1,j1,i2,j2)) > EPSILON) _errors_++;
			int c1,c2,c3,c4;
			for(c1=0;c1 <= N-1;c1+=1)
			 {
			 	for(c2=c1;c2 <= N-1;c2+=1)
			 	 {
			 	 	for(c3=0;c3 <= M-1;c3+=1)
			 	 	 {
			 	 	 	for(c4=c3;c4 <= M-1;c4+=1)
			 	 	 	 {
			 	 	 	 	S0((c1),(c2),(c3),(c4));
			 	 	 	 }
			 	 	 }
			 	 }
			 }
			#undef S0
			if(_errors_ == 0){
				printf("TEST PASSED\n");
			}else{
				printf("TEST FAILED\n");
			}
		}
		{
			//Error Counter
			int _errors_ = 0;
			#define S0(i1,j1,i2,j2) if (fabs(1.0 - var_auxqia10_verify(i1,j1,i2,j2)/var_auxqia10(i1,j1,i2,j2)) > EPSILON) _errors_++;
			int c1,c2,c3,c4;
			for(c1=0;c1 <= N-1;c1+=1)
			 {
			 	for(c2=c1;c2 <= N-1;c2+=1)
			 	 {
			 	 	for(c3=0;c3 <= M-1;c3+=1)
			 	 	 {
			 	 	 	for(c4=c3;c4 <= M-1;c4+=1)
			 	 	 	 {
			 	 	 	 	S0((c1),(c2),(c3),(c4));
			 	 	 	 }
			 	 	 }
			 	 }
			 }
			#undef S0
			if(_errors_ == 0){
				printf("TEST PASSED\n");
			}else{
				printf("TEST FAILED\n");
			}
		}
		{
			//Error Counter
			int _errors_ = 0;
			#define S0(i1,j1,i2,j2) if (fabs(1.0 - var_auxqia11_verify(i1,j1,i2,j2)/var_auxqia11(i1,j1,i2,j2)) > EPSILON) _errors_++;
			int c1,c2,c3,c4;
			for(c1=0;c1 <= N-1;c1+=1)
			 {
			 	for(c2=c1;c2 <= N-1;c2+=1)
			 	 {
			 	 	for(c3=0;c3 <= M-1;c3+=1)
			 	 	 {
			 	 	 	for(c4=c3;c4 <= M-1;c4+=1)
			 	 	 	 {
			 	 	 	 	S0((c1),(c2),(c3),(c4));
			 	 	 	 }
			 	 	 }
			 	 }
			 }
			#undef S0
			if(_errors_ == 0){
				printf("TEST PASSED\n");
			}else{
				printf("TEST FAILED\n");
			}
		}*/
    #endif
    
	//Memory Free
	free(seq0);
	free(seqr);
	free(seq1);
	free(_lin_Q00);
	free(Q00);
	free(_lin_Q10);
	free(Q10);
	free(_lin_Qi);
	for (mz1=0;mz1 < N; mz1++) {
		for (mz2=0;mz2 < N; mz2++) {
			free(Qi[mz1][mz2]);
		}
		free(Qi[mz1]);
	}
	free(Qi);
	free(_lin_Qiy);
	for (mz1=0;mz1 < N; mz1++) {
		for (mz2=0;mz2 < N; mz2++) {
			free(Qiy[mz1][mz2]);
		}
		free(Qiy[mz1]);
	}
	free(Qiy);
	free(_lin_Qixm00);
	for (mz1=0;mz1 < N; mz1++) {
		for (mz2=0;mz2 < N; mz2++) {
			free(Qixm00[mz1][mz2]);
		}
		free(Qixm00[mz1]);
	}
	free(Qixm00);
	free(_lin_Qixm01);
	for (mz1=0;mz1 < N; mz1++) {
		for (mz2=0;mz2 < N; mz2++) {
			free(Qixm01[mz1][mz2]);
		}
		free(Qixm01[mz1]);
	}
	free(Qixm01);
	free(_lin_Qixm02);
	for (mz1=0;mz1 < N; mz1++) {
		for (mz2=0;mz2 < N; mz2++) {
			free(Qixm02[mz1][mz2]);
		}
		free(Qixm02[mz1]);
	}
	free(Qixm02);
	free(_lin_Qixm10);
	for (mz1=0;mz1 < N; mz1++) {
		for (mz2=0;mz2 < N; mz2++) {
			free(Qixm10[mz1][mz2]);
		}
		free(Qixm10[mz1]);
	}
	free(Qixm10);
	free(_lin_Qixm11);
	for (mz1=0;mz1 < N; mz1++) {
		for (mz2=0;mz2 < N; mz2++) {
			free(Qixm11[mz1][mz2]);
		}
		free(Qixm11[mz1]);
	}
	free(Qixm11);
	free(_lin_Qixm12);
	for (mz1=0;mz1 < N; mz1++) {
		for (mz2=0;mz2 < N; mz2++) {
			free(Qixm12[mz1][mz2]);
		}
		free(Qixm12[mz1]);
	}
	free(Qixm12);
	free(_lin_Qixk00);
	for (mz1=0;mz1 < N; mz1++) {
		for (mz2=0;mz2 < N; mz2++) {
			free(Qixk00[mz1][mz2]);
		}
		free(Qixk00[mz1]);
	}
	free(Qixk00);
	free(_lin_Qixk01);
	for (mz1=0;mz1 < N; mz1++) {
		for (mz2=0;mz2 < N; mz2++) {
			free(Qixk01[mz1][mz2]);
		}
		free(Qixk01[mz1]);
	}
	free(Qixk01);
	free(_lin_Qixk10);
	for (mz1=0;mz1 < N; mz1++) {
		for (mz2=0;mz2 < N; mz2++) {
			free(Qixk10[mz1][mz2]);
		}
		free(Qixk10[mz1]);
	}
	free(Qixk10);
	free(_lin_Qixk11);
	for (mz1=0;mz1 < N; mz1++) {
		for (mz2=0;mz2 < N; mz2++) {
			free(Qixk11[mz1][mz2]);
		}
		free(Qixk11[mz1]);
	}
	free(Qixk11);
	free(_lin_Qimm02);
	for (mz1=0;mz1 < N; mz1++) {
		for (mz2=0;mz2 < N; mz2++) {
			free(Qimm02[mz1][mz2]);
		}
		free(Qimm02[mz1]);
	}
	free(Qimm02);
	free(_lin_Qimm12);
	for (mz1=0;mz1 < N; mz1++) {
		for (mz2=0;mz2 < N; mz2++) {
			free(Qimm12[mz1][mz2]);
		}
		free(Qimm12[mz1]);
	}
	free(Qimm12);
	free(_lin_Qimm20);
	for (mz1=0;mz1 < N; mz1++) {
		for (mz2=0;mz2 < N; mz2++) {
			free(Qimm20[mz1][mz2]);
		}
		free(Qimm20[mz1]);
	}
	free(Qimm20);
	free(_lin_Qimm21);
	for (mz1=0;mz1 < N; mz1++) {
		for (mz2=0;mz2 < N; mz2++) {
			free(Qimm21[mz1][mz2]);
		}
		free(Qimm21[mz1]);
	}
	free(Qimm21);
	free(_lin_Qimm22);
	for (mz1=0;mz1 < N; mz1++) {
		for (mz2=0;mz2 < N; mz2++) {
			free(Qimm22[mz1][mz2]);
		}
		free(Qimm22[mz1]);
	}
	free(Qimm22);
	free(_lin_Qimk01);
	for (mz1=0;mz1 < N; mz1++) {
		for (mz2=0;mz2 < N; mz2++) {
			free(Qimk01[mz1][mz2]);
		}
		free(Qimk01[mz1]);
	}
	free(Qimk01);
	free(_lin_Qimk11);
	for (mz1=0;mz1 < N; mz1++) {
		for (mz2=0;mz2 < N; mz2++) {
			free(Qimk11[mz1][mz2]);
		}
		free(Qimk11[mz1]);
	}
	free(Qimk11);
	free(_lin_Qimk20);
	for (mz1=0;mz1 < N; mz1++) {
		for (mz2=0;mz2 < N; mz2++) {
			free(Qimk20[mz1][mz2]);
		}
		free(Qimk20[mz1]);
	}
	free(Qimk20);
	free(_lin_Qimk21);
	for (mz1=0;mz1 < N; mz1++) {
		for (mz2=0;mz2 < N; mz2++) {
			free(Qimk21[mz1][mz2]);
		}
		free(Qimk21[mz1]);
	}
	free(Qimk21);
	free(_lin_Qikm10);
	for (mz1=0;mz1 < N; mz1++) {
		for (mz2=0;mz2 < N; mz2++) {
			free(Qikm10[mz1][mz2]);
		}
		free(Qikm10[mz1]);
	}
	free(Qikm10);
	free(_lin_Qikm11);
	for (mz1=0;mz1 < N; mz1++) {
		for (mz2=0;mz2 < N; mz2++) {
			free(Qikm11[mz1][mz2]);
		}
		free(Qikm11[mz1]);
	}
	free(Qikm11);
	free(_lin_Qikm02);
	for (mz1=0;mz1 < N; mz1++) {
		for (mz2=0;mz2 < N; mz2++) {
			free(Qikm02[mz1][mz2]);
		}
		free(Qikm02[mz1]);
	}
	free(Qikm02);
	free(_lin_Qikm12);
	for (mz1=0;mz1 < N; mz1++) {
		for (mz2=0;mz2 < N; mz2++) {
			free(Qikm12[mz1][mz2]);
		}
		free(Qikm12[mz1]);
	}
	free(Qikm12);
	free(_lin_Qikk01);
	for (mz1=0;mz1 < N; mz1++) {
		for (mz2=0;mz2 < N; mz2++) {
			free(Qikk01[mz1][mz2]);
		}
		free(Qikk01[mz1]);
	}
	free(Qikk01);
	free(_lin_Qikk10);
	for (mz1=0;mz1 < N; mz1++) {
		for (mz2=0;mz2 < N; mz2++) {
			free(Qikk10[mz1][mz2]);
		}
		free(Qikk10[mz1]);
	}
	free(Qikk10);
	free(_lin_Qikk11);
	for (mz1=0;mz1 < N; mz1++) {
		for (mz2=0;mz2 < N; mz2++) {
			free(Qikk11[mz1][mz2]);
		}
		free(Qikk11[mz1]);
	}
	free(Qikk11);
	free(_lin_Qiann01);
	for (mz1=0;mz1 < N; mz1++) {
		for (mz2=0;mz2 < N; mz2++) {
			free(Qiann01[mz1][mz2]);
		}
		free(Qiann01[mz1]);
	}
	free(Qiann01);
	free(_lin_Qiann02);
	for (mz1=0;mz1 < N; mz1++) {
		for (mz2=0;mz2 < N; mz2++) {
			free(Qiann02[mz1][mz2]);
		}
		free(Qiann02[mz1]);
	}
	free(Qiann02);
	free(_lin_Qiann10);
	for (mz1=0;mz1 < N; mz1++) {
		for (mz2=0;mz2 < N; mz2++) {
			free(Qiann10[mz1][mz2]);
		}
		free(Qiann10[mz1]);
	}
	free(Qiann10);
	free(_lin_Qiann11);
	for (mz1=0;mz1 < N; mz1++) {
		for (mz2=0;mz2 < N; mz2++) {
			free(Qiann11[mz1][mz2]);
		}
		free(Qiann11[mz1]);
	}
	free(Qiann11);
	free(_lin_Qiann12);
	for (mz1=0;mz1 < N; mz1++) {
		for (mz2=0;mz2 < N; mz2++) {
			free(Qiann12[mz1][mz2]);
		}
		free(Qiann12[mz1]);
	}
	free(Qiann12);
	free(_lin_Qiann20);
	for (mz1=0;mz1 < N; mz1++) {
		for (mz2=0;mz2 < N; mz2++) {
			free(Qiann20[mz1][mz2]);
		}
		free(Qiann20[mz1]);
	}
	free(Qiann20);
	free(_lin_Qiann21);
	for (mz1=0;mz1 < N; mz1++) {
		for (mz2=0;mz2 < N; mz2++) {
			free(Qiann21[mz1][mz2]);
		}
		free(Qiann21[mz1]);
	}
	free(Qiann21);
	free(_lin_Qiann22);
	for (mz1=0;mz1 < N; mz1++) {
		for (mz2=0;mz2 < N; mz2++) {
			free(Qiann22[mz1][mz2]);
		}
		free(Qiann22[mz1]);
	}
	free(Qiann22);
	free(_lin_Qiand01);
	for (mz1=0;mz1 < N; mz1++) {
		for (mz2=0;mz2 < N; mz2++) {
			free(Qiand01[mz1][mz2]);
		}
		free(Qiand01[mz1]);
	}
	free(Qiand01);
	free(_lin_Qiand10);
	for (mz1=0;mz1 < N; mz1++) {
		for (mz2=0;mz2 < N; mz2++) {
			free(Qiand10[mz1][mz2]);
		}
		free(Qiand10[mz1]);
	}
	free(Qiand10);
	free(_lin_Qiand11);
	for (mz1=0;mz1 < N; mz1++) {
		for (mz2=0;mz2 < N; mz2++) {
			free(Qiand11[mz1][mz2]);
		}
		free(Qiand11[mz1]);
	}
	free(Qiand11);
	free(_lin_Qiand20);
	for (mz1=0;mz1 < N; mz1++) {
		for (mz2=0;mz2 < N; mz2++) {
			free(Qiand20[mz1][mz2]);
		}
		free(Qiand20[mz1]);
	}
	free(Qiand20);
	free(_lin_Qiand21);
	for (mz1=0;mz1 < N; mz1++) {
		for (mz2=0;mz2 < N; mz2++) {
			free(Qiand21[mz1][mz2]);
		}
		free(Qiand21[mz1]);
	}
	free(Qiand21);
	free(_lin_Qiadn01);
	for (mz1=0;mz1 < N; mz1++) {
		for (mz2=0;mz2 < N; mz2++) {
			free(Qiadn01[mz1][mz2]);
		}
		free(Qiadn01[mz1]);
	}
	free(Qiadn01);
	free(_lin_Qiadn02);
	for (mz1=0;mz1 < N; mz1++) {
		for (mz2=0;mz2 < N; mz2++) {
			free(Qiadn02[mz1][mz2]);
		}
		free(Qiadn02[mz1]);
	}
	free(Qiadn02);
	free(_lin_Qiadn10);
	for (mz1=0;mz1 < N; mz1++) {
		for (mz2=0;mz2 < N; mz2++) {
			free(Qiadn10[mz1][mz2]);
		}
		free(Qiadn10[mz1]);
	}
	free(Qiadn10);
	free(_lin_Qiadn11);
	for (mz1=0;mz1 < N; mz1++) {
		for (mz2=0;mz2 < N; mz2++) {
			free(Qiadn11[mz1][mz2]);
		}
		free(Qiadn11[mz1]);
	}
	free(Qiadn11);
	free(_lin_Qiadn12);
	for (mz1=0;mz1 < N; mz1++) {
		for (mz2=0;mz2 < N; mz2++) {
			free(Qiadn12[mz1][mz2]);
		}
		free(Qiadn12[mz1]);
	}
	free(Qiadn12);
	free(_lin_Qiadd01);
	for (mz1=0;mz1 < N; mz1++) {
		for (mz2=0;mz2 < N; mz2++) {
			free(Qiadd01[mz1][mz2]);
		}
		free(Qiadd01[mz1]);
	}
	free(Qiadd01);
	free(_lin_Qiadd10);
	for (mz1=0;mz1 < N; mz1++) {
		for (mz2=0;mz2 < N; mz2++) {
			free(Qiadd10[mz1][mz2]);
		}
		free(Qiadd10[mz1]);
	}
	free(Qiadd10);
	free(_lin_Qiadd11);
	for (mz1=0;mz1 < N; mz1++) {
		for (mz2=0;mz2 < N; mz2++) {
			free(Qiadd11[mz1][mz2]);
		}
		free(Qiadd11[mz1]);
	}
	free(Qiadd11);
	free(_lin_Qiar01);
	for (mz1=0;mz1 < N; mz1++) {
		for (mz2=0;mz2 < N; mz2++) {
			free(Qiar01[mz1][mz2]);
		}
		free(Qiar01[mz1]);
	}
	free(Qiar01);
	free(_lin_Qiar10);
	for (mz1=0;mz1 < N; mz1++) {
		for (mz2=0;mz2 < N; mz2++) {
			free(Qiar10[mz1][mz2]);
		}
		free(Qiar10[mz1]);
	}
	free(Qiar10);
	free(_lin_Qiar11);
	for (mz1=0;mz1 < N; mz1++) {
		for (mz2=0;mz2 < N; mz2++) {
			free(Qiar11[mz1][mz2]);
		}
		free(Qiar11[mz1]);
	}
	free(Qiar11);
	free(_lin_Qilr01);
	for (mz1=0;mz1 < N; mz1++) {
		for (mz2=0;mz2 < N; mz2++) {
			free(Qilr01[mz1][mz2]);
		}
		free(Qilr01[mz1]);
	}
	free(Qilr01);
	free(_lin_Qilr10);
	for (mz1=0;mz1 < N; mz1++) {
		for (mz2=0;mz2 < N; mz2++) {
			free(Qilr10[mz1][mz2]);
		}
		free(Qilr10[mz1]);
	}
	free(Qilr10);
	free(_lin_Qilr11);
	for (mz1=0;mz1 < N; mz1++) {
		for (mz2=0;mz2 < N; mz2++) {
			free(Qilr11[mz1][mz2]);
		}
		free(Qilr11[mz1]);
	}
	free(Qilr11);
	free(_lin_Qir01);
	for (mz1=0;mz1 < N; mz1++) {
		for (mz2=0;mz2 < N; mz2++) {
			free(Qir01[mz1][mz2]);
		}
		free(Qir01[mz1]);
	}
	free(Qir01);
	free(_lin_Qir10);
	for (mz1=0;mz1 < N; mz1++) {
		for (mz2=0;mz2 < N; mz2++) {
			free(Qir10[mz1][mz2]);
		}
		free(Qir10[mz1]);
	}
	free(Qir10);
	free(_lin_Qir11);
	for (mz1=0;mz1 < N; mz1++) {
		for (mz2=0;mz2 < N; mz2++) {
			free(Qir11[mz1][mz2]);
		}
		free(Qir11[mz1]);
	}
	free(Qir11);
	free(_lin_Qia);
	for (mz1=0;mz1 < N; mz1++) {
		for (mz2=0;mz2 < N; mz2++) {
			free(Qia[mz1][mz2]);
		}
		free(Qia[mz1]);
	}
	free(Qia);
	free(_lin_Qib00);
	for (mz1=0;mz1 < N; mz1++) {
		for (mz2=0;mz2 < N; mz2++) {
			free(Qib00[mz1][mz2]);
		}
		free(Qib00[mz1]);
	}
	free(Qib00);
	free(_lin_Qib01);
	for (mz1=0;mz1 < N; mz1++) {
		for (mz2=0;mz2 < N; mz2++) {
			free(Qib01[mz1][mz2]);
		}
		free(Qib01[mz1]);
	}
	free(Qib01);
	free(_lin_Qib10);
	for (mz1=0;mz1 < N; mz1++) {
		for (mz2=0;mz2 < N; mz2++) {
			free(Qib10[mz1][mz2]);
		}
		free(Qib10[mz1]);
	}
	free(Qib10);
	free(_lin_Qib11);
	for (mz1=0;mz1 < N; mz1++) {
		for (mz2=0;mz2 < N; mz2++) {
			free(Qib11[mz1][mz2]);
		}
		free(Qib11[mz1]);
	}
	free(Qib11);
	free(_lin_Qinn01);
	for (mz1=0;mz1 < N; mz1++) {
		for (mz2=0;mz2 < N; mz2++) {
			free(Qinn01[mz1][mz2]);
		}
		free(Qinn01[mz1]);
	}
	free(Qinn01);
	free(_lin_Qinn02);
	for (mz1=0;mz1 < N; mz1++) {
		for (mz2=0;mz2 < N; mz2++) {
			free(Qinn02[mz1][mz2]);
		}
		free(Qinn02[mz1]);
	}
	free(Qinn02);
	free(_lin_Qinn10);
	for (mz1=0;mz1 < N; mz1++) {
		for (mz2=0;mz2 < N; mz2++) {
			free(Qinn10[mz1][mz2]);
		}
		free(Qinn10[mz1]);
	}
	free(Qinn10);
	free(_lin_Qinn11);
	for (mz1=0;mz1 < N; mz1++) {
		for (mz2=0;mz2 < N; mz2++) {
			free(Qinn11[mz1][mz2]);
		}
		free(Qinn11[mz1]);
	}
	free(Qinn11);
	free(_lin_Qinn12);
	for (mz1=0;mz1 < N; mz1++) {
		for (mz2=0;mz2 < N; mz2++) {
			free(Qinn12[mz1][mz2]);
		}
		free(Qinn12[mz1]);
	}
	free(Qinn12);
	free(_lin_Qinn20);
	for (mz1=0;mz1 < N; mz1++) {
		for (mz2=0;mz2 < N; mz2++) {
			free(Qinn20[mz1][mz2]);
		}
		free(Qinn20[mz1]);
	}
	free(Qinn20);
	free(_lin_Qinn21);
	for (mz1=0;mz1 < N; mz1++) {
		for (mz2=0;mz2 < N; mz2++) {
			free(Qinn21[mz1][mz2]);
		}
		free(Qinn21[mz1]);
	}
	free(Qinn21);
	free(_lin_Qinn22);
	for (mz1=0;mz1 < N; mz1++) {
		for (mz2=0;mz2 < N; mz2++) {
			free(Qinn22[mz1][mz2]);
		}
		free(Qinn22[mz1]);
	}
	free(Qinn22);
	free(_lin_Qind01);
	for (mz1=0;mz1 < N; mz1++) {
		for (mz2=0;mz2 < N; mz2++) {
			free(Qind01[mz1][mz2]);
		}
		free(Qind01[mz1]);
	}
	free(Qind01);
	free(_lin_Qind10);
	for (mz1=0;mz1 < N; mz1++) {
		for (mz2=0;mz2 < N; mz2++) {
			free(Qind10[mz1][mz2]);
		}
		free(Qind10[mz1]);
	}
	free(Qind10);
	free(_lin_Qind11);
	for (mz1=0;mz1 < N; mz1++) {
		for (mz2=0;mz2 < N; mz2++) {
			free(Qind11[mz1][mz2]);
		}
		free(Qind11[mz1]);
	}
	free(Qind11);
	free(_lin_Qind20);
	for (mz1=0;mz1 < N; mz1++) {
		for (mz2=0;mz2 < N; mz2++) {
			free(Qind20[mz1][mz2]);
		}
		free(Qind20[mz1]);
	}
	free(Qind20);
	free(_lin_Qind21);
	for (mz1=0;mz1 < N; mz1++) {
		for (mz2=0;mz2 < N; mz2++) {
			free(Qind21[mz1][mz2]);
		}
		free(Qind21[mz1]);
	}
	free(Qind21);
	free(_lin_Qidn01);
	for (mz1=0;mz1 < N; mz1++) {
		for (mz2=0;mz2 < N; mz2++) {
			free(Qidn01[mz1][mz2]);
		}
		free(Qidn01[mz1]);
	}
	free(Qidn01);
	free(_lin_Qidn02);
	for (mz1=0;mz1 < N; mz1++) {
		for (mz2=0;mz2 < N; mz2++) {
			free(Qidn02[mz1][mz2]);
		}
		free(Qidn02[mz1]);
	}
	free(Qidn02);
	free(_lin_Qidn10);
	for (mz1=0;mz1 < N; mz1++) {
		for (mz2=0;mz2 < N; mz2++) {
			free(Qidn10[mz1][mz2]);
		}
		free(Qidn10[mz1]);
	}
	free(Qidn10);
	free(_lin_Qidn11);
	for (mz1=0;mz1 < N; mz1++) {
		for (mz2=0;mz2 < N; mz2++) {
			free(Qidn11[mz1][mz2]);
		}
		free(Qidn11[mz1]);
	}
	free(Qidn11);
	free(_lin_Qidn12);
	for (mz1=0;mz1 < N; mz1++) {
		for (mz2=0;mz2 < N; mz2++) {
			free(Qidn12[mz1][mz2]);
		}
		free(Qidn12[mz1]);
	}
	free(Qidn12);
	free(_lin_Qidd01);
	for (mz1=0;mz1 < N; mz1++) {
		for (mz2=0;mz2 < N; mz2++) {
			free(Qidd01[mz1][mz2]);
		}
		free(Qidd01[mz1]);
	}
	free(Qidd01);
	free(_lin_Qidd10);
	for (mz1=0;mz1 < N; mz1++) {
		for (mz2=0;mz2 < N; mz2++) {
			free(Qidd10[mz1][mz2]);
		}
		free(Qidd10[mz1]);
	}
	free(Qidd10);
	free(_lin_Qidd11);
	for (mz1=0;mz1 < N; mz1++) {
		for (mz2=0;mz2 < N; mz2++) {
			free(Qidd11[mz1][mz2]);
		}
		free(Qidd11[mz1]);
	}
	free(Qidd11);
	free(_lin_Qix00);
	for (mz1=0;mz1 < N; mz1++) {
		for (mz2=0;mz2 < N; mz2++) {
			free(Qix00[mz1][mz2]);
		}
		free(Qix00[mz1]);
	}
	free(Qix00);
	free(_lin_Qix01);
	for (mz1=0;mz1 < N; mz1++) {
		for (mz2=0;mz2 < N; mz2++) {
			free(Qix01[mz1][mz2]);
		}
		free(Qix01[mz1]);
	}
	free(Qix01);
	free(_lin_Qix10);
	for (mz1=0;mz1 < N; mz1++) {
		for (mz2=0;mz2 < N; mz2++) {
			free(Qix10[mz1][mz2]);
		}
		free(Qix10[mz1]);
	}
	free(Qix10);
	free(_lin_Qix11);
	for (mz1=0;mz1 < N; mz1++) {
		for (mz2=0;mz2 < N; mz2++) {
			free(Qix11[mz1][mz2]);
		}
		free(Qix11[mz1]);
	}
	free(Qix11);
	free(_lin_auxqiadd01);
	for (mz1=0;mz1 < N; mz1++) {
		for (mz2=0;mz2 < N; mz2++) {
			free(auxqiadd01[mz1][mz2]);
		}
		free(auxqiadd01[mz1]);
	}
	free(auxqiadd01);
	free(_lin_auxqiadd10);
	for (mz1=0;mz1 < N; mz1++) {
		for (mz2=0;mz2 < N; mz2++) {
			free(auxqiadd10[mz1][mz2]);
		}
		free(auxqiadd10[mz1]);
	}
	free(auxqiadd10);
	free(_lin_auxqiadd11);
	for (mz1=0;mz1 < N; mz1++) {
		for (mz2=0;mz2 < N; mz2++) {
			free(auxqiadd11[mz1][mz2]);
		}
		free(auxqiadd11[mz1]);
	}
	free(auxqiadd11);
	free(_lin_auxqia01);
	for (mz1=0;mz1 < N; mz1++) {
		for (mz2=0;mz2 < N; mz2++) {
			free(auxqia01[mz1][mz2]);
		}
		free(auxqia01[mz1]);
	}
	free(auxqia01);
	free(_lin_auxqia10);
	for (mz1=0;mz1 < N; mz1++) {
		for (mz2=0;mz2 < N; mz2++) {
			free(auxqia10[mz1][mz2]);
		}
		free(auxqia10[mz1]);
	}
	free(auxqia10);
	free(_lin_auxqia11);
	for (mz1=0;mz1 < N; mz1++) {
		for (mz2=0;mz2 < N; mz2++) {
			free(auxqia11[mz1][mz2]);
		}
		free(auxqia11[mz1]);
	}
	free(auxqia11);
	#ifdef VERIFY
		free(seq1_verify);
		free(_lin_Q00_verify);
		free(Q00_verify);
		free(_lin_Q10_verify);
		free(Q10_verify);
		free(_lin_Qi_verify);
		for (mz1=0;mz1 < N; mz1++) {
			for (mz2=0;mz2 < N; mz2++) {
				free(Qi[mz1][mz2]_verify);
			}
			free(Qi[mz1]_verify);
		}
		free(Qi_verify);
		free(_lin_Qiy_verify);
		for (mz1=0;mz1 < N; mz1++) {
			for (mz2=0;mz2 < N; mz2++) {
				free(Qiy[mz1][mz2]_verify);
			}
			free(Qiy[mz1]_verify);
		}
		free(Qiy_verify);
		free(_lin_Qixm00_verify);
		for (mz1=0;mz1 < N; mz1++) {
			for (mz2=0;mz2 < N; mz2++) {
				free(Qixm00[mz1][mz2]_verify);
			}
			free(Qixm00[mz1]_verify);
		}
		free(Qixm00_verify);
		free(_lin_Qixm01_verify);
		for (mz1=0;mz1 < N; mz1++) {
			for (mz2=0;mz2 < N; mz2++) {
				free(Qixm01[mz1][mz2]_verify);
			}
			free(Qixm01[mz1]_verify);
		}
		free(Qixm01_verify);
		free(_lin_Qixm02_verify);
		for (mz1=0;mz1 < N; mz1++) {
			for (mz2=0;mz2 < N; mz2++) {
				free(Qixm02[mz1][mz2]_verify);
			}
			free(Qixm02[mz1]_verify);
		}
		free(Qixm02_verify);
		free(_lin_Qixm10_verify);
		for (mz1=0;mz1 < N; mz1++) {
			for (mz2=0;mz2 < N; mz2++) {
				free(Qixm10[mz1][mz2]_verify);
			}
			free(Qixm10[mz1]_verify);
		}
		free(Qixm10_verify);
		free(_lin_Qixm11_verify);
		for (mz1=0;mz1 < N; mz1++) {
			for (mz2=0;mz2 < N; mz2++) {
				free(Qixm11[mz1][mz2]_verify);
			}
			free(Qixm11[mz1]_verify);
		}
		free(Qixm11_verify);
		free(_lin_Qixm12_verify);
		for (mz1=0;mz1 < N; mz1++) {
			for (mz2=0;mz2 < N; mz2++) {
				free(Qixm12[mz1][mz2]_verify);
			}
			free(Qixm12[mz1]_verify);
		}
		free(Qixm12_verify);
		free(_lin_Qixk00_verify);
		for (mz1=0;mz1 < N; mz1++) {
			for (mz2=0;mz2 < N; mz2++) {
				free(Qixk00[mz1][mz2]_verify);
			}
			free(Qixk00[mz1]_verify);
		}
		free(Qixk00_verify);
		free(_lin_Qixk01_verify);
		for (mz1=0;mz1 < N; mz1++) {
			for (mz2=0;mz2 < N; mz2++) {
				free(Qixk01[mz1][mz2]_verify);
			}
			free(Qixk01[mz1]_verify);
		}
		free(Qixk01_verify);
		free(_lin_Qixk10_verify);
		for (mz1=0;mz1 < N; mz1++) {
			for (mz2=0;mz2 < N; mz2++) {
				free(Qixk10[mz1][mz2]_verify);
			}
			free(Qixk10[mz1]_verify);
		}
		free(Qixk10_verify);
		free(_lin_Qixk11_verify);
		for (mz1=0;mz1 < N; mz1++) {
			for (mz2=0;mz2 < N; mz2++) {
				free(Qixk11[mz1][mz2]_verify);
			}
			free(Qixk11[mz1]_verify);
		}
		free(Qixk11_verify);
		free(_lin_Qimm02_verify);
		for (mz1=0;mz1 < N; mz1++) {
			for (mz2=0;mz2 < N; mz2++) {
				free(Qimm02[mz1][mz2]_verify);
			}
			free(Qimm02[mz1]_verify);
		}
		free(Qimm02_verify);
		free(_lin_Qimm12_verify);
		for (mz1=0;mz1 < N; mz1++) {
			for (mz2=0;mz2 < N; mz2++) {
				free(Qimm12[mz1][mz2]_verify);
			}
			free(Qimm12[mz1]_verify);
		}
		free(Qimm12_verify);
		free(_lin_Qimm20_verify);
		for (mz1=0;mz1 < N; mz1++) {
			for (mz2=0;mz2 < N; mz2++) {
				free(Qimm20[mz1][mz2]_verify);
			}
			free(Qimm20[mz1]_verify);
		}
		free(Qimm20_verify);
		free(_lin_Qimm21_verify);
		for (mz1=0;mz1 < N; mz1++) {
			for (mz2=0;mz2 < N; mz2++) {
				free(Qimm21[mz1][mz2]_verify);
			}
			free(Qimm21[mz1]_verify);
		}
		free(Qimm21_verify);
		free(_lin_Qimm22_verify);
		for (mz1=0;mz1 < N; mz1++) {
			for (mz2=0;mz2 < N; mz2++) {
				free(Qimm22[mz1][mz2]_verify);
			}
			free(Qimm22[mz1]_verify);
		}
		free(Qimm22_verify);
		free(_lin_Qimk01_verify);
		for (mz1=0;mz1 < N; mz1++) {
			for (mz2=0;mz2 < N; mz2++) {
				free(Qimk01[mz1][mz2]_verify);
			}
			free(Qimk01[mz1]_verify);
		}
		free(Qimk01_verify);
		free(_lin_Qimk11_verify);
		for (mz1=0;mz1 < N; mz1++) {
			for (mz2=0;mz2 < N; mz2++) {
				free(Qimk11[mz1][mz2]_verify);
			}
			free(Qimk11[mz1]_verify);
		}
		free(Qimk11_verify);
		free(_lin_Qimk20_verify);
		for (mz1=0;mz1 < N; mz1++) {
			for (mz2=0;mz2 < N; mz2++) {
				free(Qimk20[mz1][mz2]_verify);
			}
			free(Qimk20[mz1]_verify);
		}
		free(Qimk20_verify);
		free(_lin_Qimk21_verify);
		for (mz1=0;mz1 < N; mz1++) {
			for (mz2=0;mz2 < N; mz2++) {
				free(Qimk21[mz1][mz2]_verify);
			}
			free(Qimk21[mz1]_verify);
		}
		free(Qimk21_verify);
		free(_lin_Qikm10_verify);
		for (mz1=0;mz1 < N; mz1++) {
			for (mz2=0;mz2 < N; mz2++) {
				free(Qikm10[mz1][mz2]_verify);
			}
			free(Qikm10[mz1]_verify);
		}
		free(Qikm10_verify);
		free(_lin_Qikm11_verify);
		for (mz1=0;mz1 < N; mz1++) {
			for (mz2=0;mz2 < N; mz2++) {
				free(Qikm11[mz1][mz2]_verify);
			}
			free(Qikm11[mz1]_verify);
		}
		free(Qikm11_verify);
		free(_lin_Qikm02_verify);
		for (mz1=0;mz1 < N; mz1++) {
			for (mz2=0;mz2 < N; mz2++) {
				free(Qikm02[mz1][mz2]_verify);
			}
			free(Qikm02[mz1]_verify);
		}
		free(Qikm02_verify);
		free(_lin_Qikm12_verify);
		for (mz1=0;mz1 < N; mz1++) {
			for (mz2=0;mz2 < N; mz2++) {
				free(Qikm12[mz1][mz2]_verify);
			}
			free(Qikm12[mz1]_verify);
		}
		free(Qikm12_verify);
		free(_lin_Qikk01_verify);
		for (mz1=0;mz1 < N; mz1++) {
			for (mz2=0;mz2 < N; mz2++) {
				free(Qikk01[mz1][mz2]_verify);
			}
			free(Qikk01[mz1]_verify);
		}
		free(Qikk01_verify);
		free(_lin_Qikk10_verify);
		for (mz1=0;mz1 < N; mz1++) {
			for (mz2=0;mz2 < N; mz2++) {
				free(Qikk10[mz1][mz2]_verify);
			}
			free(Qikk10[mz1]_verify);
		}
		free(Qikk10_verify);
		free(_lin_Qikk11_verify);
		for (mz1=0;mz1 < N; mz1++) {
			for (mz2=0;mz2 < N; mz2++) {
				free(Qikk11[mz1][mz2]_verify);
			}
			free(Qikk11[mz1]_verify);
		}
		free(Qikk11_verify);
		free(_lin_Qiann01_verify);
		for (mz1=0;mz1 < N; mz1++) {
			for (mz2=0;mz2 < N; mz2++) {
				free(Qiann01[mz1][mz2]_verify);
			}
			free(Qiann01[mz1]_verify);
		}
		free(Qiann01_verify);
		free(_lin_Qiann02_verify);
		for (mz1=0;mz1 < N; mz1++) {
			for (mz2=0;mz2 < N; mz2++) {
				free(Qiann02[mz1][mz2]_verify);
			}
			free(Qiann02[mz1]_verify);
		}
		free(Qiann02_verify);
		free(_lin_Qiann10_verify);
		for (mz1=0;mz1 < N; mz1++) {
			for (mz2=0;mz2 < N; mz2++) {
				free(Qiann10[mz1][mz2]_verify);
			}
			free(Qiann10[mz1]_verify);
		}
		free(Qiann10_verify);
		free(_lin_Qiann11_verify);
		for (mz1=0;mz1 < N; mz1++) {
			for (mz2=0;mz2 < N; mz2++) {
				free(Qiann11[mz1][mz2]_verify);
			}
			free(Qiann11[mz1]_verify);
		}
		free(Qiann11_verify);
		free(_lin_Qiann12_verify);
		for (mz1=0;mz1 < N; mz1++) {
			for (mz2=0;mz2 < N; mz2++) {
				free(Qiann12[mz1][mz2]_verify);
			}
			free(Qiann12[mz1]_verify);
		}
		free(Qiann12_verify);
		free(_lin_Qiann20_verify);
		for (mz1=0;mz1 < N; mz1++) {
			for (mz2=0;mz2 < N; mz2++) {
				free(Qiann20[mz1][mz2]_verify);
			}
			free(Qiann20[mz1]_verify);
		}
		free(Qiann20_verify);
		free(_lin_Qiann21_verify);
		for (mz1=0;mz1 < N; mz1++) {
			for (mz2=0;mz2 < N; mz2++) {
				free(Qiann21[mz1][mz2]_verify);
			}
			free(Qiann21[mz1]_verify);
		}
		free(Qiann21_verify);
		free(_lin_Qiann22_verify);
		for (mz1=0;mz1 < N; mz1++) {
			for (mz2=0;mz2 < N; mz2++) {
				free(Qiann22[mz1][mz2]_verify);
			}
			free(Qiann22[mz1]_verify);
		}
		free(Qiann22_verify);
		free(_lin_Qiand01_verify);
		for (mz1=0;mz1 < N; mz1++) {
			for (mz2=0;mz2 < N; mz2++) {
				free(Qiand01[mz1][mz2]_verify);
			}
			free(Qiand01[mz1]_verify);
		}
		free(Qiand01_verify);
		free(_lin_Qiand10_verify);
		for (mz1=0;mz1 < N; mz1++) {
			for (mz2=0;mz2 < N; mz2++) {
				free(Qiand10[mz1][mz2]_verify);
			}
			free(Qiand10[mz1]_verify);
		}
		free(Qiand10_verify);
		free(_lin_Qiand11_verify);
		for (mz1=0;mz1 < N; mz1++) {
			for (mz2=0;mz2 < N; mz2++) {
				free(Qiand11[mz1][mz2]_verify);
			}
			free(Qiand11[mz1]_verify);
		}
		free(Qiand11_verify);
		free(_lin_Qiand20_verify);
		for (mz1=0;mz1 < N; mz1++) {
			for (mz2=0;mz2 < N; mz2++) {
				free(Qiand20[mz1][mz2]_verify);
			}
			free(Qiand20[mz1]_verify);
		}
		free(Qiand20_verify);
		free(_lin_Qiand21_verify);
		for (mz1=0;mz1 < N; mz1++) {
			for (mz2=0;mz2 < N; mz2++) {
				free(Qiand21[mz1][mz2]_verify);
			}
			free(Qiand21[mz1]_verify);
		}
		free(Qiand21_verify);
		free(_lin_Qiadn01_verify);
		for (mz1=0;mz1 < N; mz1++) {
			for (mz2=0;mz2 < N; mz2++) {
				free(Qiadn01[mz1][mz2]_verify);
			}
			free(Qiadn01[mz1]_verify);
		}
		free(Qiadn01_verify);
		free(_lin_Qiadn02_verify);
		for (mz1=0;mz1 < N; mz1++) {
			for (mz2=0;mz2 < N; mz2++) {
				free(Qiadn02[mz1][mz2]_verify);
			}
			free(Qiadn02[mz1]_verify);
		}
		free(Qiadn02_verify);
		free(_lin_Qiadn10_verify);
		for (mz1=0;mz1 < N; mz1++) {
			for (mz2=0;mz2 < N; mz2++) {
				free(Qiadn10[mz1][mz2]_verify);
			}
			free(Qiadn10[mz1]_verify);
		}
		free(Qiadn10_verify);
		free(_lin_Qiadn11_verify);
		for (mz1=0;mz1 < N; mz1++) {
			for (mz2=0;mz2 < N; mz2++) {
				free(Qiadn11[mz1][mz2]_verify);
			}
			free(Qiadn11[mz1]_verify);
		}
		free(Qiadn11_verify);
		free(_lin_Qiadn12_verify);
		for (mz1=0;mz1 < N; mz1++) {
			for (mz2=0;mz2 < N; mz2++) {
				free(Qiadn12[mz1][mz2]_verify);
			}
			free(Qiadn12[mz1]_verify);
		}
		free(Qiadn12_verify);
		free(_lin_Qiadd01_verify);
		for (mz1=0;mz1 < N; mz1++) {
			for (mz2=0;mz2 < N; mz2++) {
				free(Qiadd01[mz1][mz2]_verify);
			}
			free(Qiadd01[mz1]_verify);
		}
		free(Qiadd01_verify);
		free(_lin_Qiadd10_verify);
		for (mz1=0;mz1 < N; mz1++) {
			for (mz2=0;mz2 < N; mz2++) {
				free(Qiadd10[mz1][mz2]_verify);
			}
			free(Qiadd10[mz1]_verify);
		}
		free(Qiadd10_verify);
		free(_lin_Qiadd11_verify);
		for (mz1=0;mz1 < N; mz1++) {
			for (mz2=0;mz2 < N; mz2++) {
				free(Qiadd11[mz1][mz2]_verify);
			}
			free(Qiadd11[mz1]_verify);
		}
		free(Qiadd11_verify);
		free(_lin_Qiar01_verify);
		for (mz1=0;mz1 < N; mz1++) {
			for (mz2=0;mz2 < N; mz2++) {
				free(Qiar01[mz1][mz2]_verify);
			}
			free(Qiar01[mz1]_verify);
		}
		free(Qiar01_verify);
		free(_lin_Qiar10_verify);
		for (mz1=0;mz1 < N; mz1++) {
			for (mz2=0;mz2 < N; mz2++) {
				free(Qiar10[mz1][mz2]_verify);
			}
			free(Qiar10[mz1]_verify);
		}
		free(Qiar10_verify);
		free(_lin_Qiar11_verify);
		for (mz1=0;mz1 < N; mz1++) {
			for (mz2=0;mz2 < N; mz2++) {
				free(Qiar11[mz1][mz2]_verify);
			}
			free(Qiar11[mz1]_verify);
		}
		free(Qiar11_verify);
		free(_lin_Qilr01_verify);
		for (mz1=0;mz1 < N; mz1++) {
			for (mz2=0;mz2 < N; mz2++) {
				free(Qilr01[mz1][mz2]_verify);
			}
			free(Qilr01[mz1]_verify);
		}
		free(Qilr01_verify);
		free(_lin_Qilr10_verify);
		for (mz1=0;mz1 < N; mz1++) {
			for (mz2=0;mz2 < N; mz2++) {
				free(Qilr10[mz1][mz2]_verify);
			}
			free(Qilr10[mz1]_verify);
		}
		free(Qilr10_verify);
		free(_lin_Qilr11_verify);
		for (mz1=0;mz1 < N; mz1++) {
			for (mz2=0;mz2 < N; mz2++) {
				free(Qilr11[mz1][mz2]_verify);
			}
			free(Qilr11[mz1]_verify);
		}
		free(Qilr11_verify);
		free(_lin_Qir01_verify);
		for (mz1=0;mz1 < N; mz1++) {
			for (mz2=0;mz2 < N; mz2++) {
				free(Qir01[mz1][mz2]_verify);
			}
			free(Qir01[mz1]_verify);
		}
		free(Qir01_verify);
		free(_lin_Qir10_verify);
		for (mz1=0;mz1 < N; mz1++) {
			for (mz2=0;mz2 < N; mz2++) {
				free(Qir10[mz1][mz2]_verify);
			}
			free(Qir10[mz1]_verify);
		}
		free(Qir10_verify);
		free(_lin_Qir11_verify);
		for (mz1=0;mz1 < N; mz1++) {
			for (mz2=0;mz2 < N; mz2++) {
				free(Qir11[mz1][mz2]_verify);
			}
			free(Qir11[mz1]_verify);
		}
		free(Qir11_verify);
		free(_lin_Qia_verify);
		for (mz1=0;mz1 < N; mz1++) {
			for (mz2=0;mz2 < N; mz2++) {
				free(Qia[mz1][mz2]_verify);
			}
			free(Qia[mz1]_verify);
		}
		free(Qia_verify);
		free(_lin_Qib00_verify);
		for (mz1=0;mz1 < N; mz1++) {
			for (mz2=0;mz2 < N; mz2++) {
				free(Qib00[mz1][mz2]_verify);
			}
			free(Qib00[mz1]_verify);
		}
		free(Qib00_verify);
		free(_lin_Qib01_verify);
		for (mz1=0;mz1 < N; mz1++) {
			for (mz2=0;mz2 < N; mz2++) {
				free(Qib01[mz1][mz2]_verify);
			}
			free(Qib01[mz1]_verify);
		}
		free(Qib01_verify);
		free(_lin_Qib10_verify);
		for (mz1=0;mz1 < N; mz1++) {
			for (mz2=0;mz2 < N; mz2++) {
				free(Qib10[mz1][mz2]_verify);
			}
			free(Qib10[mz1]_verify);
		}
		free(Qib10_verify);
		free(_lin_Qib11_verify);
		for (mz1=0;mz1 < N; mz1++) {
			for (mz2=0;mz2 < N; mz2++) {
				free(Qib11[mz1][mz2]_verify);
			}
			free(Qib11[mz1]_verify);
		}
		free(Qib11_verify);
		free(_lin_Qinn01_verify);
		for (mz1=0;mz1 < N; mz1++) {
			for (mz2=0;mz2 < N; mz2++) {
				free(Qinn01[mz1][mz2]_verify);
			}
			free(Qinn01[mz1]_verify);
		}
		free(Qinn01_verify);
		free(_lin_Qinn02_verify);
		for (mz1=0;mz1 < N; mz1++) {
			for (mz2=0;mz2 < N; mz2++) {
				free(Qinn02[mz1][mz2]_verify);
			}
			free(Qinn02[mz1]_verify);
		}
		free(Qinn02_verify);
		free(_lin_Qinn10_verify);
		for (mz1=0;mz1 < N; mz1++) {
			for (mz2=0;mz2 < N; mz2++) {
				free(Qinn10[mz1][mz2]_verify);
			}
			free(Qinn10[mz1]_verify);
		}
		free(Qinn10_verify);
		free(_lin_Qinn11_verify);
		for (mz1=0;mz1 < N; mz1++) {
			for (mz2=0;mz2 < N; mz2++) {
				free(Qinn11[mz1][mz2]_verify);
			}
			free(Qinn11[mz1]_verify);
		}
		free(Qinn11_verify);
		free(_lin_Qinn12_verify);
		for (mz1=0;mz1 < N; mz1++) {
			for (mz2=0;mz2 < N; mz2++) {
				free(Qinn12[mz1][mz2]_verify);
			}
			free(Qinn12[mz1]_verify);
		}
		free(Qinn12_verify);
		free(_lin_Qinn20_verify);
		for (mz1=0;mz1 < N; mz1++) {
			for (mz2=0;mz2 < N; mz2++) {
				free(Qinn20[mz1][mz2]_verify);
			}
			free(Qinn20[mz1]_verify);
		}
		free(Qinn20_verify);
		free(_lin_Qinn21_verify);
		for (mz1=0;mz1 < N; mz1++) {
			for (mz2=0;mz2 < N; mz2++) {
				free(Qinn21[mz1][mz2]_verify);
			}
			free(Qinn21[mz1]_verify);
		}
		free(Qinn21_verify);
		free(_lin_Qinn22_verify);
		for (mz1=0;mz1 < N; mz1++) {
			for (mz2=0;mz2 < N; mz2++) {
				free(Qinn22[mz1][mz2]_verify);
			}
			free(Qinn22[mz1]_verify);
		}
		free(Qinn22_verify);
		free(_lin_Qind01_verify);
		for (mz1=0;mz1 < N; mz1++) {
			for (mz2=0;mz2 < N; mz2++) {
				free(Qind01[mz1][mz2]_verify);
			}
			free(Qind01[mz1]_verify);
		}
		free(Qind01_verify);
		free(_lin_Qind10_verify);
		for (mz1=0;mz1 < N; mz1++) {
			for (mz2=0;mz2 < N; mz2++) {
				free(Qind10[mz1][mz2]_verify);
			}
			free(Qind10[mz1]_verify);
		}
		free(Qind10_verify);
		free(_lin_Qind11_verify);
		for (mz1=0;mz1 < N; mz1++) {
			for (mz2=0;mz2 < N; mz2++) {
				free(Qind11[mz1][mz2]_verify);
			}
			free(Qind11[mz1]_verify);
		}
		free(Qind11_verify);
		free(_lin_Qind20_verify);
		for (mz1=0;mz1 < N; mz1++) {
			for (mz2=0;mz2 < N; mz2++) {
				free(Qind20[mz1][mz2]_verify);
			}
			free(Qind20[mz1]_verify);
		}
		free(Qind20_verify);
		free(_lin_Qind21_verify);
		for (mz1=0;mz1 < N; mz1++) {
			for (mz2=0;mz2 < N; mz2++) {
				free(Qind21[mz1][mz2]_verify);
			}
			free(Qind21[mz1]_verify);
		}
		free(Qind21_verify);
		free(_lin_Qidn01_verify);
		for (mz1=0;mz1 < N; mz1++) {
			for (mz2=0;mz2 < N; mz2++) {
				free(Qidn01[mz1][mz2]_verify);
			}
			free(Qidn01[mz1]_verify);
		}
		free(Qidn01_verify);
		free(_lin_Qidn02_verify);
		for (mz1=0;mz1 < N; mz1++) {
			for (mz2=0;mz2 < N; mz2++) {
				free(Qidn02[mz1][mz2]_verify);
			}
			free(Qidn02[mz1]_verify);
		}
		free(Qidn02_verify);
		free(_lin_Qidn10_verify);
		for (mz1=0;mz1 < N; mz1++) {
			for (mz2=0;mz2 < N; mz2++) {
				free(Qidn10[mz1][mz2]_verify);
			}
			free(Qidn10[mz1]_verify);
		}
		free(Qidn10_verify);
		free(_lin_Qidn11_verify);
		for (mz1=0;mz1 < N; mz1++) {
			for (mz2=0;mz2 < N; mz2++) {
				free(Qidn11[mz1][mz2]_verify);
			}
			free(Qidn11[mz1]_verify);
		}
		free(Qidn11_verify);
		free(_lin_Qidn12_verify);
		for (mz1=0;mz1 < N; mz1++) {
			for (mz2=0;mz2 < N; mz2++) {
				free(Qidn12[mz1][mz2]_verify);
			}
			free(Qidn12[mz1]_verify);
		}
		free(Qidn12_verify);
		free(_lin_Qidd01_verify);
		for (mz1=0;mz1 < N; mz1++) {
			for (mz2=0;mz2 < N; mz2++) {
				free(Qidd01[mz1][mz2]_verify);
			}
			free(Qidd01[mz1]_verify);
		}
		free(Qidd01_verify);
		free(_lin_Qidd10_verify);
		for (mz1=0;mz1 < N; mz1++) {
			for (mz2=0;mz2 < N; mz2++) {
				free(Qidd10[mz1][mz2]_verify);
			}
			free(Qidd10[mz1]_verify);
		}
		free(Qidd10_verify);
		free(_lin_Qidd11_verify);
		for (mz1=0;mz1 < N; mz1++) {
			for (mz2=0;mz2 < N; mz2++) {
				free(Qidd11[mz1][mz2]_verify);
			}
			free(Qidd11[mz1]_verify);
		}
		free(Qidd11_verify);
		free(_lin_Qix00_verify);
		for (mz1=0;mz1 < N; mz1++) {
			for (mz2=0;mz2 < N; mz2++) {
				free(Qix00[mz1][mz2]_verify);
			}
			free(Qix00[mz1]_verify);
		}
		free(Qix00_verify);
		free(_lin_Qix01_verify);
		for (mz1=0;mz1 < N; mz1++) {
			for (mz2=0;mz2 < N; mz2++) {
				free(Qix01[mz1][mz2]_verify);
			}
			free(Qix01[mz1]_verify);
		}
		free(Qix01_verify);
		free(_lin_Qix10_verify);
		for (mz1=0;mz1 < N; mz1++) {
			for (mz2=0;mz2 < N; mz2++) {
				free(Qix10[mz1][mz2]_verify);
			}
			free(Qix10[mz1]_verify);
		}
		free(Qix10_verify);
		free(_lin_Qix11_verify);
		for (mz1=0;mz1 < N; mz1++) {
			for (mz2=0;mz2 < N; mz2++) {
				free(Qix11[mz1][mz2]_verify);
			}
			free(Qix11[mz1]_verify);
		}
		free(Qix11_verify);
		free(_lin_auxqiadd01_verify);
		for (mz1=0;mz1 < N; mz1++) {
			for (mz2=0;mz2 < N; mz2++) {
				free(auxqiadd01[mz1][mz2]_verify);
			}
			free(auxqiadd01[mz1]_verify);
		}
		free(auxqiadd01_verify);
		free(_lin_auxqiadd10_verify);
		for (mz1=0;mz1 < N; mz1++) {
			for (mz2=0;mz2 < N; mz2++) {
				free(auxqiadd10[mz1][mz2]_verify);
			}
			free(auxqiadd10[mz1]_verify);
		}
		free(auxqiadd10_verify);
		free(_lin_auxqiadd11_verify);
		for (mz1=0;mz1 < N; mz1++) {
			for (mz2=0;mz2 < N; mz2++) {
				free(auxqiadd11[mz1][mz2]_verify);
			}
			free(auxqiadd11[mz1]_verify);
		}
		free(auxqiadd11_verify);
		free(_lin_auxqia01_verify);
		for (mz1=0;mz1 < N; mz1++) {
			for (mz2=0;mz2 < N; mz2++) {
				free(auxqia01[mz1][mz2]_verify);
			}
			free(auxqia01[mz1]_verify);
		}
		free(auxqia01_verify);
		free(_lin_auxqia10_verify);
		for (mz1=0;mz1 < N; mz1++) {
			for (mz2=0;mz2 < N; mz2++) {
				free(auxqia10[mz1][mz2]_verify);
			}
			free(auxqia10[mz1]_verify);
		}
		free(auxqia10_verify);
		free(_lin_auxqia11_verify);
		for (mz1=0;mz1 < N; mz1++) {
			for (mz2=0;mz2 < N; mz2++) {
				free(auxqia11[mz1][mz2]_verify);
			}
			free(auxqia11[mz1]_verify);
		}
		free(auxqia11_verify);
	#endif
	
	return EXIT_SUCCESS;
}
unsigned char tonum(char c)
{
  c = toupper(c);
  switch (c)
    {
    case 'A': case '0':
      return 0;
    case 'C': case '1':
      return 1;
    case 'G': case '2':
      return 2;
    case 'T': case 'U': case '3':
      return 3;
    }
  return 4;
}
//Memory Macros
#undef seq0
#undef seqr
#undef Qb0
#undef Qg0
#undef tempqg0
#undef tempqgk0
#undef tempqgm0
#undef Qbr
#undef Qgr
#undef tempqgr
#undef tempqgkr
#undef tempqgmr
#undef Qm00
#undef Qm10
#undef Q0r
#undef Q1r
#undef Qm0r
#undef Qm1r
#undef Qgk1
#undef Qgm1
#undef Q01
#undef Q11
#undef Qm01
#undef Qm11
#undef Qih0
#undef Qih1
#undef Qihh00
#undef Qihh01
#undef Qihh10
#undef Qihh11
#undef Qihm00
#undef Qihm01
#undef Qihm10
#undef Qihm11
#undef Qgkr
#undef Qgmr
#undef Qgk0
#undef Qgm0
#undef Q20
#undef Qm20
#undef Qm2r
#undef Q2r
#undef Q21
#undef tempQiy1
#undef tempQiy2
#undef tempQixm001
#undef tempQixm002
#undef tempQixm011
#undef tempQixm012
#undef tempQixm021
#undef tempQixm022
#undef tempQixm101
#undef tempQixm102
#undef tempQixm111
#undef tempQixm112
#undef tempQixm121
#undef tempQixm122
#undef tempQixk001
#undef tempQixk002
#undef tempQixk011
#undef tempQixk012
#undef tempQixk101
#undef tempQixk102
#undef tempQixk111
#undef tempQixk112
#undef tempQimm021
#undef tempQimm022
#undef tempQimm023
#undef tempQimm121
#undef tempQimm122
#undef tempQimm123
#undef tempQimm201
#undef tempQimm202
#undef tempQimm203
#undef tempQimm211
#undef tempQimm212
#undef tempQimm213
#undef tempQimm221
#undef tempQimm222
#undef tempQimm223
#undef tempQimk011
#undef tempQimk012
#undef tempQimk013
#undef tempQimk014
#undef tempQimk111
#undef tempQimk112
#undef tempQimk113
#undef tempQimk114
#undef tempQimk201
#undef tempQimk202
#undef tempQimk203
#undef tempQimk204
#undef tempQimk211
#undef tempQimk212
#undef tempQimk213
#undef tempQimk214
#undef tempQikm101
#undef tempQikm102
#undef tempQikm103
#undef tempQikm104
#undef tempQikm111
#undef tempQikm112
#undef tempQikm113
#undef tempQikm114
#undef tempQikm021
#undef tempQikm022
#undef tempQikm023
#undef tempQikm024
#undef tempQikm121
#undef tempQikm122
#undef tempQikm123
#undef tempQikm124
#undef tempQikk011
#undef tempQikk012
#undef tempQikk013
#undef tempQikk014
#undef tempQikk015
#undef tempQikk101
#undef tempQikk102
#undef tempQikk103
#undef tempQikk104
#undef tempQikk105
#undef tempQikk111
#undef tempQikk112
#undef tempQikk113
#undef tempQikk114
#undef tempQikk115
#undef tempQiann011
#undef tempQiann012
#undef tempQiann013
#undef tempQiann014
#undef tempQiann015
#undef tempQiann016
#undef tempQiann021
#undef tempQiann022
#undef tempQiann023
#undef tempQiann024
#undef tempQiann025
#undef tempQiann026
#undef tempQiann101
#undef tempQiann102
#undef tempQiann103
#undef tempQiann104
#undef tempQiann105
#undef tempQiann106
#undef tempQiann111
#undef tempQiann112
#undef tempQiann113
#undef tempQiann114
#undef tempQiann115
#undef tempQiann116
#undef tempQiann121
#undef tempQiann122
#undef tempQiann123
#undef tempQiann124
#undef tempQiann125
#undef tempQiann126
#undef tempQiann201
#undef tempQiann202
#undef tempQiann203
#undef tempQiann204
#undef tempQiann205
#undef tempQiann206
#undef tempQiann211
#undef tempQiann212
#undef tempQiann213
#undef tempQiann214
#undef tempQiann215
#undef tempQiann216
#undef tempQiann221
#undef tempQiann222
#undef tempQiann223
#undef tempQiann224
#undef tempQiann225
#undef tempQiann226
#undef tempQiand011
#undef tempQiand012
#undef tempQiand013
#undef tempQiand014
#undef tempQiand015
#undef tempQiand101
#undef tempQiand102
#undef tempQiand103
#undef tempQiand104
#undef tempQiand105
#undef tempQiand111
#undef tempQiand112
#undef tempQiand113
#undef tempQiand114
#undef tempQiand115
#undef tempQiand201
#undef tempQiand202
#undef tempQiand203
#undef tempQiand204
#undef tempQiand205
#undef tempQiand211
#undef tempQiand212
#undef tempQiand213
#undef tempQiand214
#undef tempQiand215
#undef tempQiadn011
#undef tempQiadn012
#undef tempQiadn013
#undef tempQiadn014
#undef tempQiadn015
#undef tempQiadn021
#undef tempQiadn022
#undef tempQiadn023
#undef tempQiadn024
#undef tempQiadn025
#undef tempQiadn101
#undef tempQiadn102
#undef tempQiadn103
#undef tempQiadn104
#undef tempQiadn105
#undef tempQiadn111
#undef tempQiadn112
#undef tempQiadn113
#undef tempQiadn114
#undef tempQiadn115
#undef tempQiadn121
#undef tempQiadn122
#undef tempQiadn123
#undef tempQiadn124
#undef tempQiadn125
#undef tempQiadd011
#undef tempQiadd012
#undef tempQiadd013
#undef tempQiadd014
#undef tempQiadd015
#undef tempQiadd101
#undef tempQiadd102
#undef tempQiadd103
#undef tempQiadd104
#undef tempQiadd105
#undef tempQiadd111
#undef tempQiadd112
#undef tempQiadd113
#undef tempQiadd114
#undef tempQiadd115
#undef tempQir011
#undef tempQir012
#undef tempQir101
#undef tempQir102
#undef tempQir111
#undef tempQir112
#undef tempQiar011
#undef tempQiar012
#undef tempQiar013
#undef tempQiar101
#undef tempQiar102
#undef tempQiar103
#undef tempQiar111
#undef tempQiar112
#undef tempQiar113
#undef tempQilr011
#undef tempQilr012
#undef tempQilr101
#undef tempQilr102
#undef tempQilr111
#undef tempQilr112
#undef tempQi1
#undef tempQi2
#undef tempQia1
#undef tempQia2
#undef tempQia3
#undef tempQia4
#undef tempQia5
#undef tempQia6
#undef tempQib001
#undef tempQib002
#undef tempQib011
#undef tempQib012
#undef tempQib101
#undef tempQib102
#undef tempQib111
#undef tempQib112
#undef tempQinn011
#undef tempQinn021
#undef tempQinn101
#undef tempQinn111
#undef tempQinn121
#undef tempQinn201
#undef tempQinn211
#undef tempQinn221
#undef tempQidd011
#undef tempQidd101
#undef tempQidd111
#undef tempQidd012
#undef tempQidd102
#undef tempQidd112
#undef seq1
#undef Q00
#undef Q10
#undef Qi
#undef Qiy
#undef Qixm00
#undef Qixm01
#undef Qixm02
#undef Qixm10
#undef Qixm11
#undef Qixm12
#undef Qixk00
#undef Qixk01
#undef Qixk10
#undef Qixk11
#undef Qimm02
#undef Qimm12
#undef Qimm20
#undef Qimm21
#undef Qimm22
#undef Qimk01
#undef Qimk11
#undef Qimk20
#undef Qimk21
#undef Qikm10
#undef Qikm11
#undef Qikm02
#undef Qikm12
#undef Qikk01
#undef Qikk10
#undef Qikk11
#undef Qiann01
#undef Qiann02
#undef Qiann10
#undef Qiann11
#undef Qiann12
#undef Qiann20
#undef Qiann21
#undef Qiann22
#undef Qiand01
#undef Qiand10
#undef Qiand11
#undef Qiand20
#undef Qiand21
#undef Qiadn01
#undef Qiadn02
#undef Qiadn10
#undef Qiadn11
#undef Qiadn12
#undef Qiadd01
#undef Qiadd10
#undef Qiadd11
#undef Qiar01
#undef Qiar10
#undef Qiar11
#undef Qilr01
#undef Qilr10
#undef Qilr11
#undef Qir01
#undef Qir10
#undef Qir11
#undef Qia
#undef Qib00
#undef Qib01
#undef Qib10
#undef Qib11
#undef Qinn01
#undef Qinn02
#undef Qinn10
#undef Qinn11
#undef Qinn12
#undef Qinn20
#undef Qinn21
#undef Qinn22
#undef Qind01
#undef Qind10
#undef Qind11
#undef Qind20
#undef Qind21
#undef Qidn01
#undef Qidn02
#undef Qidn10
#undef Qidn11
#undef Qidn12
#undef Qidd01
#undef Qidd10
#undef Qidd11
#undef Qix00
#undef Qix01
#undef Qix10
#undef Qix11
#undef auxqiadd01
#undef auxqiadd10
#undef auxqiadd11
#undef auxqia01
#undef auxqia10
#undef auxqia11


//Common Macro undefs
#undef max
#undef MAX
#undef min
#undef MIN
#undef CEILD
#undef ceild
#undef FLOORD
#undef floord
#undef CDIV
#undef FDIV
#undef LB_SHIFT
#undef MOD
#undef EPSILON
