#include<stdio.h>
#include<stdlib.h>
#include<string.h>


/*int main(){

    int num=0;
    char ch[100]="lamiiced";
    char ch2[100]="dacieeml";
    int len=strlen(ch);


    if(strlen(ch)==strlen(ch2)){
        for(int i=0;ch[i]!='\0';i++){
            for(int j=0;ch2[j]!='\0';j++){
                if(ch[i]==ch2[j]){
                    num=num+1;  
                }
            }
        }
        if(len==num){
            printf("the string is a anagram!!");

        }
        else{
            printf("the no. is not a anagram!!");
        }
    }
    else{
        printf("the string is not a anagram!!");
    }

}*/


// using hash table

int main(){
    int check=0;
    char ch[100]="obseerve";
    char ch2[100]="serrveob";
    int hash[26]={0};

    for(int i=0;ch[i]!='\0';i++){
        int diff=ch[i]-97;
        hash[diff]++;
    }

    for(int i=0;ch2[i]!='\0';i++){
        int diff2=ch2[i]-97;
        hash[diff2]--;
    }

    for(int i=0;i<26;i++){
        if(hash[i]!=0){
            check++;
        }
    }

    if(check!=0){
        printf("the no is not a anagram !!");

    }

    else{
        printf("the no is a anagram");
    }

    

}