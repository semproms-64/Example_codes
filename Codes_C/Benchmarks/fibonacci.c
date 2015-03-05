
#include <stdio.h>
#include <time.h>
#define NTIMES 500000
#define NUMBER 20

int fibonacci(int x);

void main()
{
	long n;
	for (n=1; n<=NTIMES; n++) fibonacci(NUMBER);
}

int fibonacci(int n)
{
	if (n>2) return(fibonacci(n-1)+fibonacci(n-2));
	else return(1);
}
