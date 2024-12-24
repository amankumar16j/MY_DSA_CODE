// You are using GCC
//#include <stdio.h>
#include<iostream>
#define MAX_V 100
using namespace std;



void enqueue(int queue[], int* rear, int vertex) {
    queue[++(*rear)] = vertex;
}

int dequeue(int queue[], int* front) {
    return queue[++(*front)];
}

void bfsOfGraph(int V, int adjList[MAX_V][MAX_V]) 
{
    int visited[100]={0};
    int rear,front;
    int queue[100];
    rear=front=-1;
    int u=0;
    cout<<u<<" ";
    visited[u]=1;
    enqueue(queue,&rear,u);
    
    while(front!=rear){
        u=dequeue(queue,&front);
        for(int i=0;i<V;i++){
            if(adjList[u][i]==1 && visited[i]==0){
                cout<<i<<" ";
                visited[i]=1;
                enqueue(queue,&rear,i);
            }
        }
    }
}

int main() {
    int V, E;
    // scanf("%d %d", &V, &E);
    cin>>V>>E;

    int adjList[MAX_V][MAX_V] = {0};

    for (int i = 0; i < E; ++i) {
        int u, v;
        // scanf("%d %d", &u, &v);
        cin>>u>>v;
        adjList[u][v] = 1;
    }

    bfsOfGraph(V, adjList);

    return 0;
}