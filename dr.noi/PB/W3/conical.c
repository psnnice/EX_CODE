#include <stdio.h>

void main()
{
    float pi = 22.0/7,slant,high,radius,area;
    printf("Please enter 1.slant height (cm.) , 2.high(cm.): ,3.radius(cm.) \n");
    printf("1.");
    scanf("%f",&slant);
    printf("2.");
    scanf("%f",&high);
    printf("3.");
    scanf("%f",&radius);
    area = (pi * radius * slant) + (pi * radius * radius); 
    printf("conical surface area(cm^2) = %.2f",area);
}