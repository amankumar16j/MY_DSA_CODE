#include<iostream>
using namespace std;

struct node{
    node* lchild;
    int data;
    int height;
    node* rchild;
}*root=NULL;

int height(node*p){
    int hl,hr;
    hl=p&&p->lchild?p->lchild->height:0;
    hr=p&&p->rchild?p->rchild->height:0;

    return hl>hr?hl+1:hr+1;
}

int df(node *p){
    int hl,hr;
    hl=p&&p->lchild?p->lchild->height:0;
    hr=p&&p->rchild?p->rchild->height:0;

    return hl-hr;
}

node *LLRotation(node *p){
    node* pl=p->lchild;
    node* plr=pl->rchild;

    pl->rchild=p;
    p->lchild=plr;

    p->height=height(p);
    pl->height=height(pl);

    if(root==p){
        root=pl;
    }

    return pl;
}
node *LRRotation(node *p){
    node* pl=p->lchild;
    node* plr=pl->rchild;

    pl->rchild=plr->lchild;
    p->lchild=plr->rchild;
    plr->lchild=pl;
    plr->rchild=p;

    p->height=height(p);
    pl->height=height(pl);
    plr->height=height(plr);

    if(root==p){
        root=plr;
    }

    return plr;
}

node *RRRotation(node *p){
    node* pr=p->rchild;
    node* prl=pr->lchild;

    p->rchild=prl;
    pr->lchild=p;

    p->height=height(p);
    pr->height=height(pr);

    if(p==root){
        root=pr;
    }

    return pr;
}

node *RLRotation(node *p){
    node* pr=p->rchild;
    node* prl=pr->lchild;

    p->rchild=prl->lchild;
    pr->lchild=prl->rchild;

    prl->lchild=p;
    prl->rchild=pr;

    pr->height=height(pr);
    p->height=height(p);
    prl->height=height(prl);

    if(root==p){
        root=prl;
    }

    return prl;
}


node *insert(node* p,int key){
    node *temp;
    if(p==NULL){
        temp=new node;
        temp->data=key;
        temp->height=1;
        temp->lchild=temp->rchild=NULL;
        return temp;
    }

    if(key<p->data)
        p->lchild=insert(p->lchild,key);

    if(key>p->data)
        p->rchild=insert(p->rchild,key);

    p->height=height(p);

    if(df(p)==2 && df(p->lchild)==1){
        return LLRotation(p);
    }
    if(df(p)==2 && df(p->lchild)==-1){
        return LRRotation(p);
    }
    if(df(p)==-2 && df(p->rchild)==-1){
        return RRRotation(p);
    }
    if(df(p)==-2 && df(p->lchild)==1){
        return RLRotation(p);
    }

    return p;
}

node *preorder(node *p){
    if(p){
        cout<<p->data<<" ";
        preorder(p->lchild);
        preorder(p->rchild);
    }
}

int main(){
    root=insert(root,20);
    insert(root,25);
    insert(root,30);
    insert(root,40);
    insert(root,45);
    insert(root,60);
    insert(root,55);
    insert(root,57);
    // insert(root,92);
    // insert(root,94);
    preorder(root);
}