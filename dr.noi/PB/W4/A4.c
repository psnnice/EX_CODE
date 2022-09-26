#include <stdio.h>
int main()
{
    int S = 8,T = 15;
    S += 2;
    printf("S = %d\n",S);
    T -= 10;
    printf("T = %d\n",T);
    S = 8;
    S *= 2;
    printf("S = %d\n",S);
    T = 15;
    T /= 10;
    printf("T = %d\n",T);
    S = 8;
    S %= 2;
    printf("S = %d\n",S);
    T = 15;
    T /= 3;
    printf("T = %d\n",T);
    T = 15;
    T *= 7;
    printf("T = %d\n",T*=7);
    return 0;
}