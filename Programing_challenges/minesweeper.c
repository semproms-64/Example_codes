/*
 * Author: Semproms
 * Date: Thu Jul 16 20:24:23 CEST 2015
 * Accepted: Yes
*/

#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]) {
	int x, y, rows, cols, field = 0;

	while(scanf("%d %d", &rows, &cols) != EOF) {

		if(rows == 0 && cols == 0)
			break;

		int array_bidimensional[102][102] = {0};
		if(field > 1) printf("\n");

		for (x = 1; x < rows+1; x++) {
			for (y = 1; y < cols+1; y++) {
				char c_aux;
				scanf(" %c", &c_aux);

				if (c_aux == '*') {
					array_bidimensional[x][y] = -1;
					if (array_bidimensional[x-1][y] != -1) 
						array_bidimensional[x-1][y]++; 
                    if (array_bidimensional[x-1][y+1] != -1) 
                    	array_bidimensional[x-1][y+1]++; 
                    if (array_bidimensional[x-1][y-1] != -1) 
                    	array_bidimensional[x-1][y-1]++; 
                    if (array_bidimensional[x][y-1] != -1) 
                    	array_bidimensional[x][y-1]++;
                    if (array_bidimensional[x+1][y] != -1) 
                    	array_bidimensional[x+1][y]++; 
                    if (array_bidimensional[x+1][y+1] != -1) 
                    	array_bidimensional[x+1][y+1]++; 
                    if (array_bidimensional[x][y+1] != -1) 
                    	array_bidimensional[x][y+1]++;
                    if (array_bidimensional[x+1][y-1] != -1) 
                    	array_bidimensional[x+1][y-1]++; 
                    
				}
			}
		}

		field++;
		printf("Field #%d\n", field);

		for (x = 1; x < rows+1; x++) {
			for (y = 1; y < cols+1; y++) {
				if (array_bidimensional[x][y]==-1) {
					printf("*");
				}
				else
					printf("%d", array_bidimensional[x][y]);
			}
			printf("\n");
		}
	}

	return 0;
}