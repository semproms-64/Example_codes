#include <stdio.h>
#define N 20000

int main()
{
	static int array[N][N];
	printf("Size of C int: %d bytes\n", sizeof(int));
	printf("Size of matrix with 20000 elements: %d bytes\n",sizeof(array));

}