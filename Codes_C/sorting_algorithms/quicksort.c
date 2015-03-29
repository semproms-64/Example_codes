#include <stdio.h>

void quicksort(int[], int, int);
int partition(int[], int, int);

void main()
{
	int a[] = {7, 12, 1, -2, 0, 15, 4, 11, 9};

	int i;
	int size = (sizeof(a))/(sizeof(int));
	printf("Unsorted array is: \n");
	for (i = 0; i < size; i++)
	{
		printf("%d ", a[i]);
	}

	quicksort(a, 0, 8);

	printf("\n");

	printf("Sorted array is: \n");
	for (i = 0; i < size; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}

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