#include<stdio.h>
void main()
{
	int age=0,gender=0,address=0,a,b,c,d,e,list;
	char n,end,name,last_name;
	float num,num_rice,total_a,total_b,total_c,total_d,total_e,total_balance;
	do{
	printf("Welcome to rice shop\n");
	printf("please enter your name :");
	scanf("%s",&name);
	printf("please enter your lastname :");
	scanf("%s",&last_name);
	printf("please enter your age :");
	scanf("%d",&age);
	printf("please enter your gender  :");
	scanf("%d",&gender);
	printf("please enter your address :");
	scanf("%d",&address);
		
		do
		{
		a=0,b=0,c=0,d=0,e=0; 
		num++;
		printf("Welcome customer[%d]\n",num);
	
		printf("****** list ******\n");
		printf("a.Hom pa tum rice  price 6.50 Bath/Kg \n");
		printf("b.Hom pa tum rice  price 1600 Bath/1000Kg \n");
		printf("c.Hom pa tum rice  price 9.50 Bath/Kg \n");
		printf("d.Hom pa tum rice  price 3600 Bath/1000Kg \n");
		printf("e.Hom pa tum rice  price 1200 Bath/1000Kg \n");
		printf("Enter 'n' for show your payment \n");
		

		printf("please enter your order :");
		scanf("%d",&list);
		fflush(stdin);
		if(list=='n')
		{
			printf("Calculated Payment :\n");
			break;
		}
			printf("please enter num_rice :");
			scanf("%d",&num_rice);
		if(list=='a')
		{
			a += num_rice;
			total_a += num_rice;
		}	
		else if(list=='b')
		{
			b += num_rice;
			total_b += num_rice;
			}	
		else if(list=='c')
		{
			c += num_rice;
			total_c += num_rice;
			}	
		else if(list=='d')
		{
			d += num_rice;
			total_d += num_rice;
			}
		else 
		{
			e += num_rice;
			total_e += num_rice;
			}	
		}
		while(1);
		{
		printf("your payment(%d)\n");
		printf("****** list ******\n");
		printf("a.Hom pa tum rice = price (%d) * 6.50 Bath/Kg =(%d)*6.50\n",a,a*6.50);
		printf("b.Hom pa tum rice = price (%d) * 1600 Bath/1000Kg =(%d)*1600 \n",b,b*1600);
		printf("c.Hom pa tum rice = price (%d) * 9.50 Bath/Kg =(%d)*9.50 \n",c,c*9.50);
		printf("d.Hom pa tum rice = price (%d) * 3600 Bath/1000Kg =(%d)d*3600 \n",d,d*3600);
		printf("e.Hom pa tum rice = price (%d) * 1200 Bath/1000Kg =(%d)e*1200 \n",e,e*1200);
		printf("total balance = (a*6.50)+(b*1600)+(c*9.50)+(d*3600)+(e*1200)",a,b,c,d,e);
		printf("please enter 'n' for end program :");
		scanf("%c",&list);
		}
    }
    while((end=='n')&&(end=='N'));
    {
    	printf("total customer :(%d)\n");
    	printf("total order :(a*6.50)+(b*1600)+(c*9.50)+(d*3600)+(e*1200)\n",total_a,total_b,total_c,total_d,total_e);
    	printf("a.Hom pa tum rice = price (%d) * 6.50 Bath/Kg =(%d)*6.50\n",total_a,total_a*6.50);
		printf("b.Hom pa tum rice = price (%d) * 1600 Bath/1000Kg =(%d)*1600 \n",total_b,total_b*1600);
		printf("c.Hom pa tum rice = price (%d) * 9.50 Bath/Kg =(%d)*9.50 \n",total_c,total_c*9.50);
		printf("d.Hom pa tum rice = price (%d) * 3600 Bath/1000Kg =(%d)d*3600 \n",total_d,total_d*3600);
		printf("e.Hom pa tum rice = price (%d) * 1200 Bath/1000Kg =(%d)e*1200 \n",total_e,total_e*1200);
		printf("your money balance to pay :(a*6.50)+(b*1600)+(c*9.50)+(d*3600)+(e*1200)\n",total_a,total_b,total_c,total_d,total_e);
		
	}
}
