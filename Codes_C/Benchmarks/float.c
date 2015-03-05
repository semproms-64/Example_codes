#include <stdio.h>
#include <time.h>
#define CONST1 3.141597E0
#define CONST2 1.783932E4
#define NTIMES 5000000000

void main()
		{
		double a,b,c;
		long i;

		a=CONST1;
		b=CONST2;
		for (i=0; i<NTIMES; i++)
		{
		  c=a*b;
		  c=c/a;
		  c=a*b;
		  c=c/a;
		  c=a*b;
		  c=c/a;
		  c=a*b;
		  c=c/a;
		  c=a*b;
		  c=c/a;
		  c=a*b;
		  c=c/a;
		}
  }