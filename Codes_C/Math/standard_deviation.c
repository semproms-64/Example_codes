/*
* Compilation: gcc standard_deviation.c -o standard_deviation -lm
* Execution: ./standard_deviation 14 56 78 21
* Author: Semproms
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[])
{
	if (argc < 2)
	{
		printf("Wrong number of arguments\n");
		printf("Example: ./standard_deviation 2 3 4 5\n");
		exit(-1);
	}

	int i;
	float average = 0.0, covariance = 0.0, st_deviation = 0.0;
	for (i = 1; i < argc; i++)
	{
		average += atof(argv[i]);
	}
	average = average/(argc-1);
	int z = 1;
	for (; z < argc; z++)
	{
		covariance += powf((atof(argv[z])-average),2.0);
	}
	covariance = covariance/(argc-1);
	st_deviation = sqrt(covariance);

	printf("Standard deviation: %f\n", st_deviation);
	return 0;
}