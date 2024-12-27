/*

find first negitive of every window

arr=[2,-3,4,4,-7,-1,4,-2,6]
k=4


output:[-3,-3,-7,-7,-7,-1]



*/


#include<iostream>
#include<vector>

using namespace std;

int main(){


    int arr[]={2,-3,4,4,-7,-1,4,-2,6};

    //int arr[]={1,2,3,4,5,6,7,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=4;
    int p=0;

    vector<int> v1;
    for(int i=0;i<k;i++){
        if(arr[i]<0){
            p=i;
            v1.push_back(arr[p]);
            break;
        }
    }

    int i=1;
    int j=k;
    while(j<n){

        if(i<=p){
            if(arr[p]<0)
            v1.push_back(arr[p]);  
        }
        else{
            for(int p=i;p<=j;p++){
                if(arr[p]<0){
                    v1.push_back(arr[p]);
                    break;
                }
            }
        }

        i++;
        j++;
    }

    for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<" ";
    }

    cout<<v1.size();
}

