#include<iostream>
#include<queue>
using namespace std;

int visited[100];

void DFS(int g[][100], queue<int> q ,int size,int u){

    cout<<u<<" ";
    q.push(u);
    visited[u]=1;

    while(!q.empty()){
        u=q.front();
        q.pop();

        for(int i=0;i<size;i++){
            if(g[u][i]==1 && visited[i]==0){
                cout<<i<<" ";
                visited[i]=1;
                q.push(i);
            }
        }
    }
}

int main(){
    int n=7;
    int graph[100][100]={{0,1,1,1,0,0,0},
                     {1,0,1,0,0,0,0},
                     {1,1,0,1,1,0,0},
                     {1,0,1,0,1,0,0},
                     {0,0,1,1,0,1,1},
                     {0,0,0,0,1,0,0},
                     {0,0,0,0,1,0,0}};
    
    queue<int> q1;
    DFS(graph,q1,n,5);

}
