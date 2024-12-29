#include<iostream>
using namespace std;

struct node{
    node *lchild;
    int data;
    node *rchild;
};

node *create_node(int k){
    node *temp=new node;
    temp->data=k;
    temp->lchild=temp->rchild=NULL;
    return temp;
}

int height(node *ptr){
    int x,y;
    if(ptr==NULL){
        return 0;
    }
    x=height(ptr->lchild);
    y=height(ptr->rchild);

    if(x>y){
        return x+1;
    }
    else{
        return y+1;
    }

}

node *inosucc(node *ptr){
    while(ptr && ptr->lchild){
        ptr=ptr->lchild;
    }

    return ptr;
}

node *delete_node(node *root,int k){
    if(root==NULL){
        return NULL;
    }
    if(root->lchild==NULL && root->rchild==NULL){
        delete root;
        return NULL;
    }
    if(root->data>k) root->lchild=delete_node(root->lchild,k);
    else if(root->data<k) root->rchild=delete_node(root->rchild,k);
    else{
        if(height(root->lchild)>height(root->rchild)){
            node *q=inosucc(root->lchild);
            root->data=q->data;
            root->lchild=delete_node(root->lchild,q->data);
        }
        else{
            node *q=inosucc(root->rchild);
            root->data=q->data;
            root->rchild=delete_node(root->rchild,q->data);
        }
    }

    return root;

}

node* insert(node *root,int k){

    if(root==NULL){
        return create_node(k);
    }
    if(root->data>k) root->lchild=insert(root->lchild,k);
    if(root->data<k) root->rchild=insert(root->rchild,k);

    return root;
}

void preorder(node *ptr){
    if(ptr){
        cout<<ptr->data<<" ";
        preorder(ptr->lchild);
        preorder(ptr->rchild);
    }
}

int main(){
    node *root=NULL;
    root=insert(root,5);
    insert(root,7);
    insert(root,2);
    insert(root,9);
    insert(root,14);
    insert(root,13);

    root=delete_node(root,9);
    preorder(root);
}