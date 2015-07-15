#include <stdio.h>
#define MAX(x, y) (((x) > (y)) ? (x) : (y))

int cycles(int x) {
	int cyc = 1;
	while(x != 1) {
		if (x % 2 == 0) {
			x = x/2;
		}
		else {
			x = (3*x)+1;
		}
		cyc++;
	}
	return cyc;
}


int main(int argc, char const *argv[]) {

	int i, j;

	while(scanf ("%d %d", &i, &j) != EOF) {

		int temp_i = i;
		int temp_j = j;

		if(i > j) {
			int temp;
   			temp = j;
   			j   =  i;
   			i   =  temp;  
		}

		int max = 0;
		int current = 0;
		int aux_i = i;
	
		for (; aux_i <= j; aux_i++) {
			current = cycles(aux_i);
			max = MAX(max, current);
		}

		printf("%d %d %d\n", temp_i, temp_j, max);
	}

	return 0;
}