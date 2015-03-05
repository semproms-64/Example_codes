#include <stdio.h>
#include <time.h>
#define NTIMES 20000

int Ackermann(int x, int y);
float pot(int n, int m);

void main()
{
 int n;
 for (n=1; n<=NTIMES; n++) Ackermann(3,6);
}

int Ackermann(int x, int y)
{
 int aux;

 if(x==0) return (++y);
 aux=x-1;
 if(y==0) return (Ackermann(aux,1));
 return(Ackermann(aux,Ackermann(x,--y)));
}

float pot(int n,int m)
{
 float prod;
 int i;

 if (n==1) return(m);
  else if (m==0) return(1);
   else {
         prod=1;
         for (i=1;i<=m;i++) prod=prod*n;
         return(prod);
        }
}
