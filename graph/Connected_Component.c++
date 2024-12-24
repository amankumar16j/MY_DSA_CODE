#include<iostream>
#include<vector>

using namespace std;

void createUndirectedGraph(int src,int dest,vector<vector<int>> &graph){
    graph[src].push_back(dest);
    graph[dest].push_back(src);
}

void DFS(int v,vector<int> &visi,vector<vector<int>> &graph){
    visi[v]=1;
    cout<<v<<" ";
    for(auto i:graph[v]){
        if(visi[i]!=1){
            DFS(i,visi,graph);
        }
    }
}

int main(){
    int v,e;
    cin>>v>>e;
    vector<vector<int>> graph(v);

    for(int i=0;i<e;i++){
        int src,dest;
        cin>>src>>dest;
        createUndirectedGraph(src,dest,graph);
    }

    vector<int> visi(v,0);
    int count=0;
    for(int i=0;i<v;i++){

        if(visi[i]!=1){
            DFS(i,visi,graph);
            count++;
            cout<<endl;
        }
    }
    cout<<endl;
    cout<<count;
}