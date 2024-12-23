//deletion of an element when position is given
#include<stdio.h>
int main(){
    char a[9]={'a','d','u','q','w','n','m','r'};
    char ch='v';
    int pos=3;
    
    for(int i=pos;i<=8;i++){

        a[i]=a[i+1];
        
    }

    for(int i=0;i<=8;i++){
      printf("%c",a[i]);
    } 
}
