package com.aakash.arrayandstrings;

import java.util.Scanner;

public class compressString {
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		System.out.print("Please enter a string: ");
		String sample = input.nextLine();
		sample=compressStr(sample);
		input.close();
		System.out.println(sample);
	}
	
	private static String compressStr(String s){
		StringBuffer compStr = new StringBuffer();
		int count=1;
		char prev=s.charAt(0);
		for(int i=1;i<s.length();i++) {
			if(prev==s.charAt(i)){
				count++;
			} else {
				if(count!=1){
					compStr.append(prev);
					compStr.append(count);
					count=1;
				} else {
					compStr.append(prev);
				}
				prev=s.charAt(i);
			}
		}
		if(count!=1){
			compStr.append(prev);
			compStr.append(count);
			count=1;
		} else {
			compStr.append(prev);
		}
		if(compStr.length()<s.length()){
			return new String(compStr);
		}
		return s;
	}
}