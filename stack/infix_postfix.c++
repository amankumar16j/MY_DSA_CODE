#include<iostream>
#include<string>

using namespace std;

struct stack{
    int top;
    int n;
    char *st;

    stack(int n){
         top=-1;
        this->n=n;
        st=new char[n];
    }



    int precedence(char a){

        if(a=='+' || a=='-') return 1;
        else if(a=='*' || a=='/') return 2;
        else if(a=='^') return 3;
        else return 0;
    }

    int is_operator(char a){
        if(a=='+' || a=='-' || a=='*' || a=='/' || a=='^') return 1;
        return 0;
    }

    int is_operand(char a){
        if(a=='+' || a=='-' || a=='*' || a=='/' || a=='^' || a=='(' || a==')') return 0;
        return 1;
    }

    void push(char x){

        if(top>n){
            cout<<"overflow!!";
        }
        top++;
        st[top]=x;
    }

    char pop(){
        char n;
        if(top<0){
            cout<<"underflow!";
        }
        else{
            n=st[top];
            top--;
        }
        return n;
    }

    string conversion(string infix){
        string postfix="";
        int i=0;

        while(i<n){

            if(infix[i]==' ' || infix[i]=='\n'){
                i++;
                continue;
            }

            else if(is_operand(infix[i])){
                postfix+=infix[i++];
            }

            else if(infix[i]=='('){
                push(infix[i++]);
            }

            else if(infix[i]==')'){
                while(top>-1 && st[top]!='('){
                    postfix+=pop();
                }
                pop();
                i++;
            }

            else if(is_operator(infix[i])){
                if(precedence(infix[i])<=precedence(st[top])){
                    postfix+=pop();
                }
                else{
                push(infix[i++]);}
            }

        }

        while(top!=-1){
            postfix+=pop();
        }

        return postfix;
    }
};



int main(){
    string op;
    getline(cin,op);
    int size=op.length();
    stack st(size);

    string res=st.conversion(op);
    cout<<res;
}