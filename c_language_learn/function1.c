// int type can store as many no. as wish

#include<stdio.h>

int area(int l,int b, int h) {
  return (l*b+b*h+h*l);  
}

int main () { 
int l,b,h;
    
    printf("enter length :");
    scanf("%d", &l);

    printf("enter breadth :");
    scanf("%d", &b);

    printf("enter height :");
    scanf("%d", &h);
    

    int a = area(l,b,h);

   printf("area = %d", a);
}
