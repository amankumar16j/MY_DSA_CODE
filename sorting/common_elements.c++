#include<iostream>
using namespace std;

struct node{
    int data;
    node *link;
    // void create(node *head);
    // void display(node *head);
    // void common(node *h1,node *h2);     
};

void create(node *& head){
    node *last,*temp;
    int n;
    cin>>n;
    int x;
    cin>>x;
    head=new node;
    head->data=x;
    head->link=head;
    last=head;
    int i=0;
    while(i<n-1){
        cin>>x;
        temp=new node;
        temp->data=x;
        temp->link=last->link;
        last->link=temp;
        last=temp;
        i++;
    }
} 

void display(node *head){
    node *ptr=head;
    do{
        cout<<ptr->data<<" ";
        ptr=ptr->link;
    }while(ptr!=head);
}

void common(node* h1,node* h2){
    node* ptr1=h1;
    node* ptr2=h2;
    int flag=0;
    do{
        ptr2=h2;
        do{
            if(ptr1->data==ptr2->data){
                flag=1; 
            }
            ptr2=ptr2->link;
        }while(ptr2!=h2);
        if(flag==1){
            cout<<ptr1->data<<" ";
        }
        flag=0;
        ptr1=ptr1->link;
    }while(ptr1!=h1);
}


int main(){
    node *h1=NULL,*h2=NULL;

    int test;
    cin>>test;
    create(h1);
    create(h2);
    cout<<"List 1: ";
    display(h1);
    cout<<endl;
    cout<<"List 2: ";
    display(h2);
    cout<<endl;
    common(h1,h2);
    


}