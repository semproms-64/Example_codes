#include <stdio.h>
#include <time.h>

#define NTIMES 300000000

void bmt(int n, char *A1, char A2);

void main()

{
	int n,j;
	char A2;
	char *A1;
	char i;
	char array[7];

   for (j=1;j<=NTIMES;j++){
	n = 7;
	A2 = 0;
	A1 = array;

	*A1 = '\111';
	*(A1 +1) = '\134';
	*(A1 +2) = '\216';
	*(A1 +3) = '\245';
	*(A1 +4) = '\001';
	*(A1 +5) = '\162';
	*(A1 +6) = '\200';

	bmt(n,A1,A2);
   }

 }

void bmt(int n, char *A1, char A2)
   {
	register int x,y,t,yb,xb,i,j;
	char b1,b2,bit1,bit2;
	char *xa, *ya;
	int dope[7];

	n--;
	x = A2;

	for (i = 0; i <= n; i++)
	 {
		dope[i] = x;
		x = x + n + 1 ;
	 }

	for (i = n-1 ; i>=0 ; i--)
	 {
		for ( j=i+1; j <=n; j++) {
			x = dope[i] +j;
			t = x >> 3;
			xa = A1 + t;
			b1 = *xa;
			t = t << 3;
			xb = x - t;

			x = dope[j]+ i;
			t = x >> 3;
			ya = A1 + t;
			b2 = *ya;
			t  = t << 3;
			yb = x - t;
			
		  	bit1 = (b1 >> (7-xb)) & 1;
			bit2 = (b2 >> (7-yb)) & 1;
			if (!(bit1 ^bit2)) continue;

			bit1 = (1 <<(7-xb));
			bit2 = (1 <<(7-yb));
			b1 = b1^bit1;
			
			if (xa != ya) {


				b2 = b2^bit2;
				*xa = b1;
				*ya = b2;
				      }
			else {
				b1 = b1^bit2;
				*xa = b1;
		             }
                   }
		}
             				
      }