#include<iostream>
#include<cstring>
using namespace std;

/**
* Replaces the spaces in the string with '%20' after stripping the string.
* Takes 2 arguements 1 actual string and another one the returned string.
* Takes twice as much space but still has efficiency of O(n)!
*
*/
char* replaceString(char * str, char* replacedStr,int size){
    int len=strlen(str),count=0;
    for(int i=0;i<len;i++){
        if(str[i]!=' '){
            replacedStr[count]=str[i];
            size--;
            count++;
            if(size==0){
                return replacedStr;
            }
            continue;
        }else{
            while(str[i]==' '){
                i++;
                if(len<=i){
                    return replacedStr;
                }
            }
            i--;
            replacedStr[count]='%';
            replacedStr[count+1]='2';
            replacedStr[count+2]='0';
            count+=3;
        }
    }
    return replacedStr;
}

int main(){
    int testCases,size;
    char s[1000], str[1000];;
    cin>>testCases;
    cin.ignore();
    for(int i=0;i<testCases;i++){
        cin.getline(s,1000);
        cin>>size;
        cin.ignore();
        cout<<replaceString(s,str,size)<<endl;
    }
    return 0;
}
