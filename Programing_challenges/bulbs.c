/*
 * Author: Semproms
 * Date: Sun Jul 19 17:45:19 CEST 2015
*/

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[]) {
	long long n, root;
	while(scanf("%lld", &n)!=EOF) {
		if(n==0) break;
		root = sqrt(n);
		if((root * root)==n)
			printf("yes\n");
		else
			printf("no\n"); 
	}
	return 0;
}