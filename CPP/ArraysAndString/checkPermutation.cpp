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
	int ar1[256]={0},ar2[256]={0};
	for(int j=0;j<s1.size();j++){
		ar1[s1[j]]++;
		ar2[s2[j]]++;
	}
	for(int j=0;j<256;j++){
		if(ar1[j]!=ar2[j]){
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
