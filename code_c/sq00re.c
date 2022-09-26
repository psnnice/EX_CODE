#include    <stdio.h>

void main()
{
    int i,j,d;
    scanf("%d",&i);
    for ( j = 1 ; j <= i  ; j++){
        if((j==1)||(j==i)) 
        for ( d = 1; d <= i; d++){
            printf("*");
        }
        else{
            for ( d = 1; d <= i; d++)
            {
                if((d==1)||(d==i))
                    printf("*");
                else
                    printf(" ");
            }
        }
        printf("\n");
    }
    
}