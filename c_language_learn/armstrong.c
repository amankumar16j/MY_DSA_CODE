# include<stdio.h>

int main() {
    int n;
    int r;
    int sum = 0;
    
    printf("enter any no. :- ");
    scanf("%d", & n);
    int temp=n;

    while (n>0) {
        r=n%10;
        sum = sum+(r*r*r);
        n=n/10;

    }
        
        if(sum == temp) {
            printf("armstrong no.");
        }
        else {
            printf("no");
        }
 return 0; 

}