//sorting an array in descending order
#include<stdio.h>
int main(){

    int t;
    int a[9]={2,3,4,7,1,9,6,8,5};

    for(int i=0;i<9;i++){
        for(int j=i+1;j<9;j++){

        if(a[i]<a[j]){

            t=a[i];
            a[i]=a[j];
            a[j]=t;
        }
    }
    }
    for(int i=0;i<=8;i++){
      printf("%d",a[i]);
    } 
}