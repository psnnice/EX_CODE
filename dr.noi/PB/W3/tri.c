#include <stdio.h>
void main()
{
    float squ1,squ2,vol,aa = 1.0/3.0,high;
    printf("please enter high and 2 side of square base pyramid (cm.): ");
    printf("high:");
    scanf("%f",&high);
    printf("2 side:");
    scanf("%f %f",&squ1,&squ2);
    vol = (squ1 * squ2) * aa * high;
    printf("volume(cm^3) = %.2f", vol);
}
