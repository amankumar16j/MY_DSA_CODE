#include<stdio.h>


int main(){


int n,check,final;

printf("enter the no.");
scanf("%d",&n);

check=n/2;

while(check>1){

final=n%check;

if(final==0){
    break;
}

check--;
}

if(final==0){
    printf("the no. not is prime");
}
else{
    printf("the no is prime");
}
}