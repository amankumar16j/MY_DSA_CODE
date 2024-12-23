#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    string st="(abcd)";
    int n=st.size();
    int i=0;
    int j=st.size()-1;
    int turn=0;
    while(i<=j){
        if(turn%2==0){
            while(st[i]!='(' && i<n) i++;
            while(st[j]!=')' && j>=0) j--;
            cout<<i<<endl;
            reverse(st.begin()+i,st.begin()+j+1);
            cout<<i<<endl;
        }
        else{
            while(st[i]!=')' && i<n) i++;
            while(st[j]!='(' && j>=0) j--;
            reverse(st.begin()+i,st.begin()+j+1);
        }
        turn++;
        i++;
        j--;
    }
    string ans="";
    for(auto i:st){
        if(i!=')' && i!='('){
            ans=ans+i;
        }
    }
    cout<<ans;
}