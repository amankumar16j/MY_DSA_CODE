// table of any no.

# include<stdio.h>
int main () {
    int a;
    printf("enter no. :");
    scanf("%d", &a);
    
    for(int i= 0; i<=10; i+= 1) {
        printf("%d", a);
        printf(" X ");
        printf("%d", i);
        printf(" = ");
        printf("%d\n", a*i);

    }
}