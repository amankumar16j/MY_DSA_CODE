/*
write a program that read a 5X5 array of integer and the print the row sum and coumn sum:
enter row 1:8 3 9 0 10
enter row 2:3 5 17 1 1
enter row 3:2 8 6 23 1
enter row 4:15 7 3 2 9
enter row 5:6 14 2 6 0
output:
row total : 30 27 40 36 28 
column total:34 37 37 32 21

*/
#include<stdio.h>

int main (){
    int sum=0;
    int arr[5][5]={{8,3,9,0,10},{3,5,17,1,1},{2,8,6,23,1},{15,7,3,2,9},{6,14,2,6,0}};
    
    // to sum all elements of all row
    printf("row total   : ");
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            sum=sum+arr[i][j];
        }
        printf("%d\t",sum);
        sum=0;
    }printf("\n");
    
    //to sum all the element of all the column.
    printf("column total: ");
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            sum=sum+arr[j][i];
        }
        printf("%d\t",sum);
        sum=0;
        
        }
    
        
    

     

}