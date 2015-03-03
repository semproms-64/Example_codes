#include <stdio.h>
#define N 30000

int main(int argc, char const *argv[])
{
	static int array[N][N];
	int i, j;

	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			array[i][j] = i*4;
		}
	}

	return 0;
}