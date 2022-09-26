#include <stdio.h>
main()
/*{
	int num = 0;
	float total,score,avg;
	do
	{
		do
		{
			printf("Enter score : ");
			scanf("%f",&score);
		}
		while((score>100)||(score<-1));
			total+=score;
			num=num+1;
	}
	while(score!=-1);
	avg = (++total)/(--num);
	printf("total score : %.2f \navg score : %.2f", total,avg);
}*/


/*{
	int i,j,num;
	printf("Enter number : ");
	scanf("%d",&num);
	i = 1;
	do
		{
			i++;
			j=1; 
			printf("\n");
			do
				{
				j++;
				printf("*");
				}
				while(j<=num);
		}
	while(i<=num);
}*/


/*{
	int num,input,sum=0;
	printf("Enter number that you want to count : ");
	scanf("%d",&input);
	num = 1;
	do
	{
		sum = sum + num;
		num++;
	}
	while(num<=input);
		printf("%d\n",sum);
}*/




/*{
	int num,input,sum=0;
	printf("Enter number that you want to count : ");
	scanf("%d",&input);
	num = 1;
	while(num<=input)
		{
		sum = sum + num;
		num++;
		}
	printf("%d\n",sum);
}*/

/*{
		int num,input;
		printf("Enter number that you want to count : ");
		scanf("%d",&input);
			for(num=1;num<=input;num++)
			{
				printf("%d\n",num);
			}
}*/
/*{
	int num,input;
		printf("Enter number that you want to count : ");
		scanf("%d",&input);
		num = 0;
		while(num<=input)
		{
			input+=num;
			num++;
		}
		printf("%d\n",num);
}*/

/*{
	int i;
		i = 10;
		while(i>=0)
			{
				printf("%d\n",i);
				i--;
			}
}*/

/*{
	int i;
		i = 0;
		while(i<=10)
			{
				printf("%d\n",i);
				i++;
			}
}*/


/*{
	int i,j,num;
	printf("Enter number : ");
	scanf("%d",&num);
	i = 1;
	while(i<=num)
		{
			i++;
			j=1; 
			printf("\n");
			while(j<=num)
				{
				j++;
				printf("*");
				}
		}
			
}*/

/*{
	int modu,i;
	for (i=1;i>=0;i++)
	{
		modu=i%2;
		if(modu=1)
			printf("1");
		else
			printf("2");
	}
}
*/

/*{
	int i,j,num;
	printf("Enter number : ");
	scanf("%d",&num);
	for(i = 1;i<=num;i++)
		{
			printf("\n");
			for(j=1;j<=num;j++)
			printf("*");
		}
			
}*/


{
	char letter;
	for (letter = 'a';letter  <= 'z';letter++)
	printf("%c\n",letter);
	
}

/*{
	int sum;
	for(int count=0;count<=100;count++)
		sum = sum+count;
	printf("%d",sum);
	
}*/



/*{
	for (int number=10;number>=0;number--)
	printf("%d\n",number);
}*/
