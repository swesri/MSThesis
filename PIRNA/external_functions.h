/*#################################################################################################
#external_functions.h
#Author: Swetha Varadarajan
#Last Update by Swetha Varadarajan: May 25, 2018
#################################################################################################*/

//External Functions //Need to change for individual sequence
#include<stdio.h>
Energy *energy;
double RT;
unsigned char* seq0;
unsigned char* seq1;
unsigned char* seqr;

double eintstack(int a,int b,int c){
return exp(-energy->Eintstack(a,b,c,seq0,seq1)/RT);}

double ekissingstack(int d,int a,int b){
return exp(-energy->Ekissingstack(a,b,seq0,seq1)/RT);}

double eintbi(int a,int b,int c,int d){
return exp(-energy->Eintbi(a,b,c,d,seq0,seq1)/RT);}

double ekissingbi(int a,int b,int c,int d){
return exp(-energy->Ekissingbi(a,b,c,d,seq0,seq1)/RT);}

double  eintstackpenalty(int a){
return exp(-energy->Eintstackpenalty()/RT);}

double eaupenalty(int a,int b,int c,int d){ 
double temp=1.0;
if((seq0[a] == 0 && seq1[b] == 3) || (seq0[a] == 3 && seq1[b] == 0))
	temp*=exp(-energy->Eaupenalty()/RT);
if((seq0[c] == 0 && seq1[d] == 3) || (seq0[c] == 3 && seq1[d] == 0))
	temp*=exp(-energy->Eaupenalty()/RT);

return temp;}

double noisolate(int){
return 0;}

double eh0(int i,int j)
{
return exp(-energy->Eh(i, j, seq0)/RT);
}

double ehr(int i,int j)
{
return exp(-energy->Eh(i, j, seqr)/RT);
}

double esbi0(int i,int j,int d,int e)
{
 if(e == j-1 && d == i+1)
	return exp(-energy->Es(i, j, seq0)/RT);
 else
	return exp(-energy->Ebi(i, j, d, e, seq0)/RT);
}

double esbir(int i,int j,int d,int e)
{
 if(e == j-1 && d == i+1)
	return exp(-energy->Es(i, j, seqr)/RT);
 else
	return exp(-energy->Ebi(i, j, d, e, seqr)/RT);
}

double emulti(int a,int b,int k)
{
return exp(-energy->Emulti(a, b , k)/RT); 
}
bool base_pair(char a,char b)
{
return energy->base_pair(a, b);
}
double ekissing(int a,int b,int c)
{
return exp(-energy->Ekissing(a,b,c)/RT);
}

//char seq_reverse(char a)
//{return a;}

