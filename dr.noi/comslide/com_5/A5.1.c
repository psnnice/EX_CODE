#include <stdio.h>

void main()
{
	float gpa_p,gpa_ps,gps;
	printf("Enter GPA(past) : ");
	scanf("%f",&gpa_p);
	 	if(gpa_p < 1)
		{
			printf("\nYour Status : Retired\n");
			printf("Sorry, Try again.");
		}
		else if((gpa_p >= 1)&&(gpa_p < 2))
		{
			printf("\nYour Status : Probation\n");
			printf("Enter GPS(present) : ");
			scanf("%f",&gps);
			printf("Enter GPA(present) : ");
			scanf("%f",&gpa_ps);
				if((gpa_ps >= 2)||(gps >= 2))
				{
					printf("\nYour Status : Probation\n");
				}
				else if((gpa_ps >= 2)&&(gps >= 2))
				{
					printf("\nYour Status : Normal\n");
				}
				else
				{
				printf("\nYour Status : Retired\n");
				printf("Sorry, Try again.");
				}
		}
		else if((gpa_p >= 2)&&(gpa_p <= 4))
		{
			printf("\nYour Status : Normal\n");
			printf("Enter GPS(present) : ");
			scanf("%f",&gps);
			printf("Enter GPA(present) : ");
			scanf("%f",&gpa_ps);
			if((gpa_ps < 2)&&(gps < 2))
				{
					printf("\nYour Status : Probation\n");
				}
				else if((gpa_ps < 1)||(gps < 1))
				{
					printf("\nYour Status : Retired\n");
					printf("Sorry, Try again.");
				}
				else
					printf("\nYour Status : Normal\n");
		}
		else
			printf("error your grade are lower than 0 or rether 4");

}
