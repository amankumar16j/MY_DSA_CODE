// printing factorial of a number

#include<stdio.h>

int fact(int n){

    long factorial;
    if(n==0){
        return 1;
    }
    else if(n>0){

        return(n*fact(n-1));
    }

    
}



int main(){
    long n=5;
    printf("factorial=%lu",fact(n));
}