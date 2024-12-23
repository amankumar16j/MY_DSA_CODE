// 3D array to print marks



#include<stdio.h>
int main(){

    int arr[2][3][3]={{{6,7,5},{8,9,6},{6,7,8}},
                      {{9,8,7},{6,5,4},{5,8,9}}};
    for( int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<3;k++){

                printf("ROLL NO.  %d > subject %d > test %d > marks = %d \n",i+1,j+1,k+1,arr[i][j][k]);
            
            
            }printf("\n");
        }printf("\n");
    }printf("\n");
}

