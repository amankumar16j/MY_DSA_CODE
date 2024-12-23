//reversing array


#include<stdio.h>

void rev(int arr[],int n){
    for (int i =0;i<n/2;i++){
        int fn=arr[i];
        int sn=arr[n-i-1];
        arr[i]=sn;
        arr[n-i-1]=fn;
    }
}

int main(){
    int arr[]={1,6,4,9,7,2};
    int n;
    rev(arr,6);
    for(int i=0;i<6;i++){
        printf("%d\t",arr[i]);
    }


}