#include<iostream>
#include<cstring>
using namespace std;

/**
* Length of the string is different then string are not permuted.
* If length is same then counts the ascii character of each string and compares both array with each other. If they are same then string is permuted else is not.
*/
string checkPermutation(string s1,string s2){
	if(s1.size()!=s2.size()){
		return "Not Permutation!";
	}
	int arr[256]={0};
	for(int j=0;j<s1.size();j++){
		arr[s1[j]]++;
	}
	for(int j=0;j<s2.size();j++){
		if(--arr[s2[j]]<0){
			return "Not Permutation!";
		}
	}
	return "Permutation!";
}

int main(){
	int t;
	string str1,str2;
	cin>>t;
	cin.ignore();
	for(int i=0;i<t;i++){
		getline(cin,str1);
		getline(cin,str2);
		cout<<checkPermutation(str1,str2)<<endl;
	}
	return 0;
}
