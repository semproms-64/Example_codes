#include <stdio.h>
#define N 20000

int main(int argc, char const *argv[])
{
	static int array[N][N];
	printf("Size of C int: %d bytes\n", sizeof(int));
	printf("Size of matrix with 20000 elements: %d bytes\n",sizeof(array));
	printf("Size of C long: %d bytes\n", sizeof(long));
	return 0;
}

