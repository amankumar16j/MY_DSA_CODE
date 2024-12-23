//to find no. of repeated digit using array

#include<stdio.h>
int main(){
int arr[10]={0};
int n,rem,count=0;
printf("enter the no.:");
scanf("%d", &n);

while(n>0){
    rem=n%10;
    
    if(arr[rem]==1){
     count++;}

     arr[rem]=1;

     n=n/10;
    

}
printf("total repeatation = %d", count);





}