#include<iostream>
#include<vector>
using namespace std;

class DSU{
    vector<int> parent,rank,size;
    public:
    DSU(int n){
        parent.resize(n+1);
        rank.resize(n+1,0);
        size.resize(n+1,1);
        for(int i=1;i<=n;i++){
            parent[i]=i;
        }
    }

    int findparent(int i){
        if(i==parent[i]) return i;
        return parent[i]=findparent(parent[i]);
    }

    void union_by_rank(int u,int v){

        int up=findparent(u);
        int vp=findparent(v);

        if(up==vp) return ;

        if(rank[up]<rank[vp]){
            parent[up]=vp;
        }
        else if(rank[up]>rank[vp]){
            parent[vp]=up;
        }
        else{
            parent[vp]=up;
            rank[up]++;
        }
    }

    void union_by_size(int u,int v){

        int up=findparent(u);
        int vp=findparent(v);

        if(up==vp) return ;
        if(size[up]<size[vp]){
            parent[up]=vp;
            size[vp]+=size[up];
        }
        else{
            parent[vp]=up;
            size[up]+=size[vp];
        }
    }
};

int main(){

    DSU d1(7);
    d1.union_by_size(1,2);
    d1.union_by_size(2,3);
    d1.union_by_size(4,5);
    d1.union_by_size(6,7);
    d1.union_by_size(5,6);

    if(d1.findparent(3)==d1.findparent(7)) cout<<"same"<<endl;
    else cout<<"notsame"<<endl;
    d1.union_by_rank(3,7);
    if(d1.findparent(3)==d1.findparent(7)) cout<<"same"<<endl;
    else cout<<"notsame"<<endl;
}