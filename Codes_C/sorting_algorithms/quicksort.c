/*************************************************************************
 *  Compilation:  gcc quicksort.c -o quicksort
 *
 *  Author: Semproms
 *
 *************************************************************************/

#include <stdio.h>
#include <stdlib.h>

void quicksort(int[], int, int);
int partition(int[], int, int);

void quicksort(int a[], int l, int r)
{
	int j;

	if (l < r)
	{
		j = partition(a, l, r);
		quicksort(a, l, j-1);
		quicksort(a, j+1, r);
	}
}

int partition(int a[], int l, int r)
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
	if (argc < 3)
	{
		printf("Wrong number of arguments!\n");
		exit(-1);
	}
	int muestra = argc-1;
	int array[muestra];
	int size = (sizeof(array))/(sizeof(int));

	int z;
	for (z = 0; z < muestra; z++)
	{
		array[z] = atoi(argv[z+1]);
	}

	int i;
	printf("Unsorted array is: \n");
	for (i = 0; i < muestra; i++)
	{
		printf("%d ", array[i]);
	}
	
	quicksort(array, 0, argc-2);
	
	printf("\n");

	printf("Sorted array is: \n");
	for (i = 0; i < muestra; i++)
	{
		printf("%d ", array[i]);
	}
	printf("\n");
	return 0;
}

