/*************************************************************************
 *  Compilation:  gcc loop_1.c -o loop_1
 *  Execution:    ./loop_1
 *
 *  With the command time ./loop_1
 *  Slow version. Solution in loop_0.c
 *  Author: Semproms
 *************************************************************************/

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
			array[j][i] = i*4; /*Here is the issue*/
		}
	}

	return 0;
}