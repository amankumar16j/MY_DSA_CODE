#include<iostream>
using namespace std;
void length(int arr[][100],int n){
    int value=0;
    for(int k=0;k<n;k++){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(arr[i][k]!=-1 && arr[k][j]!=-1){
                    value=arr[i][k]+arr[k][j];
                    if(arr[i][j]==-1) arr[i][j]=value;
                    else if(arr[i][j]>value){
                        arr[i][j]=value;
                    }
                }
            }
        }
    }
}
void pathdis(int arr[][100],int n,int src,int dis){
    length(arr,n);
    cout<<"distance from "<<src<<" to "<<dis<<" = "<<arr[src][dis];
}
int main(){
    int arr[100][100]={{0,3,-1,7},
                       {8,0,2,-1},
                       {5,-1,0,1},
                       {2,-1,-1,0}
                        };

    int n=4;
    int src,dest;
    cout<<"enter source vertices: ";
    cin>>src;
    cout<<"enter destination vertices: ";
    cin>>dest;
    pathdis(arr,n,src,dest);
}


    // int arr2[100][100];
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         arr2[i][j]=arr[i][j];
    //     }
    // }
// void display(int arr[][100],int n){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }