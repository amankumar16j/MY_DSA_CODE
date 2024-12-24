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



void BFS(int v,vector<int>&visi,vector<set<int>> &graph,vector<int> &dist,vector<int> &parent){


    queue<int> q;
    q.push(v);
    visi[v]=1;
    dist[v]=0;
    while(q.size()>0){
        int v=q.front();
        q.pop();
        cout<<v<<" ";
        for(auto i:graph[v]){
            if(visi[i]!=1){
                visi[i]=1;
                q.push(i);
                dist[i]=dist[v]+1;
                parent[i]=v;
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
    vector<int> dist(v,0);
    vector<int> parent(v,0);
    BFS(0,visi,graph,dist,parent);
    cout<<endl;

    for(auto i:dist){
        cout<<i<<" ";
    }
    cout<<endl;
    int i=0;
    for(auto j:parent){

        cout<<"parent of "<<i<<" is "<<j<<endl;
        i++;
    }
}