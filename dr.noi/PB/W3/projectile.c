#include <stdio.h>

void main()
{
    float s,u,t,ss = 0.5,g = 9.80665 ;
    printf("formula is 's = (u * t) + (1/2 * a * t^2)'\n");
    printf("please enter time : ");
    scanf("%f",&t);
    printf("please enter Initial velocity : ");
    scanf("%f",&u);
    s = (u * t) + (ss * g * t * t); 
    printf("s = %.2f",s);
}