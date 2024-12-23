 /*                 1 
                  2 1 2
                3 2 1 2 3
              4 3 2 1 2 3 4
            5 4 3 2 1 2 3 4 5
          6 5 4 3 2 1 2 3 4 5 6
        7 6 5 4 3 2 1 2 3 4 5 6 7 
     8 7 6 5 4 3 2 1 2 3 4 5 6 7 8
    9 8 7 6 5 4 3 2 1 2 3 4 5 6 7 8 9

*/



#include<stdio.h>

int main() {

    int s=11;

    for( int i=1;i<=9;i++)
    {
        for( int j=1;j<s;j++){
            printf("  ");
        }
        for(int j=i;j>0;j--){
            printf("%d ", j);
        }
        for(int j=2;j<=i;j++){
            printf("%d ",j);
        }
        s=s-1;
        printf("\n");
        

    }
    
    
}