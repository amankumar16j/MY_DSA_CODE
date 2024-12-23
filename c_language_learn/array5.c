//traversing in array

#include<stdio.h>

int main (){


int marks[10];


// using pointer method
int *ptr=&marks[0];
  for(int i=0; i<10;i++){
    printf("marks of roll no. %d = ",i+1);
    
    scanf("%d", (ptr+i));
}
for(int i=0;i<10;i++){
    printf("%d index = %d \n",i,*(ptr+i));
}




//using arrey method
for(int i=0; i<10;i++){
    printf("marks of roll no. %d = ",i+1);
    
    scanf("%d", &marks[i]);
}
for(int i=0;i<10;i++){
    printf("%d index = %d \n",i,marks[i]);
}

}