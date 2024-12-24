#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<vector<int>> vec={{1,0},{0,1},{-1,0},{0,-1}};

void dfs(int i, int j, vector<vector<int>> &visi,vector<vector<char>> &graph){
    int n=graph.size();
    int m=graph[0].size();

    visi[i][j]=1;

    for(auto f:vec){
        int a=i+f[0];
        int b=j+f[1];

        if(a<n && b<m && a>=0 && b>=0 && visi[a][b]!=1 && graph[a][b]!='#'){
            dfs(a,b,visi,graph);
        }
    }
}


int main(){

    int n,m;
    cin>>n>>m;
    vector<vector<char>> graph(n,vector<char>(m));

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>graph[i][j];
        }
    }

    vector<vector<int>> vis(n,vector<int>(m,0));
    int count=0;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            
            if(graph[i][j]=='.' && vis[i][j]!=1){
                dfs(i,j,vis,graph);
                count++;
            }
        }
    }

    cout<<count;
}