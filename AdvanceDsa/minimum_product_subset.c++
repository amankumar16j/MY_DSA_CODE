#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){

    vector<int> v1={-1,3,4,0,7,-2,8,-5};
    sort(v1.begin(),v1.end());
    int negpro=1;
    int popro=1;
    int pocount=0;
    int negcount=0;
    int zerocount=0;
    int minprod;
    int maxneg=-10000;

    for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<"\t";
    }


    for(int i=0;i<v1.size();i++){
        if(v1[i]<0){
            negpro*=v1[i];
            negcount++;
            maxneg=max(maxneg,v1[i]);
        }
        else if(v1[i]>0){
            popro*=v1[i];
            pocount++;
        }
        else{
            zerocount++;
        }
    }

    if(negcount%2==0){
        if(negcount==0){
            minprod=v1[0];
        }
        else{
            minprod=(negpro*popro)/maxneg;
        }


    }else{
        minprod=(negpro*popro);
    }

    if(zerocount && minprod>0){
        minprod=0;
    }

    cout<<endl;
    cout<<minprod;

}