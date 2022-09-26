#include <stdio.h>

void main()
{
		char name[30],surname[30],id[9],GRADE[2];
		float score;
	
		printf("Please enter your name : ");
		scanf("%s",name);
		printf("Please enter your surname : ");
		scanf("%s",surname);
		printf("Please enter your ID : ");
		scanf("%s",id);
		printf("Please enter your score : ");
		scanf("%f",&score);
			if((score >= 90)&&(score <= 100))
				GRADE[0] = 'A';
			    else if((score >= 80)&&(score < 90))
				    GRADE[0] = 'B';
			    else if((score >= 70)&&(score < 80))
				    GRADE[0] = 'C';
			    else if((score >= 60)&&(score < 70))
				    GRADE[0] = 'D';
			    else if((score >= 0)&&(score < 60))
				    GRADE[0] = 'F';
			    else 
				    printf("error");
			printf("Name : %s %s\n",name,surname);
			printf("ID : %s\n",id);
			printf("congratolation you passed your score : %.2f\n",score);
			printf("You got grade : %s",GRADE);
}