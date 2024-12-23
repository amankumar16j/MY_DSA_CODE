//2d array, to print marks of all student.

#include<stdio.h>
int main (){

    int marks[5][3]={{3,4,5},{3,7,5},{1,2,6},{9,8,7},{5,7,8}};

    for(int i=0;i<5;i++){
        for(int j=0;j<3;j++){
            printf("ROLL NO. %d > subject %d > marks =%d\n",  i+1,j+1,marks[i][j]);
        }printf("\n");
    }printf("\n");

}