//
//  ReverseString.cpp
//  Practice
//
//  Created by Aakash Patel on 2016-09-23.
//  Copyright © 2016 Cracking The Coding Interview. All rights reserved.
//

#include <iostream>
#include <string>
#include <cstdlib>

char* reverseString(char input[]){
    unsigned long length = strlen(input);
    for(int i=0;i<length/2;i++){
        char temp = input[i];
        input[i] = input[length-i-1];
        input[length-i-1] = temp;
    }
    return input;
}

int main(){
    char ip[1000];
    std::cin>>ip;
    std::cout<<reverseString(ip)<<std::endl;
    return 0;
}
