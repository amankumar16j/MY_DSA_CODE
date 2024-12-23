// You are using GCC
#include <stdio.h>
#include <stdlib.h>
#include<iostream>
using namespace std;

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* root = NULL;
struct Node* temp;

struct Node* createNode(int input)
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = input;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

//Function to build the tree
void create(int input) {
    Node* p=root;
   if(root==NULL){
       root=createNode(input);
   }
   else{
   while((input<p->data && p->left!=NULL) || (input>p->data && p->right!=NULL)){
       if(input<p->data){
           p=p->left;
       }
       else{
           p=p->right;
       }
   }
   
   if(input<p->data){
       p->left=createNode(input);
   }
   else{
       p->right=createNode(input);
   }
   }
   
}

//Function to perform the preorder traversal
void preorder(struct Node* temp) {
    
    if(temp){
        cout<<temp->data<<" ";
        preorder(temp->left);
        preorder(temp->right);
    }
    
}

int main()
{
    int input;
    while (1)
    {
        scanf("%d", &input);
        if (input < 1)
            break;
        create(input);
    }
    preorder(root);
    return 0;
}