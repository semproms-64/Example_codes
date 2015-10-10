#include <stdio.h>
#include <omp.h>

int main(int argc, char const *argv[]) {
	
	int i;
	int x[15] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
	int n = 15;
	omp_set_num_threads(4);
	printf("Hilos antes = %d\n", omp_get_num_threads());
	int suma = 0;

	#pragma omp parallel for reduction(+:suma)
	for(i = 0; i < n; i++) {
		suma = suma + x[i]*x[i];
	}
	printf("Total=%d\n",suma);
	return 0;
}