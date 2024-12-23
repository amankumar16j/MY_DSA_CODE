# include<stdio.h>
int main () {


    int fig,l,b,h;
    char choice;

    printf("enter choice: 1-plane, 2-solid");
    scanf("%d", & fig);


    switch(fig){

        case 1: {

            printf("enter choice: a-perimeter, b- area ");
            scanf("%s", &choice);

            switch(choice) {

               case 'a':{

                printf("enter length:");
                scanf("%d", &l);
                printf("enter breadth:");
                scanf("%d", &b);
                printf("perimeter=");
                printf("%d", 2*(l+b));
               }
               break;

               case 'b' :{
                    
                    printf("enter length:");
                    scanf("%d", & l);
                    printf("enter breadth:");
                    scanf("%d", & b);
                    printf("area=");
                    printf("%d", l*b);
                }
                break;
               
            }

        }break;
                    
        case 2 :{
                    printf("enter length:");
                    scanf("%d", & l);
                    printf("enter breadth:");
                    scanf("%d", & b);
                    printf("enter height");
                    scanf("%d", &h);
                    
                    printf( "volume=");
                    printf("%d", l*b*h);
        
        }break;

    }
    return 0;

}