#include <stdio.h>

int main(){
	int i=0;
	int menu1=0,menu2=0,menu3=0,menu4=0;
	float total_money=0;
	
	printf("***Welcome to Restaurant***\n\n");
	
	do{
		printf("1.Pizza			150\n");
		printf("2.Hamburger	 	 50\n");
		printf("3.Sandwich		 25\n");
		printf("4.Water			 10\n");
		printf("0.Calculate money\n\n");
		
		printf("Select menu : ");
		scanf("%d",&i);
		
		if(i==1)
			menu1++;
		else if(i==2)
			menu2++;
		else if(i==3)
			menu3++;
		else if(i==4)
			menu4++;

			
			
			
		printf("\n\nYou have :\n");
		printf("1.Pizza		%d * 150 : %d\n",menu1,menu1*150);
		printf("2.Hamburger  	%d *  50 : %d\n",menu2,menu2*50);
		printf("3.Sanwich	%d *  25 : %d\n",menu3,menu3*25);
		printf("4.Water		%d *  10 : %d\n\n",menu4,menu4*10);
		
		total_money=menu1*150+menu2*50+menu3*25+menu4*10;
		
			
	}while(i != 0);
	
	printf("\nTotal payment is %.2f",total_money);
return 0;
}
