//
//  main.cpp
//  Practice
//
//  Created by Aakash Patel on 2016-09-23.
//  Copyright © 2016 Cracking The Coding Interview. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int checkUniqueString(string str){
    unsigned long strLen = str.length();
    int asciiArray[256];
    
    if(strLen>256){
        return 0;
    }
    
    for(int i=0;i<256;i++){
        asciiArray[i]=0;
    }
    
    for(int i=0;i<strLen;i++){
        int asciiCode = int(str[i]);
        if(asciiArray[asciiCode]==1){
            return 0;
        }
        asciiArray[asciiCode]++;
    }
    return 1;
}

/*
int main() {
    string input;
    cin>>input;
    if(checkUniqueString(input)){
        cout<<"Unique String"<<endl;
    }else{
        cout<<"Not Unique String"<<endl;
    }
    return 0;
}*/
