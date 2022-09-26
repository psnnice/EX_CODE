#include <stdio.h>
void main()
{
    float X;
    X = 20 + 15 - 2 * 3/3; 
    printf("%.2f\n", X );
    X = 15 + 7 - 5 + (14/2) * 8%5;
    printf("%.2f\n", X ); 
    X = 3 * 15 % 7 - 9 + 11;
    printf("%.2f\n", X );  
    X = 70 + 28 % 27 - 72 / 6;
    printf("%.2f\n", X );
}