#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
#include<queue>
using namespace std;

void createUndirectedGraph(int src,int dest,vector<set<int>> &graph){
    graph[src].insert(dest);
    graph[dest].insert(src);
}

void print(vector<set<int>> graph){
    for(int i=0;i<graph.size();i++){
        cout<<i<<" <-- ";
        for(auto ed:graph[i]){
            cout<<ed<<", ";
        }
        cout<<endl;
    }
}

void DFS(int v,vector<int> &visi,vector<set<int>> &graph){
    visi[v]=1;
    cout<<v<<" ";
    for(auto i:graph[v]){
        if(visi[i]!=1){
            DFS(i,visi,graph);
        }
    }
}

void BFS(int v,vector<int>&visi,vector<set<int>> &graph){


    queue<int> q;
    q.push(v);
    visi[v]=1;

    while(q.size()>0){
        int v=q.front();
        q.pop();
        cout<<v<<" ";
        for(auto i:graph[v]){
            if(visi[i]!=1){
                visi[i]=1;
                q.push(i);
            }
        }
    }
}

int main(){
    int v,e;
    cin>>v>>e;
    vector<set<int>> graph(v);

    for(int i=0;i<e;i++){
        int src,dest;
        cin>>src>>dest;
        createUndirectedGraph(src,dest,graph);
    }

    vector<int> visi(v,0);
    BFS(0,visi,graph);
}