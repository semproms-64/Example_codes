/*
 * Author: Semproms
 * Date: Wed Jul 29 09:21:20 CEST 2015
 * Uva ID: 10006
 * Accepted: No and I don't know why.
*/


#include <stdio.h>
#include <math.h>
#include <string.h>

long long factors[10];
int length = (sizeof(factors))/(sizeof(factors[0]));

void primes_factorization(int x) {
	long long i;
	long long c;
	int index = 0;

	c = x;
	while((c%2)==0) {
		factors[index] = 2;
		c = c/2;
		index++;
	}

	i = 3;
	while(i <= (sqrt(c)+1)) {
		if((c%i)==0) {
			factors[index] = i;
			c = c/i;
			index++;
		}
		else
			i = i+2;
	}

	if(c>1) factors[index] = c;
}

int is_Carmichael(int n) {

	
	memset(factors, 0, sizeof(int)*length);
	primes_factorization(n);

	int i;
	int is_c = 1;
	int counter = 0;

	for(i = 0; i < length; i++) {
		if(factors[i]!=0)
			counter++;
		else
			break;
	}

	if(counter < 3)
		return 0;

	for(i = 0; i < length; i++) {
		if(factors[i]==0) {
			break;
		}
		else if(factors[i]==factors[i+1] || (n-1)%(factors[i]-1)!=0) {
			is_c = 0;
			break;
		}
	}
	return is_c;
}


int main(int argc, char const *argv[]) {
	
	int n;
	while((scanf("%d",&n))==1) {
		if(n == 0)
			break;
		if(is_Carmichael(n)) {
			printf("The number %d is a Carmichael number.\n", n);
		}
		else
			printf("The number %d is normal.\n", n);
	}
	return 0;
}