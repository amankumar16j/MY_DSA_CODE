#include<stdio.h>
void creation(int n,int a[])
void insertion(int n, int pos,int item,int a[]);
void deletion_pos(int a[],int pos,int n);
void deletion_item(int item,int n,int a[]);
void serch();
void sort();

int main(){
    int n,ch,a[100],pos,item;
    
    do{ 
        printf("enter your option!!\n");
        printf("1.creation\n2.insertion\n3.deletion_pos\n4.deletion_item\n5.serch\n6.sort ");

        scanf("%d",&choice);

        switch(choice){

            case 1:{
                printf("enter how many element to store");
                scanf("%d",&n);
                creation(n,a);
                break;
                 
            }
            case 2:{
                printf("enter the position and  no. to insert");
                scanf("%d %d",&pos,&item);
                insert(n,pos,item,a);
            }
            case 3:{
                printf("enter the position for the element to delete");
                scanf("%d",&pos);
                deletion_pos(a,pos,n);
            }
            case 4:{
                printf("enter tne item to delete ");
                scanf("%d",&item);
                deletion_item(item,n,a);

            }
            case 5:{
                printf("")
            }
        }

        
    }
}
void creation(int n,int a[]){
    printf("enter %d element in array",n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
}

void insertion(int n, int pos,int item,int a[]){
    for(int i=n-1;i>=pos;i--){
        a[i+1]=a[i];
    }
    a[pos]=item;
}
void deletion_pos(int a[],int pos,int n){
    for (int i=pos ; i < n; i++){
        a[i]=a[i+1];
    }
}
void deletion_item(int item,int n,int a[]){
    int s=0;
    for(int i=0;i<n;i++){
        if(a[i]==item){
            for(int j=a[i];j<n;j++){
                a[i]=a[i+1];
            }
            s=1;
        }
    }
    if(s==0){
        printf("item to be deleted not found");
    }
}
void traverse();
void serch();
void sort();

