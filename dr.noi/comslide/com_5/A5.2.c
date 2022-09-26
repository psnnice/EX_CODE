#include <stdio.h>

void main()
{
    int menu=0;
    float num1,num2;
    printf("Enter Num1 : ");
    scanf("%f",&num1);
    printf("\nEnter Num2 : ");
    scanf("%f",&num2);
    printf("\nCalculator Menu : \n1. +\n2. -\n3. *\n4. /\n5. %\n");
    printf("choose menu : ");
    scanf("%d",&menu);
    switch (menu)
    {
    case 1:
        printf("%.2f + %.2f = %.2f",num1,num2,num1+num2);
        break;
    case 2:
        printf("%.2f - %.2f = %.2f",num1,num2,num1-num2);
        break;
    case 3:
        printf("%.2f * %.2f = %.2f",num1,num2,num1*num2);
        break;
    case 4:
        printf("%.2f / %.2f = %.2f",num1,num2,num1/num2);
        break;
    case 5:
        printf("%.0f %% %.0f = %d",num1,num2,(int)num1%(int)num2);
        break;
    default:
        printf("error this number isn't in menu");
        break;
    }
}