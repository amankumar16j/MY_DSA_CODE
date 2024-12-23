#include<stdio.h>
/*

         *
       * * *
     * * * * *
     
*/
int main() {

    int s=10;

    for( int i=1;i<=10;i++)
    {
        for( int j=1;j<s;j++){
            printf("  ");
        }
        for(int j=i;j>0;j--){
            printf("* ");
        }
        for(int j=2;j<=i;j++){
            printf("* ");
        }
        s=s-1;
        printf("\n");
        

    }
    
    
}