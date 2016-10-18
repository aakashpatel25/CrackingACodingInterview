//
//  balancedTree.cpp
//  Practice
//
//  Created by Aakash Patel on 2016-10-11.
//  Copyright © 2016 Cracking The Coding Interview. All rights reserved.
//

#include<iostream>
#include<new>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
};

Node* createNewNode(int data){
    Node* temp =  new Node;
    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

int checkHeight(Node* root){
    if(root==NULL){
        return 0;
    }else{
        int left = checkHeight(root->left);
        int right = checkHeight(root->right);
        if(left>right){
            return left+1;
        }else{
            return right+1;
        }
    }
}

int main(){
    Node* root = createNewNode(5);
    root->left = createNewNode(4);
    root->right = createNewNode(6);
    root->left->left = createNewNode(2);
    root->right->left = createNewNode(7);
    root->left->right = createNewNode(3);
    root->right->right = createNewNode(8);
    root->right->right->right = createNewNode(9);
    root->right->right->right->right = createNewNode(10);
    cout<<(checkHeight(root->left)==checkHeight(root->right) || checkHeight(root->left)==checkHeight(root->right)+1 || checkHeight(root->left)==checkHeight(root->right)-1 )<<endl;
    return 0;
}
