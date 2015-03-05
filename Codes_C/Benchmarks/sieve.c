
#include <stdio.h>
#include <time.h>
#define TRUE 1
#define FALSE 0
#define tamano 8192
#define NTIMES 300000

char flags[tamano+1];

void main()
		{
		int i,j,k,primo,cont;

		for (j=1; j<=NTIMES; j++)
		 {
		  cont = 0;
		  for (i=1; i<tamano; i++)
		   flags[i]=TRUE;
		  for(i=1; i<=tamano; i++)
		   if (flags[i])
			{
			  primo = i+i+3;
			  for (k=i+primo; k<=tamano;k+=primo)
			   flags[k]=FALSE;
			  cont++;
			}
		 }
  }