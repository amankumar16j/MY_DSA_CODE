#include<stdio.h>

int main(){
    int a,b,c;

    scanf("%d %d %d",&a,&b,&c);

    // if(a>b && a>c){
    //     printf("a is greatest");
    // }
    // if(b>a && b>c){
    //     printf("b is greatest");
    // }
    // if(c>b && c>a){
    //     printf("c is greatest");
    // }

    if(a<b){
        if(a<c){
            printf("a is smallest");
        }
        else{
            printf("c is smallest");
        }
    }
    else{
        if(b<c){
            printf("b is smallest");   //23 12  1
        }
        else{
            printf("c is smallest");
        }
    }


    
    

   
    
}