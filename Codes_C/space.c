#include <stdio.h>
#define N 20000

int main(int argc, char const *argv[])
{
	static int array[N][N];
	printf("Size of C int: %d bytes\n", sizeof(int));
	printf("Size of matrix with 20000 elements: %d bytes\n",sizeof(array));
	printf("Size of C long: %d bytes\n", sizeof(long));
	printf("Size of C long long: %d bytes\n", sizeof(long long));
	printf("Size of C char: %d bytes\n", sizeof(char));
	printf("Size of C float: %d bytes\n", sizeof(float));
	printf("Size of C double: %d bytes\n", sizeof(double));
	printf("Size of C short: %d bytes\n", sizeof(short));
	return 0;
}

