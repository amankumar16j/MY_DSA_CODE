 #include<stdio.h>
int main () {

    int fig,l,b,h;
    char choice , choice2;

    printf("enter choice: 1-plane, 2-solid : ");
    scanf("%d", & fig);


    switch(fig){

        case 1: {

            printf("enter choice: a-perimeter, b- area : ");
            scanf("%s", &choice);

            switch(choice) {

               case 'a':{

                printf("enter length: ");
                scanf("%d", &l);
                printf("enter breadth: ");
                scanf("%d", &b);
                printf("perimeter=");
                printf("%d", 2*(l+b));
               }
               break;

               case 'b' :{
                    
                    printf("enter length: ");
                    scanf("%d", & l);
                    printf("enter breadth: ");
                    scanf("%d", & b);
                    printf("area=");
                    printf("%d", l*b);
                }
                break;
               
            }

        }break;
                    
        case 2 :{

            printf(" enter choice: c-surfce area , d-volume : ");
            scanf("%s", & choice2);

            switch(choice2) {

                case 'c' : {
                    
                    printf("enter length : ");
                    scanf("%d", & l);
                   
                    printf("enter breadth : ");
                    scanf("%d", &b);
                    
                    printf("enter height : ");
                    scanf("%d", & h);
                   
                    printf("surface area=");
                    printf("%d", l*b+b*h+h*l);
                }
                break;

                case 'd' : {
                   
                    printf("enter length : ");
                    scanf("%d",& l);
                    
                    printf("enter breadth : ");
                    scanf("%d", &b);
                    
                    printf("enter height : ");
                    scanf("%d", & h);
                    
                    printf("volume=");
                    printf("%d", l*b*h);

                }
                break;
                

            }
            
                    
        
        }
        break;

    }
    return 0;

}