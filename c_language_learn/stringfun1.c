#include<stdio.h>
#include<string.h>

void len(char name[]){
    printf("no. of character = %d",strlen(name));
}

void lower(char name[]){
    printf("lower character is :%s",strlwr(name));
}

void upper(char name[]){
    printf("upper character is :%s",strupr(name));
}

void reverse(char name[]){
    printf("reversed string is :%s",strrev(name));
}

void copy(char newname[],char name[]){
    printf("new name is :%s",strcpy(newname,name));
}

void copy2(char name[],char newname[]){
    printf("new name is :%s",strncpy(newname,name,6));
}
void compare(char name[],char cmp[]){
    printf("new name is :%d",strcmp(name,cmp));
    
}




int main(){

    char name[50]="AmanKumar";
    char password[100]="aman1234@";
    char salt[3]="zip";
    char newname[]="AnishAgrawal" ;



    len(name);
    printf("\n");
    
    lower(name);
    printf("\n");

    upper(name);
    printf("\n");
    
    // reverse(name);
    // printf("\n");
    

    
     printf("%s\n",newname);
     copy(newname,name);
     printf("\n");
     printf("%s\n",newname);
     printf("%s\n",name);
     printf("\n");
     

    
    /*
     
     printf("%s\n",newname);
     copy2(name,newname);
     printf("\n");
     printf("%s\n",newname);
     printf("%s\n",name);
     printf("\n");
    
    */
   
    compare(salt,name);
    printf("\n");
}