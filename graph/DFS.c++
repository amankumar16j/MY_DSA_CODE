#include<iostream>
#include<queue>
using namespace std;

int visited[100]={0};

void BFS(int g[][100],int size,int u){
    if(visited[u]==0){
        cout<<u<<" ";
        visited[u]=1;
    }
    for(int i=0;i<size;i++){
        if(g[u][i]==1 && visited[i]==0){
            BFS(g,size,i);
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
    BFS(graph,n,5);

}
