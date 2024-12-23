#include<iostream>
#include<vector>

using namespace std;

class Stack{

    public:
        vector<int> stack;
        void push(int x){
            stack.push_back(x);
            cout<<x<<" pushed into stack"<<endl;
        }
        int top(){
            return stack[stack.size()-1];
        }
        bool empty(){
            return stack.empty();
        }
        void pop(){
            if(stack.empty()){
                cout<<"Stack is empty cannot pop element"<<endl;
            }
            else stack.pop_back();
        }
        int size(){
            return stack.size();54ewq
        }
};

int main(){
    Stack st;
    st.pop();
    st.push(5);
    cout<<st.top();
}