#include<iostream>
using namespace std;

int is_sorted(int * arr,int n){
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            return 0;
        }
    }
    return 1;
}



void insertion_sort(int *arr,int n){
    int temp;
    for(int i=1;i<n;i++){
        temp=arr[i];
        int j=i-1;
        while(temp<arr[j] && j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;

        if(!is_sorted(arr,n)){
            for(int f=0;f<n;f++){
                cout<<arr[f]<<" ";
            }
        }
        cout<<endl;
    }
    cout<<endl;

    for(int f=0;f<n;f++){
        cout<<arr[f]<<" ";
    }
    
}

void selection_sort(int *arr,int n){  
    int temp;
    int min=0;

    for(int i=0;i<n;i++){
        min=i;
        for(int j=i;j<n;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }

        temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;

        if(!is_sorted(arr,n)){

            for(int f=0;f<n;f++){
                cout<<arr[f]<<" ";
            }
        }
        cout<<endl;
    }

    cout<<endl;
    for(int f=0;f<n;f++){
        cout<<arr[f]<<" ";
    }
}

void bubble_sort(int *arr,int n){

    int temp;

    for(int i=0;i<n-1;i++){
        for(int j=i;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }

        if(!is_sorted(arr,n)){

            for(int f=0;f<n;f++){
                cout<<arr[f]<<" ";
            }
            cout<<endl;
        }
    }

    cout<<endl;

    for(int f=0;f<n;f++){
        cout<<arr[f]<<" ";
    }

}

int main(){

    int *arr;
    int n;
    cout<<"enter the no of element: ";
    cin>>n;

    cout<<"enter the value of array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>*(arr+i);
    }

    //insertion_sort(arr,n);
    selection_sort(arr,n);
    //bubble_sort(arr,n);
}