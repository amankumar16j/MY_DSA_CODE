#include<iostream>
#include<vector>
using namespace std;

class Tree{

    public:
        int val;
        Tree*left;
        Tree*right;

        Tree(int val){
            this->val=val;
            left=NULL;
            right=NULL;
        }
};

Tree * create(Tree* root,int val){

    if(root==NULL){
        // Tree* temp=;
        // root=temp;
        return new Tree(val);
    }
    else{
        if(val>root->val) root->right=create(root->right,val);
        else root->left=create(root->left,val);
    }
    return root;
}


void inorder(Tree* p){
    if(p){
        inorder(p->left);
        cout<<p->val<<" ";
        inorder(p->right);
    }
}
void preorder(Tree* p){
    if(p){
        cout<<p->val<<" ";
        preorder(p->left);
        preorder(p->right);
    }
}

int main(){
    Tree *root=NULL;
    root=create(root,10);
    root=create(root,5);
    root=create(root,15);
    root=create(root,2);
    root=create(root,8);
    root=create(root,12);
    root=create(root,18);
    root=create(root,6);
    root=create(root,3);

    inorder(root);
    cout<<endl;
    preorder(root);
    cout<<endl;

}