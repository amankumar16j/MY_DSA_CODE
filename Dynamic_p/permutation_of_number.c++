#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> ans;
void solve(int ind,vector<int> &ques,vector<bool> &vec,vector<int> &insert,int n){

    if(insert.size()==ques.size()){
        ans.push_back(insert);
        return;
    }

    for(int i=0;i<ques.size();i++){
        if(vec[i]==false){
            insert.push_back(ques[i]);
            vec[i]=true;
            solve(ind+1,ques,vec,insert,n);
            vec[i]=false;
            insert.pop_back();
        }
    }

}

int main(){
    int n=4;
    vector<int>ques;
    for(int i=1;i<=n;i++){
        ques.push_back(i);
    }
    vector<int>insert;
    vector<bool> vec(n,false);
    solve(0,ques,vec,insert,n);

    for(auto i:ans){
        for(int j=0;j<i.size();j++){
            cout<<i[j]<<" ";
        }
        cout<<endl;
    }
    cout<<ans.size();
}