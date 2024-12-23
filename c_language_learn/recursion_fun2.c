//print sum of n no. using recursion
#include<stdio.h>

int sum(int n){

    if(n>0){          
        return n+sum(n-1);  
    }
    
}



int main(){

    int n=5;
    int result=sum(n);

    printf("total sum=%d",result);
}