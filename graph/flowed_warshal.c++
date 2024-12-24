#include<iostream>
#include<vector>
#include<limits.h>
#include<string>

using namespace std;

int main(){
    vector<vector<int>> graph={{0,5,10,2},
                       {100000000,0,100000000,100000000},
                       {1,100000000,0,100000000},
                       {100000000,2,3,0}
                        };


    for(int k=0;k<4;k++){
        for(int i=0;i<4;i++){
            for(int j=0;j<4;j++){
                graph[i][j]=min(graph[i][j],(graph[i][k]+graph[k][j]));
            }
        }
    }

    for(int i=0;i<4;i++){
        for(auto j:graph[i]){
            cout<<j<<" "; 
        }
        cout<<endl;
    }
}