#include <stdio.h>
#include <omp.h>

int main(int argc, char const *argv[]) {
	
	int i;
	int k = 0;
	int n = 15;
	int alpha = 5.0;
	int x[15] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
	int z[15];
	#pragma omp parallel for firstprivate(alpha) lastprivate(i)
	for(i = 0; i < n; i++) {
		printf("Soy hilo %d y mi valor de alpha = %d\n", omp_get_thread_num(), alpha);
		z[i] = alpha*x[i];
	}
	k = i;
	printf("Final = %d\n",k);

	return 0;
}