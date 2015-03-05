#include <stdio.h>
#include <math.h>
#include <time.h>
#define NTIMES 300000000

void main()
{
   long i;
   float x=0.0, y=9.9;

   for(i=0; i<NTIMES; i++)
     x+=sin(atan(cos(log(y))));
}
