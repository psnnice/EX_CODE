#include <stdio.h>
void main()
{
    
    float money,mm;
    int bk10=0,bk5=0,bk1=0;
    printf("Enter withdraw money : \n");
    printf("***please dont enter decimal point or Amount in the tens place***\n");
    scanf("%f",&money);
    mm=money;
    if(money>=100)
    {
        while (money!=0)
        {
            if (money>=1000)
            {
                money = money - 1000;
                bk10++;
            }
            else if ((money >=500)&&(money < 1000))
            {
                money = money - 500;
                bk5++;
            }
            else if ((money >=100)&&(money < 500))
            {
                money = money - 100;
                bk1++;
            }
            else
            {
            printf("Error your withdraw money are not correct\n");
            goto re;
            }
        }
        printf("Get your withdraw money\n");
        printf("Bank 1000\t%d\tbanknote\n",bk10);
        printf("Bank 500\t%d\tbanknote\n",bk5);
        printf("Bank 100\t%d\tbanknote\n",bk1);
        printf("total money\t%.2f\tBath",mm);
    }
    else
    re:
    printf("Error your withdraw money are not correct\n");
} 
