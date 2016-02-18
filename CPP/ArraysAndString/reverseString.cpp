#include<iostream>
#include<cstring>
using namespace std;

//Take size of the string and swap elements of the string (first to last) till half the size of the string!
void reverseString(char* str){
	int temp = strlen(str)-1;
	for(int j=0;j<temp/2;j++){
		char tempc = str[j];
		str[j] = str[temp-j];
		str[temp-j]=tempc;
	}
}

int main(){
	int t;
	char str[100];
	cin>>t;
	for(int i=0;i<t;i++){
		cin>>str;
		reverseString(str);
		cout<<str<<endl;
	}
	return 0;
}
