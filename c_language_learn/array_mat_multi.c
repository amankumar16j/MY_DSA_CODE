// to input elements in matrix and print it.

#include<stdio.h>
#define max 50
int main(){
      int sum=0;
      int product[max][max];
      int mat_a[max][max];
      int row_a,column_a;
      
      
      printf("enter row and column:\n");
      
      
      scanf("%d %d", &row_a,&column_a);

      printf("enter value of a:\n");

      for(int i=0;i<row_a;i++){
        for(int j=0;j<column_a;j++){
            scanf("%d",&mat_a[i][j]);
        }
      }


      int mat_b[max][max];
      int row_b,column_b;
     
      printf("enter row and column:\n");
     
      scanf("%d %d", &row_b,&column_b);
    
      printf("enter value of b:\n");

     
      for(int i=0;i<row_b;i++){
        for(int j=0;j<column_b;j++){
            scanf("%d",&mat_b[i][j]);
        }
      }

      // this is matrices axb
      for(int i=0;i<row_a;i++){
        for( int j=0;j<column_b;j++){
          for(int k=0;k<column_a;k++){

            sum= sum+(mat_a[i][k]*mat_b[k][j]);
          
          }
          product[i][j]=sum;
          sum=0;
          
        }
      }
      
      printf("new matrix is \n");
      for( int i=0;i<row_a;i++){
        for(int j =0;j<column_b;j++){
          printf("%d\t",product[i][j]);
        }
        printf("\n");
      }



}
