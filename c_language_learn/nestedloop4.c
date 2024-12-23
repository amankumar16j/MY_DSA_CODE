/*
     * * * * * *
      * * * * *
       * * * *
        * * *
         * *
          * 


*/

#include<stdio.h>

int main () {
int s=0;


for(int i =1 ; i<=10;i++){

    for(int j=2;j<=i;j++){
        printf(" ");
    }

    for(int j=10;j>=i;j--){
        printf(" *");
    }
    
    printf("\n");
}
}