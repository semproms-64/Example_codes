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

void quicksort(float[], int, int);
int partition(float[], int, int);

void quicksort(float a[], int l, int r)
{
	int j;

	if (l < r)
	{
		j = partition(a, l, r);
		quicksort(a, l, j-1);
		quicksort(a, j+1, r);
	}
}

int partition(float a[], int l, int r)
{
	int pivot, i, j, t;
	pivot = a[l];
	i = l;
	j = r+1;

	while(1)
	{
		do ++i; while(a[i] <= pivot && i <= r);
		do --j; while(a[j] > pivot);
		if (i >= j) break;
		t = a[i];
		a[i] = a[j];
		a[j] = t;
	}
	t = a[l];
	a[l] = a[j];
	a[j] = t;
	return j;
}

 int main(int argc, char const *argv[])
 {
 	if (argc < 2)
 	{
 		printf("Wrong number of arguments\n");
 		return 1;
 	}
 	int muestra = argc-1;
	float array[muestra];

	int z;
	for (z = 0; z < muestra; z++)
	{
		array[z] = atof(argv[z+1]); //From argv to int array.
	}

	quicksort(array, 0, argc-2); //Sorting the array
 	
 	float median;
 	if (isEven(muestra)==0)
 	{
 		median = array[(muestra-1)/2];
 		printf("Median: %.2f\n", median);
 	}
 	else
 	{
 		median = (array[(muestra-1)/2] + array[((muestra-1)/2)+1])/2;
 		printf("Median: %.2f\n", median);
 	}
 	return 0;
 }