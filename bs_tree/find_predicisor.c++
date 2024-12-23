
// You are using GCC
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

int predecessor;

//Function to create a new node
Node* newNode(int data) {
    
    Node* newnode=new Node;
    newnode->data=data;
    newnode->left=newnode->right=NULL;
    return newnode;
    
}

//Function to build the tree
Node* insert(Node* root, int data) {
    Node* temp;
    if(root==NULL){
        temp=new Node;
        temp=newNode(data);
        return temp ;
    }
    
    if(data<root->data){
        root->left=insert(root->left,data);
    }
    if(data>root->data){
        root->right=insert(root->right,data);
    }
    
    
    return root;
}

//Function to find the predecessor
void findPredecessor(Node* root, int val) {
    
    Node* p=root;
    Node* r=NULL;
    
    while(p){
        if(val==p->data){
            break;
        }
        if(val<p->data){
            r=p;
            p=p->left;
        }
        if(val>p->data){
            r=p;
            p=p->right;
        }
    }
    
    if(r==NULL){
        cout<<"Doesn't exist"<<endl;
    }
    else{
        cout<<"Inorder Predecessor : "<<r->data<<endl;
    }
    
    
}

int main() {
    Node* root = nullptr;

    int n, data;
    std::cin >> n;

    for (int i = 0; i < n; ++i) {
        std::cin >> data;
        root = insert(root, data);
    }

    int targetData;
    std::cin >> targetData;

    predecessor = -1;
    findPredecessor(root, targetData);

    if (predecessor != -1) {
        std::cout << "Inorder Predecessor : " << predecessor << std::endl;
    } else {
        std::cout << "Doesn't exist";
    }

    delete root;

    return 0;
}