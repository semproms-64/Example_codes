/*************************************************************************
 *  Compilation:  gcc mean.c -o mean
 *  Execution:    ./mean 2 3 4 8 16
 *  Author: Semproms
 *************************************************************************/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	if (argc < 2)
	{
		printf("Wrong number of arguments\n");
		printf("Example: ./mean 2 3 4 5\n");
		return 1;
	}

	float average;
	int count;
	for (count = 1; count < argc; count++)
	{
		printf("Valor: %s\n", argv[count]);
		average += atof(argv[count]);
	}

	average = average/(argc-1);
	printf("%f\n", average);
	return 0;
}