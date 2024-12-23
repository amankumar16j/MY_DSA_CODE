#include<stdio.h>

int add(int a, int b){
    return(a+b);
}

int multi(int c,int d){
    return(c*d);
}

int main(){
    int a,b;
    printf("enter a and b: ");
    scanf("%d,%d",&a,&b);
    int s=add(a,b);
    printf("the sum is:%d\n",s);

    int c,d;
    printf("enter c and d: ");
    scanf("%d,%d",&c,&d);
    int mul=multi(c,d);
    printf("multiplication=%d\n",mul);
}


