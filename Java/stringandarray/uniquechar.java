package com.aakash.arrayandstrings;

import java.util.Scanner;

public class uniquechar {
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		System.out.print("Please enter a string: ");
		String sample = input.nextLine();
		boolean a = checkUnique(sample);
		System.out.println(a);
		input.close();
	}

	private static boolean checkUnique(String sample){
		boolean[] array = new boolean[256];
		for(int i=0;i<sample.length();i++) {
			char x = sample.charAt(i);
			if(array[x]==true)
				return false;
			array[x]=true;
		}
		return true;
	}
}