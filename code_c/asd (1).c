#include <stdio.h>

/*{
	int color = 1;
	printf("Please choose a color (1:red,2:blue,3:green): ");
	scanf("%d",&color);
	switch (color)
	{
		case 1: puts("You choose red color\n");
			break;
		case 2: puts("You choose blue color\n");
			break;
		case 3: puts("You choose green color\n");
			break;
		default: puts("You didn't choose any color\n");
	}
	return 0;
}*/


/*{
	int d;
	printf("Enter a number from 1 to 9 : ");
	scanf("%d",&d);
	switch (d)
	{
		case 1: puts("A stitch in time save nine.");
			break;
		case 2: puts(" U R S O Q T.");
			break;
		case 6: puts("babara is your mom.");
			break;
		case 9: puts("Handsome is handsome does.");
			break;
		default: puts("Very clever . try again.");
	}
	return 0;
}*/


/*{
		char name[30],surname[30],id[9],GRADE[3];
		float score,midscore,finalscore;
	
		printf("Please enter your name : ");
		scanf("%s",name);
		printf("Please enter your surname : ");
		scanf("%s",surname);
		printf("Please enter your ID : ");
		scanf("%s",id);
		printf("Please enter your midterm score : ");
		scanf("%f",&midscore);
		printf("Please enter your final score : ");
		scanf("%f",&finalscore);
		score = midscore+finalscore;
			if((score >= 80)&&(score <= 100))
				GRADE[0] = 'A';
			else 
				if((score >= 75)&&(score < 80))
					{
					GRADE[0] = 'B';
					GRADE[1] = '+';
					}
				else 
					if((score >= 70)&&(score < 75))
						GRADE[0] = 'B';
					else 
						if((score >= 65)&&(score < 70))
							{
							GRADE[0] = 'C';
							GRADE[1] = '+';
							}
						else 
							if((score >= 60)&&(score < 65))
								GRADE[0] = 'C';
							else 
								if((score >= 55)&&(score < 60))
									{
									GRADE[0] = 'D';
									GRADE[1] = '+';
									}
								else 
									if((score >= 50)&&(score < 60))
										GRADE[0] = 'D';
									else
										if((score >= 0)&&(score < 50))
											GRADE[0] = 'F';
										else 
											printf("error");
		printf("Name : %s %s\n",name,surname);
		printf("ID : %s\n",id);
		printf("congratolation you passed your score : %.2f\n",score);
		printf("You got grade : %s",GRADE);
}*/
/*{
		char name[30],surname[30],id[9],GRADE[3];
		float score,midscore,finalscore;
	
		printf("Please enter your name : ");
		scanf("%s",name);
		printf("Please enter your surname : ");
		scanf("%s",surname);
		printf("Please enter your ID : ");
		scanf("%s",id);
		printf("Please enter your midterm score : ");
		scanf("%f",&midscore);
		printf("Please enter your final score : ");
		scanf("%f",&finalscore);
		score = midscore+finalscore;
			if((score >= 80)&&(score <= 100))
				GRADE[0] = 'A';
			else if((score >= 75)&&(score < 80))
			{
				GRADE[0] = 'B';
				GRADE[1] = '+';
			}
			else if((score >= 70)&&(score < 75))
				GRADE[0] = 'B';
			else if((score >= 65)&&(score < 70))
			{
				GRADE[0] = 'C';
				GRADE[1] = '+';
			}
			else if((score >= 60)&&(score < 65))
				GRADE[0] = 'C';
			else if((score >= 55)&&(score < 60))
			{
				GRADE[0] = 'D';
				GRADE[1] = '+';
			}
			else if((score >= 50)&&(score < 60))
				GRADE[0] = 'D';
			else if((score >= 0)&&(score < 50))
				GRADE[0] = 'F';
			else 
				printf("error");
			printf("Name : %s %s\n",name,surname);
			printf("ID : %s\n",id);
			printf("congratolation you passed your score : %.2f\n",score);
			printf("You got grade : %s",GRADE);
}*/



/*{
	float num1 , num2 ;
	printf("Please enter num 1 : ");
	scanf("%f",&num1);
	printf("Please enter num 2 : ");
	scanf("%f",&num2);
		if(num2 != 0)
			printf("%.2f / %.2f = %.2f",num1,num2,num1/num2);
		else
			printf("Your division cannot be done because the denominator is 0.");
}*/


/*{
	char ans;
	printf("Do you like Pascal : ");
	scanf("%c",&ans);
		if((ans == 'y')||(ans == 'Y'))
			printf("Thank you\n");	
		else
			printf("I'm sorry to hear that\n");
	printf("Good bye");
}*/


/*{
	int age ,n, young = 0, old = 0;
	printf("please enter the number of people : ");
	scanf("%d",&n);
	
	for(int i = 0;i<n;i++)
	{
		printf("please enter the age : ");
		scanf("%d",&age);
		if(age > 60)
		 printf("You are old\n");
		else
		 printf("you are young\n");
	}
	printf("number of young people : %d\n",young);
	printf("number of old people : %d\n",old);
}*/



/*{
	int sex ,n, male = 0, female = 0;
	printf("please enter the number of students : ");
	scanf("%d",&n);
	
	for(int i = 0;i<n;i++)
	{
		printf("please enter the gender of student 1 = male 2 = female: ");
		scanf("%d",&sex);
		if(sex == 1)
		 male++;
		else
		 female++;
	}
	printf("number of male students : %d\n",male);
	printf("number of female students : %d\n",female);
}*/






/*{
	char name[20],surname[20],id[10];
	float score,full_score;
	
		printf("Please enter your name : ");
		scanf("%s",name);
		printf("Please enter your surname : ");
		scanf("%s",surname);
		printf("Please enter your ID : ");
		scanf("%s",id);
		printf("Please enter your examination score : ");
		scanf("%f",&score);
		printf("Please enter total points : ");
		scanf("%f",&full_score);	
			if(score >= 0.6)
			{
			printf("Name : %s %s\n",name,surname);
			printf("ID : %s\n",id);
			printf("congratolation you passed your score : %.2f/%.2f",score,full_score);
			}
}*/



/*{
	int pass = 1234, guess;
	printf("enter your password : ");
	scanf("%d",&guess);
	
	if(guess == pass)
		printf("***Right***");
	else
		printf("***It's wrong***");
}*/



/*{
	int age;
	printf("How old are you? : ");
	scanf("%d",&age);
		if(age < 18)
		 {
		 	printf("You are young\n");
		 	printf("You are %d years old.\n",age);
		 }
}*/



/*{
int b = 4;
int a = 5;
if(a > b)
	{
	printf(" a is greater than b value\n");
	}
printf("End Program!!!");
return 0;	
}*/
