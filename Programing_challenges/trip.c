/*
 * Author: Semproms
 * Date: Mon Jul 20 01:24:50 CEST 2015
 * Accepted: Not yet.
*/

#include <stdio.h>

int main(int argc, char const *argv[]) {
 	
 	int num_st = 0;
 	int i;
 	while(scanf("%d", &num_st)) {
 		if(num_st == 0) break;
 		double arr_al[num_st];
 		double average_payment = 0.0;
 		for (i = 0; i < num_st; i++) {
 			scanf("%lf", &arr_al[i]);
 			average_payment += arr_al[i];
 		}
 		average_payment = average_payment/num_st;
 		double pos_difference = 0.0;
 		double neg_difference = 0.0;

 		for (i = 0; i < num_st; i++) {
 			if (arr_al[i] > average_payment) {
 				pos_difference += arr_al[i] - average_payment;
 			}
 			else
 				neg_difference += average_payment - arr_al[i];
 		}

 		if (neg_difference < pos_difference) {
 			printf("$%.2lf\n", neg_difference);
 		}
 		else
 			printf("$%.2lf\n", pos_difference);
 	}
 	return 0;
 }