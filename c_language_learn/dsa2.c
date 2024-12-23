// insertion of an element 
#include<stdio.h>
int main(){
    char a[9]={'a','d','u','q','w','n','m','r'};
    char ch='v';
    int pos=3;
    
    for(int i=7;i>=pos;i--){

        a[i+1]=a[i];
        
    }
    a[pos]=ch;

    for(int i=0;i<=8;i++){
      printf("%c",a[i]);
    } 
}