#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

pair<vector<int>,bool> dfs(int i,int n,vector<vector<int>> &graph,vector<int> visi,vector<int> ans){
    visi[i]=1;
    ans.push_back(i);
    vector<int> vec;


    if(i==n) return {ans,true};

    for(auto k:graph[i]){
        if(visi[k]!=1){
            pair<vector<int>,bool> temp;
            temp=dfs(k,n,graph,visi,ans);
            if(temp.second){
                if(vec.size()==0){
                    vec=temp.first;
                }
                else if(temp.first.size()<vec.size()){
                    vec=temp.first;
                }
            } 
        }
    }

    if(vec.size()==0){
        return {vec,false};     
    }

    return {vec,true};

}

int main(){
    int v,e;
    cin>>v>>e;

    vector<vector<int>> list(e,vector<int>(2));

    for(int i=0;i<e;i++){
        int a,b;
        cin>>a>>b;
        list[i]={a,b};
    }

    vector<vector<int>> graph(v+1);
    for(int i=0;i<e;i++){
        graph[list[i][0]].push_back(list[i][1]);
        graph[list[i][1]].push_back(list[i][0]);
    }

    vector<int> visi(v+1,0);
    pair<vector<int>,bool> ans;

    

    ans=dfs(1,v,graph,visi,ans.first);
    if(ans.first.size()==0) cout<<"IMPOSSIBLE"<<endl;
    else{
        cout<<ans.first.size()<<endl;
        for(auto i:ans.first){
            cout<<i<<" ";
        }
    }
}