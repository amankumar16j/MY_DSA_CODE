#include<iostream>

using namespace std;

struct bstree{
    int data;
    bstree *lchild;
    bstree *rchild;
    void insert(int x);
    bstree * recursive_insert(bstree *p,int x);
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

bstree * recursive_insert(bstree *p,int x){
    bstree *temp;
    if(p==NULL){
        temp=new bstree;
        temp->data=x;
        temp->lchild=temp->rchild=NULL;
        return temp;
    }
    if(x<p->data){
        p->lchild=recursive_insert(p->lchild,x);
    }
    else if(x>p->data){
        p->rchild=recursive_insert(p->rchild,x);
    }

    return p;
}

void inorder(bstree *p){
    if(p){
        inorder(p->lchild);
        cout<<p->data<<" ";
        inorder(p->rchild);
    }

}

void search(int x){
    bstree *p=root;
    int count=0;
    while(p->lchild || p->rchild){

        if(p->data==x){
            count++;
            break;
        }
        else if(p->data>x){
            p=p->lchild;
        }
        else{
            p=p->rchild;
        }
    }

    if(count==0){
        cout<<"element not present in tree";
    }
    else{
        cout<<"element present in the tree";
    }
}

// void preorder(bstree *p){
//     if(p){
//         cout<<p->data<<" ";
//         preorder(p->lchild);
//         preorder(p->rchild);
//     }

// }

int no_nodes(bstree *p){
    int x,y;
    if(p==NULL) return 0;
    x=no_nodes(p->lchild);
    y=no_nodes(p->rchild);
    
    return x+y+1;
}

int height(bstree *p){

    int x,y;
    if(p==NULL){
        return 0;
    }
    x=height(p->lchild);
    y=height(p->rchild);
    if(x>=y) return x+1;
    if(y>x) return y+1;
}

bstree *inopre(bstree *p){
    while(p && p->rchild){
        p=p->rchild;
    }
    return p;
}

bstree *inosucc(bstree *p){
    while(p && p->lchild){
        p=p->lchild;
    }
    return p;
}

bstree * delete1(bstree *p,int x){
    bstree *q;
    if(p==NULL) return NULL;
    if(p->rchild==NULL && p->lchild==NULL){
        if(p==root) root==NULL;
        delete p;
        return NULL;
    }
    if(x<p->data) p->lchild=delete1(p->lchild,x);
    else if(x>p->data) p->rchild=delete1(p->rchild,x);
    else{
        if(height(p->lchild)>height(p->rchild)){
            q=inopre(p->lchild);
            p->data=q->data;
            p->lchild=delete1(p->lchild,p->data);
        }
        if(height(p->rchild)>height(p->lchild)){
            q=inosucc(p->rchild);
            p->data=q->data;
            p->rchild=delete1(p->rchild,p->data);
        }
    }

    return p;
}

int main(){
    int n;
    cout<<"enter the no. of data: ";
    cin>>n;
    bstree *b1;
    bstree b2;
    int num;
    cout<<"insert the number: ";
    for(int i=0;i<n;i++){
        cin>>num;
        b2.insert(num);
    }
    // for(int i=0;i<n;i++){
    //     cin>>num;
    //     root=recursive_insert(root,num);
    // }

    inorder(root);
    cout<<endl;
    // search(6);
    b1=delete1(root,7);
    inorder(b1);    

    // int x=height(root);
    // cout<<x;
}