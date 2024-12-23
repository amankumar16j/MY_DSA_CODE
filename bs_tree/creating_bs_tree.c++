#include<iostream>

using namespace std;

struct bstree{
    int data;
    bstree *lchild;
    bstree *rchild;
    void insert(int x);
}*root=NULL;

void bstree::insert(int x){
    bstree *temp,*p;
    p=root;
    temp=new bstree;
    temp->data=x;
    temp->lchild=temp->rchild=NULL;
    if(root==NULL){
        root=temp;
    }
    else{
        while((p->data<x && p->rchild!=NULL) || (p->data>x && p->lchild!=NULL)){
            if(p->data>x){
                p=p->lchild;
            }
            else if(p->data<x){
                p=p->rchild;
            }
        }

        if(p->data>x){
            p->lchild=temp;
        }
        else if(p->data<x){
            p->rchild=temp;
        }
    }

}

void inorder(bstree *p){
    if(p){
        inorder(p->lchild);
        cout<<p->data<<" ";
        inorder(p->rchild);
    }

}

void preorder(bstree *p){
    if(p){
        cout<<p->data<<" ";
        preorder(p->lchild);
        preorder(p->rchild);
    }

}

int main(){
    int n;
    cout<<"enter the no. of data: ";
    cin>>n;
    bstree b1;
    int num;
    cout<<"insert the number: ";
    for(int i=0;i<n;i++){
        cin>>num;
        b1.insert(num);
    }

    inorder(root);
    cout<<endl;
    preorder(root);

    
}