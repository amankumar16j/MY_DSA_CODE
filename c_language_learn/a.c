#include<stdio.h>
int main (){
    int arr[2][4]={{23,45,65,76},{23,12,1,2}};
    int sum=0;
    
    for( int *p=&arr[0][0];p<=&arr[1][3];p++){
        sum=sum+*p;
    }printf("sum = %d",sum);
}
