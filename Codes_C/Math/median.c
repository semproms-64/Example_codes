/*************************************************************************
 *  Compilation:  gcc median.c -o median
 *  Execution_0: ./median 2 4 5 6
 *  Execution_1: ./median 2 3 8 9 12
 *
 *  Author: Semproms
 *
 *************************************************************************/

 #include <stdio.h>
 #include <stdlib.h>


int isEven(int num)
{
	if (num%2==0)
		return 1;
	else
		return 0;
}

 int main(int argc, char const *argv[])
 {
 	if (argc < 2)
 	{
 		printf("Wrong number of arguments\n");
 		return 1;
 	}

 	int muestra = argc-1;
 	int median;
 	if (isEven(muestra)==0)
 	{
 		median = atoi(argv[argc/2]);
 		printf("Median: %d\n", median);
 	}
 	else
 	{
 		median = (atoi(argv[argc/2])+atoi((argv[argc/2+1])))/2;
 		printf("Median: %d\n", median);
 	}
 	return 0;
 }