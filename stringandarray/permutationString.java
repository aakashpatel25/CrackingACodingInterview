package com.aakash.arrayandstrings;

import java.util.Scanner;

public class permutationString {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		System.out.print("Enter firts string: ");
		String string1 = input.nextLine();
		System.out.print("Enter second string: ");
		String string2 = input.nextLine();
		boolean result = checkPermutation(string1,string2);
		input.close();
		System.out.println(result);
	}
	
	private static String sortString(String string){
		char[] arry=string.toCharArray();
		java.util.Arrays.sort(arry);
		return new String(arry);
	}
	
	private static boolean checkPermutation(String string1,String string2){
		if(string1.length()!=string2.length())
			return false;
		if(sortString(string1).equals(sortString(string2))){
			return true;
		}
		return false;
	}
}