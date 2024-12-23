#include<stdio.h>
int main() {
    int fig,shape,shape2,l,b,s,r,h;
    char choice, choice2;

    printf("enter choice : 1-plane ,2-solid : ");
    scanf("%d", &fig );

    switch(fig) {

        case 1: {
            
            printf("enter shape : 1-rectangle,2-square,3-circle,4-triangle : ");
            scanf("%d", & shape);


            switch(shape) {

                case 1:{

                printf("enter choice : a-area, b-perimeter :  ");
                    scanf(" %s", & choice );
                    
                    switch(choice) {

                        case 'a' :{
                            printf("enter length : ");
                            scanf("%d", &l);

                            printf("enter breadth : ");
                            scanf("%d", &b);

                            printf("area=");
                            printf("%d", l*b);
                    }
                    break;

                         case 'b' : {
                            printf("enter length : ");
                            scanf("%d", &l);

                            printf("enter breadth : ");
                            scanf("%d", &b);

                            printf("perimeter=");
                            printf("%d", 2*(l+b));
                     }
                     break;
                }
              }
              break;
                case 2 :{
                    
                     printf("enter choice : a-area, b-perimeter :  ");
                     scanf(" %s", & choice);

                     switch(choice) {

                        case 'a' : {
                            printf("enter side : ");
                            scanf("%d", &s);

                            printf("area=");
                            printf("%d", s*s);

                        }
                        break;

                        case 'b' : {

                             printf("enter side : ");
                             scanf("%d", &s);

                            printf("perimeter=");
                            printf("%d", 4*s);

                        }
                        break;
                     }

                }
                break;
            
            case 3 : {

                    printf("enter choice : a-area, b-perimeter :  ");
                    scanf(" %s", & choice );

                    switch(choice) {

                        case 'a' : {
                            printf(" enter radius : ");
                            scanf("%d", & r);

                            printf("area=");
                            printf("%d", 4.13*r*r);
                        }
                        break;

                        case 'b' : {

                            printf("enter radius : ");
                            scanf("%d", &r);

                            printf("perimeter=");
                            printf("%d", 4*3.14*r);
                        }
                        break;
                    }
                
            }
            break; 
        }
    }break;
         case 2 : {

            printf("enter choice : 1-cube, 2-cuboid : ");
            scanf("%d", & shape2 );

            switch(shape2) {
                
                
                case 1 :{

                     printf("enter choice : a-surface_area, b-volume :  ");
                    scanf(" %s", & choice2 );

                    switch(choice2) {

                        case 'a' : {
                            printf("enter side : ");
                            scanf("%d", & s);

                            printf("surface_area=");
                            printf("%d", 6*s*s);

                        }
                        break;

                        case 'b' : {

                            printf("enter side : ");
                            scanf("%d", & s);

                            printf("volume=");
                            printf("%d", s*s*s);

                        } 
                        break;
                    }
                }break;
                case 2 : {

                    printf("enter choice : a-surface_area, b-volume :  ");
                    scanf(" %s", & choice2 );

                    switch(choice2) {

                        case 'a' : {

                            printf("enter length : ");
                            scanf("%d", &l);

                            printf("enter breadth : ");
                            scanf("%d", & b);

                            printf("enter height : ");
                            scanf("%d", & h);

                            printf( "surface area=");
                            printf("%d", l*b+b*h+h*l);

                        }
                        break;

                        case 'b': {

                            printf("enter length : ");
                            scanf("%d",& l);
                    
                            printf("enter breadth : ");
                            scanf("%d", &b);
                    
                            printf("enter height : ");
                            scanf("%d", & h);
                    
                            printf("volume=");
                            printf("%d", l*b*h);

                        }break;
                    }

                }break;
            }

         }break;
  } 
  return 0;
  
}