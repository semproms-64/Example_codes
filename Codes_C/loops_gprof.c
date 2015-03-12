#include <stdio.h>
#include <time.h>
#include <math.h>
#define X 50000000
#define Y 30000000

double a = 3.14, b = 6.34, c = -3.03;
long y;

int main()
{
	producto(); producto(); producto();
	division(); division();
	return 0;
}

producto()
{
	atangente();
	for (y = 0; y < X; y++)
	{
		c=a*b;
	}
}

division()
{
	for (y = 0; y < Y; y++)
	{
		c=a/b;
	}
}

atangente()
{
	for (y = 0; y < Y; y++)
	{
		c=atan(a);
	}
}