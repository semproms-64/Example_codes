/*
 * Author: Semproms
 * Accepted: Not yet.
 * ID: 10035
*/

import java.util.*;
import java.io.BufferedReader;
import java.io.File;
import java.io.FileReader;
import java.io.InputStreamReader;

class primary_arithmetic {

	private static long get_carry(long num1, long num2) {
		long carry = 0;
		long n_1 = 0;
		long n_2 = 0;
		long temp = 0;
		boolean carr = false;

		while(num1!=0 || num2!=0) {
			n_1 = num1%10;
			n_2 = num2%10;
			temp = (carr)?1:0;
			if(temp+n_1+n_2>=10) {
				carry++;
				carr = true;
			}
			else
				carr = false;
			num1 = num1/10;
			num2 = num2/10;
		}
		return carry;
	}

	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		String cad;
		long a, b;

		while((cad = in.readLine() ) != null) {
			StringTokenizer tokens = new StringTokenizer(cad);
			long num1 = Long.parseLong(tokens.nextToken());
			long num2 = Long.parseLong(tokens.nextToken());
			if(num1 == 0 && num2 == 0)
				break;

			long carry = get_carry(num1, num2);
			if(carry==0) {
				System.out.println("No carry operation.");
			}
			else
				System.out.printf("%d carry operation.\n", carry);
		}
	}
}
