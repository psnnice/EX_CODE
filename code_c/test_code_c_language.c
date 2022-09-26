#include <stdio.h>
void main()
{
    int a = 9, b = 6 , c = 0;
    c = (a++)+(++b);
    printf("%d %d %d",a,b,c);
}