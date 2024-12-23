#include<iostream>
#include<stack>
using namespace std;

void reverse(stack<int> &st){
    if(st.empty()) return;

    int x=st.top();
    st.pop();
    reverse(st);
    cout<<x<<" ";
}
void push_at_bottom(stack<int> &st,int x){
    if(st.empty()){
        st.push(x);
        return;
    }

    int y=st.top();
    st.pop();
    push_at_bottom(st,x);
    st.push(y);
}

int main(){
    stack<int> st;
    // st.push(1);
    // st.push(2);
    // st.push(3);
    // st.push(4);
    // st.push(5);
    // st.push(6);
    // st.push(7);
    // st.push(8);
    // st.push(9);
    // reverse(st);
    
    push_at_bottom(st,1);
    push_at_bottom(st,2);
    push_at_bottom(st,3);
    push_at_bottom(st,4);
    push_at_bottom(st,5);
    push_at_bottom(st,6);
    push_at_bottom(st,7);
    

    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
}