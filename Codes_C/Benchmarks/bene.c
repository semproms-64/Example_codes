#include <stdio.h>
#include <time.h> 
#define NTIMES 100000000

int strch(char *s,char *k,int ns,int nk);

void main()
	{
	char *s;
	char *k;
	int position;
	int ns,nk,i;

	for(i=1;i<=NTIMES;i++)
	 {
	  s="000000000000000000000000000000000000000000000000000000000000HERE00000	0000000000000000000HERE IS A MATCH00000000000000";
	  k="HERE IS A MATCH";
	  ns=120;
	  nk=15;
	  position = strch(s,k,ns,nk);
	 }
 }

int strch(char *s,char *k,int ns,int nk)
	{
	int n,pos;
	char *base;
	char *ksave;
	char *cont,*kend,*ssave;

	n = 0;
	pos = 1;
	base = s;
	ksave = k;
	cont = ns - nk + base;
	kend = ksave + nk -1;
label   :while(*s != *k) {
		if(s>cont) return(-1);
		s++;
	 }
	ssave = s;
	while((int)++k <= (int)kend)
		if(*++s != *k){
			k = ksave;
			s = ssave + 1;
			goto label;
			      }
	return(ssave - base + 1);
}