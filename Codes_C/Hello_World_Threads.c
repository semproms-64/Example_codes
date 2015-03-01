#include <pthread.h>
#include <omp.h>
#include <stdio.h>
#include <stdlib.h>
#define NUM_THREADS 5

void * PrintHello(void * threadid) {
	printf("\n%d: Hello World!\n", threadid);
	pthread_exit(NULL);
}

int main(int argc, char const *argv[])
{
	pthread_t threads[NUM_THREADS];
	int rc, t;
	for (t = 0; t < NUM_THREADS; t++)
	{
		printf("Creating threads %d\n", t);
		rc = pthread_create(&threads[t], NULL, PrintHello, (void *)t);
		if (rc)
		{
			printf("ERROR return code from pthread_create(): %d\n", rc);
			exit(-1);
		}
	}
	pthread_exit(NULL);
}