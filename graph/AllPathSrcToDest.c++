#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
#include<queue>
using namespace std;

vector<vector<int>> ans;

void createUndirectedGraph(int src,int dest,vector<set<int>> &graph){
    graph[src].insert(dest);
    graph[dest].insert(src);
}
void createdirectedGraph(int src,int dest,vector<set<int>> &graph){
    graph[src].insert(dest);
}




void noOfPaths(int v,vector<int> visi,vector<set<int>> &graph,int k,int &count,vector<int> con){

    if(v==k){
        count++;
        con.push_back(k);
        ans.push_back(con);
        con.push_back(k);
        return;
    }


    visi[v]=1;
    con.push_back(v);
    for(auto i:graph[v]){
        if(visi[i]!=1){
            noOfPaths(i,visi,graph,k,count,con);
        }
    }
    con.pop_back();
}

void takeInput(int v,int e,vector<set<int>> &graph){
    for(int i=0;i<e;i++){
        int src,dest;
        cin>>src>>dest;
        createUndirectedGraph(src,dest,graph);
    }
}

int main(){
    int v,e;
    cin>>v>>e;
    int k=5;
    int count=0;
    vector<set<int>> graph(v);
    vector<int> visi(v,0);
    vector<int> con;

    takeInput(v,e,graph);
    noOfPaths(0,visi,graph,k,count,con);


    for(int i=0;i<ans.size();i++){
        for(auto j:ans[i]){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}