#include <stdio.h>
#include <math.h>
#define number 100000

int status[number+10];
int prime[32000],add=0;

void sieve() {
    int range,i,j;
    memset(status,1,sizeof(status));


    for(i=2; i*i<=number; i++) {
        if(status[i]) {
            for(j=i+i; j<=number; j=j+i)
                status[j]=0;
        }

    }
    for(i = 2; i <= number; i++)
        if(status[i])
            prime[add++]=i;

}


int sumDigits(int n) {
	int result = 0;
	while(n > 0) {
		result += n % 10;
		n = n/10;
	}
	return result;
}

int sumFactors(int num) {

	 int i=0,j,sum=0,n=num,range=sqrt(num);

    while(num!=1  && i<=9000) {
        if(num%prime[i]==0 && prime[i]<=range){
            sum=sum+sumDigits(prime[i]);
            num=num/prime[i];
        }
        else
        	i++;

    }

    if(n==num)
    sum=0;
    else if(num>1)
    sum+=sumDigits(num);

	return sum;

}


int main(int argc, char const *argv[]) {
	
	int numCase;
	int find;
	int n;

	sieve();

	scanf("%d", &numCase);

	while(numCase > 0) {
		find = 0;
		scanf("%d", &n);
		while(!find) {
			if(sumDigits(n) == sumFactors(n)) {
				find = 1;
				printf("%d\n", n);
			}
			else {
				n++;
			}
		}
		numCase = numCase-1;
	}
	return 0;
}