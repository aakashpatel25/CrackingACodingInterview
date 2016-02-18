package com.aakash.arrayandstrings;

import java.util.Scanner;

public class replaceString {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		System.out.print("Please enter string: ");
		String sample = input.nextLine();
		System.out.print("Please enter length of string: ");
		int strLen = input.nextInt();
		sample = replaceStr(sample,strLen);
		input.close();
		System.out.println(sample);
	}
	
	private static String replaceStr(String s,int len) {
		StringBuffer string=new StringBuffer();
		char space=' ';
		for(int i=0;i<len;i++){
			if(s.charAt(i)== space){
				string.append("%20");
			} else {
				string.append(s.charAt(i));
			}
		}
		return new String(string);
	}
}