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

    void push(int x);
    int pop();
    int is_empty();
    int is_operand(char x);
    int precedence(char x);
    char *convert(char *infix);
    int evaluate(char *infix);

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

int stack::evaluate(char *infix){
    int i,x1,x2,result;
    char *postfix=new char[strlen(infix)];
    postfix=convert(infix);

    for(i=0;postfix[i]!='\0';i++){
        if(is_operand(postfix[i])){
            push(postfix[i]-'0');
        }
        else{
            x2=pop();
            x1=pop();
            switch(postfix[i]){
                case '+':
                    result=x1+x2;
                    push(result);
                    break;

                case '-':
                    result=x1-x2;
                    push(result);
                    break;

                case '*':
                    result=x1*x2;
                    push(result);
                    break;

                case '/':
                    result=x1/x2;
                    push(result);
                    break;
            }
        }
    }

    return pop();
   
}

int main(){
    char infix[]="3*5+6/2-4";
    char *result;
    result=new char(strlen(infix));
    int result2;

    stack st(strlen(infix));

    result=st.convert(infix);
    result2=st.evaluate(infix);
    cout<<"the solution is:"<<result2;
}