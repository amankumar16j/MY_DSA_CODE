#include<stdio.h>
int main (){
    
    
    float prod [3];

    printf(" enter price of tea:");
    scanf("%f", &prod[0]);

    
    printf(" enter price of lassi:");
    scanf("%f", &prod[1]);

    
    printf(" enter price of chips:");
    scanf("%f", &prod[2]);

    float discount[]={prod[0]+0.18*prod[0],prod[1]+0.18*prod[1],prod[2]+0.18*prod[2]};

    printf("gst tea=%f, gst lassi=%f, gst chips=%f\n", prod[0]+0.18*prod[0],prod[1]+0.18*prod[1],prod[2]+0.18*prod[2] );
    printf("%f", discount[0]);


}