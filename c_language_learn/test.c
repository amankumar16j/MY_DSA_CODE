/*1*2*3*4
  2*3*4
  3*4
  4
*/

#include<stdio.h>
int main (){

    int n=1;
    int a;
    printf("enter the no. of line :");
    scanf("%d", &a);

    for( int i=1;i<=a;i++){
        
        for(int j=n;j<=a;j++){
            printf("%d",j);

            if(j<a){
            printf("*");}

        }
        printf("\n");
        n=n+1;
    }
}






