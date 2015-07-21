/*
 * Author: Semproms
 * Date: Tue Jul 21 06:39:47 CEST 2015
 * ID: 10038
 * Accepted: Yes
*/


import java.util.*;
import java.io.BufferedReader;
import java.io.File;
import java.io.FileReader;
import java.io.InputStreamReader;

class jolly_jumper {

	private static String JOLLY = "Jolly";
	private static String NOT_JOLLY = "Not jolly";

	public static String isJolly(int solution[]) {
		int result[] = new int[solution.length-1];
		int i;

		for (i = 0; i < result.length; i++) {
			result[i] = Math.abs(solution[i+1]-solution[i]);
			if (result[i] > solution.length) {
				return NOT_JOLLY;
			}
			if (result[i]==0) {
				return NOT_JOLLY;
			}
		}

		Arrays.sort(result);
		for (i = 0; i < result.length; i++) {
			if(result[i]!=i+1)
				return NOT_JOLLY;
		}

		return JOLLY;
	}

	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer tokenizer;
		int num_items, i;
		String cad;

		while((cad = in.readLine() ) != null) {
			tokenizer = new StringTokenizer(cad);
			num_items = Integer.parseInt(tokenizer.nextToken());

			int solution[] = new int[num_items];

			for (i = 0; i < num_items; i++) {
				solution[i] = Integer.parseInt(tokenizer.nextToken());
			}

			System.out.printf("%s\n",isJolly(solution));
		}
	}
}