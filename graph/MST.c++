#include<iostream>
#include<vector>
using namespace std;

class MST{

    vector<int> rank;
    vector<int> parent;
    int sum;

    public:

    MST(int n){
        rank.resize(n+1,0);
        parent.resize(n+1);
        for(int i=1;i<=n;i++){
            parent[i]=i;
        }
        sum=0;
    }

    int findparent(int i){
        if(i==parent[i]) return i;

        return parent[i]=findparent(parent[i]);
    }

    void Drank(int w, int u,int v){

        int pu=findparent(u);
        int pv=findparent(v);

        if(pu==pv) return;

        if(rank[pu]==rank[pv]){
            rank[pu]++;
            parent[pv]=pu;
            sum=sum+w;
        }
        else if(rank[pu]>rank[pv]){
            parent[pv]=pu;
            sum=sum+w;
        }
        else{
            parent[pu]=pv;
            sum=sum+w;
        }
    }

    int getsum(){
        return sum;
    }
};


int main(){

    MST mt(6);
    mt.Drank(1,1,4);
    mt.Drank(2,1,2);
    mt.Drank(3,2,3);
    mt.Drank(3,2,4);
    mt.Drank(4,1,5);
    mt.Drank(5,3,4);
    mt.Drank(7,2,6);
    mt.Drank(8,3,6);
    mt.Drank(9,4,5);

    cout<<mt.getsum();

}