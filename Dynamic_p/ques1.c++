#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;

int main(){

    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int ss,inds;
        cin>>ss>>inds;
        string st="";
        for(int j=0;j<ss;j++){
            char c;
            cin>>c;
            st+=c;
        }
        set<int> ind;
        for(int k=0;k<inds;k++){
            int val;
            cin>>val;
            ind.insert(val);
        }
        string ch="";
        for(int l=0;l<inds;l++){
            char c;
            cin>>c;
            ch+=c;
        } 
        // cout<<ch;   
        sort(ch.begin(),ch.end());

        int counter=0;
        for(auto z:ind){
            st[z-1]=ch[counter];
            counter++;
        }
        cout<<st<<endl;
    }

    

}