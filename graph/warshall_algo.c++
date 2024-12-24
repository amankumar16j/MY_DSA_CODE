#include<iostream>
using namespace std;

void warshal(int arr[][100],int n){

    for(int k=0;k<n;k++){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(arr[i][k] && arr[k][j]){
                    arr[i][j]=arr[i][j]||(arr[i][k] && arr[k][j]);
                }
            }
        }
    }
}

void validate(int arr[][100],int n,int src,int dest){
    
    warshal(arr,n);

    if(arr[src][dest]==1){
        cout<<"the path exist"<<endl;
    }
    else{
        cout<<"the path do not exist"<<endl;
    }

}

int main(){
    int n=4;
    int arr[100][100]={
                        {0,0,1,0},
                        {1,0,0,1},
                        {0,0,0,0},
                        {0,1,0,0}
                    };

    int arr2[100][100]={0};

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            arr2[i][j]=arr[i][j];
        }
    }

    int src,dest;
    cout<<"enter the source:";
    cin>>src;
    cout<<"enter the destination:";
    cin>>dest;

    validate(arr2,n,src,dest);


}