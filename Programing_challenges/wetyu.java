/*
 * Author: Semproms
 * Date: Sun Jul 19 23:10:43 CEST 2015
 * ID: 10082
 * Accepted: Not yet.
*/

import java.util.*;
import java.io.BufferedReader;
import java.io.File;
import java.io.FileReader;
import java.io.InputStreamReader;

public class wetyu {
	public static void main(String args[]) throws Exception {
		Hashtable<Character,Character> container = new Hashtable<Character,Character>();
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		String cad;
		while((cad = in.readLine() ) != null) {
			container.put('.',',');
			container.put('W','Q');
			container.put('S','A');
			container.put('X','Z');
			container.put('E','W');
			container.put('D','S');
			container.put('C','X');
			container.put('R','E');
			container.put('F','D');
			container.put('V','C');
			container.put('T','R');
			container.put('G','F');
			container.put('B','V');
			container.put('Y','T');
			container.put('H','G');
			container.put('N','B');
			container.put('U','Y');
			container.put('J','H');
			container.put('M','N');
			container.put('I','U');
			container.put('K','J');
			container.put('O','I');
			container.put('L','K');
			container.put('P','O');
			container.put(',','M');
			container.put('/','.');
			container.put('1','`');
			container.put('2','1');
			container.put('3','2');
			container.put('4','3');
			container.put('5','4');
			container.put('6','5');
			container.put('7','6');
			container.put('8','7');
			container.put('9','8');
			container.put('0','9');
			container.put('-','0');
			container.put('=','-');
			container.put('\\',']');
			container.put(']','[');
			container.put('[','P');
			container.put(';','L');

			for (int i = 0; i < cad.length(); i++) {
				if(cad.charAt(i)==' ') System.out.print(" ");
				else System.out.print(container.get(cad.charAt(i)));	
			}
			System.out.println();
		}
	}			
}