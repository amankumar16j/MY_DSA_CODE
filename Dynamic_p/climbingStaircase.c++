#include<iostream>
#include<vector>

using namespace std;

int mincost(vector<int> vec,int n,int sum,vector<int> cost){

    if(n>=vec.size()){
        return sum;
    }
    if(cost[n]!=0) return cost[n];

    sum=sum+vec.at(n);
    int x=mincost(vec,n+2,sum,cost);
    int y=mincost(vec,n+1,sum,cost);

    cost[n]=min(x,y);
    return min(x,y);
}

int main(){

    vector<int> vec={1,100,1,1,1,100,1,1,100,1};
    vector<int> cost(vec.size(),0);
    int min1=mincost(vec,0,0,cost);
    int min2=mincost(vec,1,0,cost);
    cout<<min(min1,min2);
}