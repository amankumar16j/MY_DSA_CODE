# include<stdio.h>
int main() {
    int age;
    printf("enter age:-");
    scanf("%d",&age);

    if(age<18) {
        printf("under age");
    }
    else if (age>=18 && age<=60) {
        printf("adult:- elegible to vote");
    }
    else if(age>60){
        printf("sineor citizen:- elegible to vote");
    
    }
 return 0;
}