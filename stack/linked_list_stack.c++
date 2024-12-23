#include<iostream>

using namespace std;

struct stack{
    int data;
    stack *link;
    void push(int x);
    int pop();
    int count();
    void peek(int pos);
    void is_empty();
    int upper();
} *top=NULL;


void stack::push(int x){

    stack *temp;
    temp=new stack;

    if(temp==NULL){
        cout<<"overflow";
    }
    else{
    temp->data=x;
    temp->link=top;
    top=temp;
    }
};

int stack:: pop(){

    int val;
    if(top->link==NULL){
        cout<<"Stack underflow";
    }
    else{
        val=top->data;
        top=top->link;
    }
    return val;
}; 

int stack::count(){
    stack *last;
    last=top;
    int num=0;
    while(last!=NULL){
        ++num;
        last=last->link;
    }
    return num;
};

void stack::peek(int pos){

    stack *temp;
    temp=top;

    if(temp==NULL){
        cout<<"the stack is empty";
    }
    else if(pos==0 || pos>count()){
        cout<<"the position is zero or out of range";
    }
    else{
        for(int i=0;i<pos-1;i++){
            temp=temp->link;
        }
        cout<<"the searched value is:" <<temp->data;
    }
}

void stack::is_empty(){
    if(top==NULL)
        cout<<"the stack is empty";
    
    else cout<<"the stack is not empty";
}

int stack::upper(){
    cout<<"the topmost element is:"<<top->data;
}

int main(){
    stack st;
    int result;

    st.push(12);
    st.push(18);
    st.push(28);
    st.push(69);
    st.push(79);
    st.push(43);

    result=st.pop();
    cout<<result;
    cout<<endl;

    // result=st.count();
    // cout<<result;

    // st.peek(0);
    // cout<<endl;

    // st.is_empty();
    // cout<<endl;

    // st.upper();

}
