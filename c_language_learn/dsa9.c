//to represent sparse matrix in triplet form
#include<stdio.h>

int main(){
    int a[5][6]={{0,0,55,0,0,0},{88,0,0,0,99,0},{0,0,44,66,0,0},{0,0,0,0,0,11},{0,0,0,22,0,0}};
    int k=1;
    int nz=0;
    for(int i=0;i<5;i++){
        for(int j=0;j<6;j++){
            if(a[i][j]!=0){
                nz++;
            }
        }
    }

    int sp[15][3];
    sp[0][0]=5;
    sp[0][1]=6;
    sp[0][2]=nz;

    for(int i=0;i<5;i++){
        for(int j=0;j<6;j++){

            if(a[i][j]!=0){

                sp[k][0]=i;
                sp[k][1]=j;
                sp[k][2]=a[i][j];
                k++;
            }

        }
    }
    for(int k=0;k<=nz;k++){
        printf("%d %d %d",sp[k][0],sp[k][1],sp[k][2]);
        printf("\n");
    }
 

}