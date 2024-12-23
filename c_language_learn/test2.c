/* 1*2*3*4*5*6*7*8*9*10*11
     3*4*5*6*7*8*9*10*11
       5*6*7*8*9*10*11
         7*8*9*10*11
          9*10*11
            11

        */  


//pending work

#include<stdio.h>
int main (){

    int n=1;
    int a;
    printf("enter the no. of line :");
    scanf("%d", &a);

    for( int i=1;i<=a;i++){

        for(int s=1;s<=a;i++){
            printf("  ");
        }
        
        for(int j=n;j<=a;j++){
            printf("%d",j);

            if(j<a){
            printf("*");}

        }
        printf("\n");
        n=n+1;
    }
}