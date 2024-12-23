#include<iostream>

using namespace std;

struct stack{

    int n;
    int top;
    int *s;

    stack(int n){

        this->n=n;
        s=new int[n];
        top=-1;
    }

    void push(int x);
    int pop();
    void peek(int pos);
    void is_empty();
    void is_full();
    int upper();
};

void stack::push(int x){

    if(top>=n-1){
        cout<<"Stack Overflow";
    }
    else{
        top++;
        s[top]=x;
    }
}

int stack::pop(){
    int del;
    if(top<0){
        cout<<"Stack Underflow";
    }
    else{
        del=s[top];
        top--;
    }
    return del;
}

void stack::peek(int pos){
    int elem=-1;
    if(top<0){
        cout<<"Stack Is Empty";
    }
    else if(top-pos+1<0){
        cout<<"Position out of range";
    }
    else if(top-pos+1>=0){
        elem=s[top-pos+1];
        cout<<elem;
    }
}

void stack:: is_empty(){

    if(top<0){
        cout<<"The Stack Is Empty";
    }
    else{
        cout<<"The stack is not empty";
    }
}

void stack::is_full(){
    if(top>=n-1){
        cout<<"the stack is full";
    }
    else{
        cout<<"the stack is not full";
    }
}

int stack::upper(){
    cout<<"the top most element is:"<<s[top];
}



int main(){
    
    stack st(8);
    st.push(20);
    st.push(22);
    st.push(24);
    st.push(29);
    st.push(14);
    st.upper();
    
    




}