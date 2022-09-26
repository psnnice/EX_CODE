#include <stdio.h>
main()

/*{
	float a = 12.4 , b = 5.3 ,c;
	c = (int)a + b;
	printf("%.2f\n", c);
	c = (int)(a + b);
	printf("%.2f", c);
}


/*{
	int i = 3, b = i++;
	printf("i = %d b = %d\n",i,b);
	i = 3, b = ++i;
	printf("i = %d b = %d",i,b);
}




/*{
	float x,y;
	int i;
	x=i=y=24.3;
	printf("x = %.2f i = %d y = %.2f",x,i,y);
}



/*main()
{
	int i = 9,j = 2, x,y;
	if((i < 10)&&(j > 0))
		printf("1. this condition is true\n");
	else
		printf("1. this condition is false\n");
	i = 11,j = -10;
	if((i < 10)&&(j > 0))
		printf("2. this condition is true\n");
	else
		printf("2. this condition is false\n");
	x = 7, y = 8, i = 5;
	if(((x + y)<=15)||(i==5))
		printf("3. this condition is true\n");
	else
		printf("3. this condition is false\n");
	x = 10 ,y = 7 ,i = 6;
	if(((x + y)<=15)||(i==5))
		printf("4. this condition is true\n");
	else
		printf("4. this condition is false\n");
	i = 12 ,j = 0;
	if (!((i >= 10)||(j <= 0)))
		printf("5. this condition is true\n");
	else
		printf("5. this condition is false\n");	
	i = 8, j = 4;
	if (!((i >= 10)||(j <= 0)))
		printf("6. this condition is true\n");
	else
		printf("6. this condition is false\n");
	i = 7;
	if((i < 10)&&0)
		printf("7. this condition is true\n");
	else
		printf("7. this condition is false\n");
	i = 20;
	if((i < 10)&&0)
		printf("8. this condition is true\n");
	else
		printf("8. this condition is false\n");
	
}



/*main()
{
	int a = 21 , b = 10 , c;
	if( a == b)
			printf("line 1 - a is equal to b \n");
		else
			printf("line 1 - a is not equal to b \n");
	if( a < b)		
			printf("line 1 - a is less than b \n");		
		else
			printf("line 1 - a is not less than to b \n");
	if( a > b)		
			printf("line 1 - a is greater than b \n");
		else
			printf("line 1 - a is not greater than b \n");
}

/*int main()
{
	int a=9,b=4,c;
	c=a+b;
	printf("c = %d a = %d b = %d\n",c,a,b);
	c=a-b;
	printf("c = %d a = %d b = %d\n",c,a,b);
	c=a*b;
	printf("c = %d a = %d b = %d\n",c,a,b);
	c=a/b;
	printf("c = %d a = %d b = %d\n",c,a,b);
	c=a%b;
	printf("c = %d a = %d b = %d\n",c,a,b);
	
	return 0;
}



/*{
	int x,y,z,s;
	x = 504 +2.67; 
	printf("%d\n",x);
	y = 15 - 5.05; 
	printf("%d\n",y);
	z = 15 * 3.414; 
	printf("%d\n",z);
	s = 22/7; 
	printf("%d\n",s);			
}*/
/*{
	float x,y,z,s;
	x = 504 +2.67; 
	printf("%.2f\n",x);
	y = 15 - 5.05; 
	printf("%.2f\n",y);
	z = 15 * 3.414; 
	printf("%.2f\n",z);
	s = 22/7; 
	printf("%c\n",s);			
}*/

{
    int square, row, line;
      
    printf("Please enter number : ");
    scanf("%d", &square);
     
    for(row=0; row<square; row++)
    {
        if(row==0 || row==square-1)
        {
            printf("\t*");
            for(line=0; line<square-1; line++)
            {
                printf("*");
            }
            printf("\n");
            continue;
        }      
        printf("\t*");
        for(line=0; line<square-2; line++)
        {
            printf(" ");
        }       
        printf("*\n");
    }
}