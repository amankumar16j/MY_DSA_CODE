// https://cses.fi/problemset/task/1194

#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;

vector<vector<int>> moves={{1,0},{0,1},{-1,0},{0,-1}};

int findnearestMonster(int i,int j,vector<vector<char>> &vec){
    int n=vec.size();
    int m=vec[0].size();


    queue<pair<int,pair<int,int>>>pq;
    vector<vector<int>> visi(n,vector<int>(m,0));

    pq.push({0,{i,j}});
    visi[i][j]=1;

    while(!pq.empty()){
        int x=pq.front().second.first;
        int y=pq.front().second.second;
        int dis=pq.front().first;
        pq.pop();

        for(auto f:moves){
            int a=x+f[0];
            int b=y+f[1];

            if(a>=0 && b>=0 && a<n && b<m && visi[a][b]!=1 && vec[a][b]!='#'){
                visi[a][b]=1;
                pq.push({dis+1,{a,b}});
                if(vec[a][b]=='M') return dis+1;    
            }
        }
    }
    return 1000000;
}

string findperson(int i,int j,vector<vector<char>> &vec){
    int n=vec.size();
    int m=vec[0].size();
    string st="no";


    queue<pair<string,pair<int,int>>> pq;
    vector<vector<int>> visi(n,vector<int>(m,0));

    pq.push({"",{i,j}});
    visi[i][j]=1;

    while(!pq.empty()){
        int x=pq.front().second.first;
        int y=pq.front().second.second;
        string dis=pq.front().first;
        pq.pop();

        for(auto f:moves){
            int a=x+f[0];
            int b=y+f[1];
            char mo;
            if(f[0]==1 && f[1]==0) mo='U';
            if(f[0]==-1 && f[1]==0) mo='D';
            if(f[0]==0 && f[1]==-1) mo='R';
            if(f[0]==0 && f[1]==1) mo='L';
            if(a>=0 && b>=0 && a<n && b<m && visi[a][b]!=1 && vec[a][b]=='.'){
                visi[a][b]=1;
                pq.push({dis+mo,{a,b}});   
            }
            else if(a>=0 && b>=0 && a<n && b<m && visi[a][b]!=1 && vec[a][b]=='A'){
                return dis+mo;
            }
            
        }
    }
    return "";

}

// vector<int> findpath(int i,int j,int x,int y,vector<vector<char>> &vec,vector<vector<int>> &visi, vector<char> path){
//     int n=vec.size();
//     int m=vec[0].size();

//     visi[i][j]=1;

//     for(auto f:moves){
//         int a=i+f[0];
//         int b=j+f[1];

//     }

// }

int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<char>> vec(n,vector<char>(m));

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>vec[i][j];
        }
    }

    int a=-1,b=-1;
    bool flag=false;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(vec[i][j]=='A'){
                flag=true;
                a=i;
                b=j;
                break;
            }
        }
        if(flag)break;
    }
    if(a==0 || b==0 || a==n-1 || b==m-1){
        cout<<"YES"<<endl;
        cout<<0<<endl;
    }
    else{

        vector<vector<int>> todo;
        for(int i=0;i<n;i++){
            if(vec[i][0]=='.'){
                todo.push_back({i,0});
            }
            if(vec[i][m-1]=='.'){
                todo.push_back({i,m-1});
            }
        }

        for(int i=0;i<m;i++){
            if(vec[0][i]=='.'){
                todo.push_back({{0,i}});
            }
            if(vec[n-1][i]=='.'){
                todo.push_back({n-1,i});
            }
        }

        bool fg=0;
        string perdis;
        int monsdis=0;

        for(auto f:todo){
            vector<char> path;
            perdis=findperson(f[0],f[1],vec);
            monsdis=findnearestMonster(f[0],f[1],vec);
            int ps=perdis.size();

            if(perdis=="no" || ps==0) continue;

            if(ps<monsdis){
                fg=1;
                break;
            }
            
        }

        if(fg){
            cout<<"YES"<<endl;
            cout<<perdis.size()<<endl;
            reverse(perdis.begin(),perdis.end());
            cout<<perdis<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }


}