// to use int function without return 
// in place of int void could also be used


#include<stdio.h>

int volume() {
    int l,b,h;

    printf("enter length :");
    scanf("%d", &l);

    printf("enter breadth :");
    scanf("%d", &b);

    printf("enter height :");
    scanf("%d", &h);

    printf("volume = %d", l*b*h);

}

int main () {

    volume();
}
