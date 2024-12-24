// https://cses.fi/problemset/task/1667

#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
#include<unordered_map>
using namespace std;

int solve(int i,int n,vector<vector<int>> &graph,vector<int> &visi,unordered_map<int,int> &parent){

    // priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>> pq;
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
    pq.push({0,i});
    visi[i]=1;
    parent[i]=i;

    while(!pq.empty()){
        auto var=pq.top().second;
        auto dis=pq.top().first;
        pq.pop();
        for(auto f:graph[var]){
            if(visi[f]!=1){
                pq.push({dis+1,f});
                parent[f]=var;
                visi[f]=1;
                if(f==n) return dis+1;
            }
        }
    }
    return -1;
}

void findparent(int n,unordered_map<int,int> &parent,vector<int> &ans){

    if(parent[n]==n){
        ans.push_back(n);
        return;
    }

    ans.push_back(n);
    findparent(parent[n],parent,ans);
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
    vector<int> visi(v+1,0);
    unordered_map<int,int> parent;
    for(int i=0;i<e;i++){
        graph[list[i][0]].push_back(list[i][1]);
        graph[list[i][1]].push_back(list[i][0]);
    }


    int n=solve(1,v,graph,visi,parent);
    vector<int> path;
    findparent(v,parent,path);
    reverse(path.begin(),path.end());

    if(n==-1) cout<<"IMPOSSIBLE"<<endl;
    else{
        cout<<n+1;
        cout<<endl;
        for(auto i:path){
            cout<<i<<" ";
        }
    }

    // for(auto f:parent){
    //     cout<<f.first<<" -> "<<f.second<<endl;
    // }



}