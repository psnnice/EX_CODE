#include <stdio.h>

void main()
{
    int a[2][2],i,j,*a_p[2][2];
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
                printf("Enter array [%d][%d]",i,j);
                scanf("%d",&a[i][j]);
        }
    }
}