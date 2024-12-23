//merging two array and arranging in ascending order 
#include<stdio.h>
int main(){
    int temp;
    int a[]={4,6,8,9,2};
    int b[]={5,10,20,70,32};
    int k=0;
    int c[100];
    for(int i=0;i<5;i++){
        c[k]=a[i];
        k++;
    }
    for(int i=0;i<5;i++){
        c[k]=b[i];
        k++;
    }
    for(int i=0;i<10;i++){
        for(int j=i+1;j<10;j++){
            if(c[i]>c[j]){
                temp=c[i];
                c[i]=c[j];
                c[j]=temp;
              
            }
        }
    }

    for(int i=0;i<10;i++){
        printf("%d\t",c[i]);
    }
}
