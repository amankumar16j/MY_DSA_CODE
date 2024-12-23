//dimension using function


#include<stdio.h>

void square(){
    int s;

    printf("ENTER FOR SQUARE \n");
    printf("enter side length:");
    scanf("%d", &s);

    int area = s*s;
    printf("area of the square = %d\n",area);
    printf("\n");
}

void circle(){
     float r;

     printf("ENTER FOR CIRCLE \n");
     printf("enter radius :");
     scanf("%f",&r);

     int area = 3.14*r*r;
     printf("area of the circle =%d \n",area );
     printf("\n");
}


void rectangle(){

    int l,b;
    printf("ENTER FOR RECTANGLE \n");
    printf("enter length :");
    scanf("%d",&l);

    
    printf("enter breath :");
    scanf("%d",&b);

    int area = l*b;
    printf("area of the rectangle=%d\n",area);
    printf("\n");
}





int main () {

 square();
 circle();
 rectangle();

}