#include<stdio.h>
#include<string.h>

int main(){

    char ans[100];
    printf("What is the unit of traffic:");
    gets(ans);

    for(int i=0;i<3;i++){

        if(stricmp(ans,"Earlang")==0){
            printf("Answer is correct\n");
            break;
        }
        else{
            if(i<2){
                printf("Try again!!\n");
                printf("What is the unit of traffic:");
                gets(ans);
            }
            else{
                printf("You are wrong the correct answer is Earlang\n");
            }
        }

    }
}