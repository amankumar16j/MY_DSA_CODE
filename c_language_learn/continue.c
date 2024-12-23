# include<stdio.h>
int main () {

    for(int i =0;i<=20;i+=1){

        if(i==5){
            continue;
        }
        printf("%d \n", i);
    }
}