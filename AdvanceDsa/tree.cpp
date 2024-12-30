#include<iostream>
#include<queue>
using namespace std;

class Node{

    public:
    int val;
    Node* left;
    Node* right;

    Node(int x){
        val=x;
        left=NULL;
        right=NULL;
    }
};

void preorder(Node *p){

    if(p){
        cout<<p->val<<" ";
        preorder(p->left);
        preorder(p->right);
    }

}

int sum(Node *p){
    if(p==NULL){
        return 0;
    }
    return p->val+sum(p->left)+sum(p->right);
}

int count(Node *p){
    if(p==NULL){
        return 0;
    }
    return 1+count(p->left)+count(p->right);
}

int maxi(Node *p){
    if(p==NULL){
        return -100;
    }

    return max(max(maxi(p->left),p->val),maxi(p->right));
}


int height(Node* p){
    if(p==NULL){
        return 0;
    }
    int x=height(p->left);
    int y=height(p->right);

    if(x>y) return x+1;
    else return y+1;
}


int dia(Node *p){

    if (p==NULL){
        return -100;
    }
    int hei=height(p->right)+height(p->left);
    return max(max(hei,dia(p->left)),dia(p->right));
}

bool find(Node *root,int p){
    if(root==NULL) return false;
        if(root->val==p){
            return true;
        }
    return find(root->left,5)||find(root->right,5);
}


void printklevel(Node *p,int value,int k){

    if(p){
        if(value==k){
            cout<<p->val<<" ";
        }
        printklevel(p->left,value+1,k);
        printklevel(p->right,value+1,k);
    }
}
// (p->left==NULL && p->right!=NULL) ||(p->right==NULL && p->left!=NULL)

void right(Node*p){
    if(p==NULL) return;
    
        if(p->left || p->right){
            if(p->right!=NULL)
                right(p->right);
            else
               right(p->left); 
            cout<<p->val<<" ";
        }
}
void left(Node*p){
    if(p==NULL) return;
    if(p->left || p->right){
        cout<<p->val<<" ";
        if(p->left!=NULL)
            left(p->left);
        else
            left(p->right); 
    }
}
void leaf(Node*p){
    if(p){
        if(p->left==NULL && p->right==NULL){
            cout<<p->val<<" ";
        }
        leaf(p->left);
        leaf(p->right);
    }
}

void boundrytrav(Node *p){
    left(p);
    leaf(p);
    right(p->right);
}



int main(){

    Node* n1=new Node(1);
    Node* n2=new Node(2);
    Node* n3=new Node(3);
    Node* n4=new Node(4);
    Node* n5=new Node(5);
    Node* n6=new Node(6);
    Node* n7=new Node(7);
    Node* n8=new Node(8);
    Node* n9=new Node(9);

    n1->left=n2;
    n1->right=n3;
    n2->left=n4;
    n2->right=n5;
    n3->left=n6;
    n3->right=NULL;
    n5->left=n7;
    n5->right=n8;
    n6->right=n9;

    // preorder(n1);
    // cout<<endl;
    // cout<<endl;
    // printklevel(n1,1,3);
    // cout<<endl;

    // cout<<sum(n1);
    // cout<<endl;
    // cout<<count(n1);
    // cout<<endl;
    // cout<<maxi(n1);
    // cout<<endl;

    // cout<<height(n1);
    // cout<<endl;

    

    // cout<<dia(n1);

    // cout<<find(n1,5);

    // queue<Node*> q;

    // q.push(n1);
    // cout<<q.front()->left->val<<" "<<q.front()->right->val;

    boundrytrav(n1);

}
