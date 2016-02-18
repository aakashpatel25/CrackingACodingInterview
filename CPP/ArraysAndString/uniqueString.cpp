#include<iostream>
using namespace std;

//Returns string stating if string is unique or not.
string isUnique(string s){
	//There are 256 unique ascii characters hence array of size 256.
	int arr[256]={0}
	for(int j=0;j<s.length();j++){
		//Convert character into ascii code.
		int ascii_char = s[j];
		if(arr[x]>0){
			return "Not Unique!";
		}
	//Increment ascii code stating that character encountered.
		arr[x]++;
	}
	return "Unique";
}

int main(){
	int t;
	string input_string;
	cin>>t;
	for(int i=0;i<t;i++){
		cin>>input_string;
		cout<<isUnique(input_string)<<endl;
	}
	return 0;
}
