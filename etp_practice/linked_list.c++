#include<iostream>
using namespace std;

struct node{
    int data;
    node *link;
}*head=NULL;

void insert(int k){
    if(head==NULL){
        head=new node;
        head->data=k;
        head->link=NULL;
    }
    else{
        node *last=head,*temp;
        temp=new node;
        temp->data=k;
        temp->link=NULL;

        while(last->link!=NULL){
            last=last->link;
        }
        last->link=temp;
    }
}

void insert_btw(int pos,int key){

    node *temp=new node;
    temp->data=key;
    temp->link=NULL;
    node *p=head;
    int count=0;

    if(pos==1){
        temp->link=head;
        head=temp;
    }
    else{

        while(count!=pos-2 && p!=NULL){
            p=p->link;
            count++;
        }
        temp->link=p->link;
        p->link=temp;
    }
}
int delete_btw(int pos){

    int r;
    node *p=head;
    int count=0;

    if(pos==1){
        r=head->data;
        head=head->link;
    }
    else{

        while(count!=pos-2 && p->link!=NULL){
            p=p->link;
            count++;
        }
        r=p->link->data;
        p->link=p->link->link;
    }
    return r;
}

void display(node *p){
    while(p){
        cout<<p->data<<" ";
        p=p->link;
    }
}

int main(){
    insert(10);
    insert(12);
    insert(13);
    insert(14);
    insert(15);

    display(head);
    cout<<endl;
    insert_btw(1,9);
    insert_btw(3,21);
    insert_btw(8,50);

    display(head);

    cout<<endl;

    cout<<delete_btw(6)<<endl;
    display(head);
}