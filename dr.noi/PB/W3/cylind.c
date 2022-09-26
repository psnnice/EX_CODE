#include <stdio.h>

void main()
    {
    float high, radius,vol,ppa = 22.0/7.0 ;
    printf("Please enter radius and high of your cylindrical(cm.): \n");
    printf("radius: ");
    scanf("%f",&radius);
    printf("high: ");
    scanf("%f",&high);
    vol = ppa * radius * radius * high;
    printf("volume of your cylindrical (cm^2) = %.2f ",vol);
    }