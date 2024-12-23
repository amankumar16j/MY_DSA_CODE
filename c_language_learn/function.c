// use function to print hello or bye


#include<stdio.h>
void hello(){
  printf("hello world");
}
void bye(){
  printf("good bye");
}
int main () {
 int choice;

  
  printf("enter 1 for hello and  2 for bye :");
  scanf("%d", &choice);

  if(choice==1){
    hello();
  }
  else{
    bye();
  }
  

  

}