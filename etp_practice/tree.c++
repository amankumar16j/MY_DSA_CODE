#include<iostream>
using namespace std;

struct tree{
    tree *lchild;
    int data;
    tree *rchild;
}*root=NULL;

struct queue{

    tree* que[100]={NULL};
    int rear=-1;
    int front=-1;
    // queue(){
    //     //que=new tree[100];
    //     rear=front=-1;
    // }
};

void enqueue(tree *p, queue &q){
    if(q.rear==-1 && q.front==-1){
        q.front++;
        q.rear++;
        q.que[q.rear]=p;  
    }
    else{
        q.rear++;
        q.que[q.rear]=p;
    }  
}

tree* dequeue(queue &q){
    tree *r=NULL;

    if(q.front<=q.rear){
    r=q.que[q.front];
    q.front++;
    }

    return r;
}

tree* createNode(int data){
    tree* temp=new tree;
    temp->data=data;
    temp->lchild=NULL;
    temp->rchild=NULL;
    return temp;
}


tree* create(tree *root){
    queue q;
    int x;

    tree *p,*temp;
    cout<<"enter root: ";
    cin>>x;
    if(root==NULL){
        root=new tree;
        root->data=x;
        root->lchild=NULL;
        root->rchild=NULL;
        enqueue(root,q);
    }
    while(q.front<=q.rear){
        p=dequeue(q);
        cout<<"enter left child else enter -1: ";
        cin>>x;

        if(x!=-1){
            temp=createNode(x);
            p->lchild=temp;
            enqueue(temp,q);
        }

        cout<<"enter right child else enter -1: ";
        cin>>x;

        if(x!=-1){
            temp=createNode(x);
            p->rchild=temp;
            enqueue(temp,q);
        }
        
    }

    return root;

}


void preorder(tree *p){
    if(p){
        cout<<p->data<<" ";
        preorder(p->lchild);
        preorder(p->rchild);
    }
}



int main(){
    tree *t1;
   // queue *q1;
    t1=create(root); 
    preorder(t1);
}