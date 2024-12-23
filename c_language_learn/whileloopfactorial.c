// to find factorial !!

# include<stdio.h>

int main () {
  
  int n,fact=1,i=1;
  printf("enter no. :");
  scanf("%d", &n);

  while(i<=n){
  fact=fact*i;
  i++;}
  printf("factorial is : %d", fact);

}