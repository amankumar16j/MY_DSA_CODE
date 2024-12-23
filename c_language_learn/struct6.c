// to take input from user and creat a record of there address using structure.



#include<stdio.h>
#include<string.h>

struct address {

    int house_no;
    char block;
    char city[50];
    char state[50];

};

int main(){
     
    struct address s[100];
    
    // loop for inputing the value 
    for( int i =0;i<5;i++){
    
    printf("enter house no.:");
    scanf("%d",&s[i].house_no);
   
    printf("enter block:");
    scanf("%s",&s[i].block);

    
    printf("enter city:");
    scanf("%s",&s[i].city);

    
    printf("enter state:");
    scanf("%s",&s[i].state);

    printf("\n");
    
    }
    printf("-----------------------------");
    
    printf("\n");

    // loop to print the info
    for( int i=0;i<5;i++){
     
     printf("house no. is :%d\n",s[i].house_no);
     printf("block is: %c\n",s[i].block);
     printf("city is :%s\n",s[i].city);
     printf("state is :%s\n",s[i].state);
     printf("\n");
    }
    
    }
