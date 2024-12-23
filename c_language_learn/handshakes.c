#include<stdio.h>

int main(){

    int n;
    int mon[100];
    int total=0;

    scanf("%d",&n);
    printf("scan:");
    for(int i=0;i<n;i++){

        scanf("%d",&mon[i]);
        total=total+mon[i];
    }
    printf("%d",total);

}

select *from CIty where POPULATION>100000 and COUNTRYCODE='USA';


select names as Name from employee where id in(select employeeid from project where manager='charles')