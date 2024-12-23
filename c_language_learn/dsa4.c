//deletion of an element when item is given
#include<stdio.h>


int main(){
    char a[9]={'a','d','u','q','w','n','m','r'};
    char ch='u';
    int pos=3;
    int s=0;
    
    for( int i=0;i<9;i++){

        if(a[i]==ch){
            printf("image found at %d\n",i);
           
            for(int j=i;j<=8;j++){

             a[j]=a[j+1];
             
            }
            s=1;
        }
        
        
        
    }if (s==0){
            printf("item to be deleted not found\n");
        }

    for(int i=0;i<=8;i++){
      printf("%c",a[i]);
    } 
}
