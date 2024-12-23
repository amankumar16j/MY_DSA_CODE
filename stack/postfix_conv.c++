#include<iostream>
#include <cstring>

using namespace std;

struct stack{

    int n;
    int top;
    char *s;
    stack(int n){

        this->n=n;
        s=new char[n];
        top=-1;
    }

    void push(char x);
    char pop();
    int is_empty();
    int is_operand(char x);
    int precedence(char x);
    char *convert(char *infix);

};

void stack::push(char x){

    if(top>=n-1){
        cout<<"Stack Overflow";
    }
    else{
        top++;
        s[top]=x;
    }
}

char stack::pop(){
    char del;
    if(top<0){
        cout<<"Stack Underflow";
    }
    else{
        del=s[top];
        top--;
    }
    return del;
}


int stack:: is_empty(){

    if(top<0){
        return 1;
    }
    else{
        return 0;
    }
}

int stack:: is_operand(char x){

    if(x=='+' || x=='-' || x=='/' || x=='*')
        return 0;
    else
        return 1;
}

int stack:: precedence(char x){

    if(x=='+' || x=='-'){
        return 1;
    }
    else if(x=='/' || x=='*'){
        return 2;
    }
    else 
        return 0;
}

char* stack::convert(char * infix){

    char *postfix;
    postfix=new char[strlen(infix)+1];
    int i=0,j=0;

    while(infix[i]!='\0'){
        if(is_operand(infix[i])){
            postfix[j++]=infix[i++];
        }
        else{
            if(precedence(infix[i])>precedence(s[top])){
                push(infix[i++]);
            }
            else{
                postfix[j++]=pop();
            }
        }
    }

    while(!is_empty()){
        postfix[j++]=pop();
    }
    postfix[j] ='\0';
    return postfix;
}



int main(){
    
    char infix[]="a+b*c-d/e";

    char *result;
    result=new char[strlen(infix)];

    stack st(strlen(infix));

    result=st.convert(infix);
    cout<<result;

    


    
}