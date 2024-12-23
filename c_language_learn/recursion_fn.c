// print 0 to n using recursion
//print n to 0 using recursion

#include<stdio.h>

void series(int n,int l){          //printing numbers in ascending order
    
    if(n<=l){
        printf("%d\n",n);
        series(n+1,l);

    }

}

void series3(int n){         // another way to print 0 to n, here operation is performed after returning

    if(n>=0){
        series3(n-1);
        printf("%d\n",n);
    }
}

void series2(int n){             //printing numbers in descending order

    if(n>=0){
        printf("%d\n",n);
        series2(n-1);
    }
}

int main(){

    int n=0;
    int l;

    printf("enter the last no. :");
    scanf("%d",&l);

    series(n,l);
    printf("\n");
    series2(l);

}