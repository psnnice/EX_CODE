#include <stdio.h>
#include <math.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>


int sum(int k);

int main() {
  int result = sum(10);
  printf("%d", result);
  return 0;
}

int sum(int k) {
  if (k > 0) {
    return k + sum(k-9);
  } else {
    return 0;
  }
}




/*
void swap(int *a,int *b){
    int temp;
    printf ("swap: a = %d, b = %d\n",*a,*b);

    temp = *a;
    *a = *b;
    *b = temp;

    printf ("swap: a = %d, b = %d\n",*a,*b);
}
int main()
{
    int x=5,y=10;
    printf("main: x = %d, y = %d\n", x,y);
	swap(&x, &y);
	printf("main: x = %d, y = %d\n", x, y);
    return 0;
}


*/

/*void swap(int a,int b)
{
    int temp;
    printf("swap: a = %d, b = %d\n",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("swap: a = %d, b = %d\n",a,b);
}
int main()
{
    int x=5,y=10;
    printf("main: x = %d, y = %d\n", x,y);
	swap(x, y);
	printf("main: x = %d, y = %d\n", x, y);
    return 0;
}*/


/*void test(void);
int main()
{

    int num1 = 19;
    printf("line1 (main : num1 = %d\n",num1);
    test();
    printf("line2 (main : num1 = %d\n",num1);
    return 0;
}
void test()
{
    int num1 = 26;
    printf("line1 (test) : num1 = %d\n",num1);
}*/

/*#define PI 3.14 
float deg_rad ( float ) ; 
int main ()
{
    float deg,rad;
    printf("Enter Degree : ");
    scanf ("%f",&deg);
    rad = deg_rad(deg);
    printf ( " sin ( %.2f ) = %.3f \n " , deg , sin ( rad ) ) ; 
    printf ( " cos ( %.2f ) = %.3f \n " , deg , cos ( rad ) ) ;
    printf ( " tan ( %.2f ) = %.3f \n " , deg , tan ( rad ) ) ;
    return 0;
}  
float deg_rad(float num)
{
    float ans;
    ans = num * PI / 180;
    return(ans);
}*/


/*int n,num,i;
char show_star(int n)
{
    for ( i = 0; i <= n; i++)
    {
        printf("*");
    }
    printf("\n");
}
void main()
{
    num = 9;
    show_star(num);
    printf("* CPE-UP *\n");
    show_star(num);
}*/



/*void adder(int,int );
int summ;
 
int main() 
{	
	adder(20,30); // จุดที่เรียกใช้ฟังก์ชันโพรโตไทป์
	printf("summary = %d",summ);
}

void adder(int a, int b) 
{   
	summ = a+b;
}*/


/*
int high_inc(int x)
{
    return x * 12;
}

void main()
{
    int feet,inches;
    feet = 6;
    inches = high_inc(feet);  
    printf("Height in inches is %d",inches);
}
*/
/*void main()
{
    int age = 14;
    float grade = 4.00;
    char song[]="More than word";
    printf("size of age = %d bytes\n",sizeof(age));
    printf("size of grade = %d bytes\n",sizeof(grade));
    printf("size of song = %d bytes\n",sizeof(song));
    printf("size of double = %d bytes\n",sizeof(double));
}*/

/*int main(void)
{
	char string[10];
	char *str = "Abc";

	strcpy(string, str);
	printf("%s\n", string);
	strcat(string, "Def");
	printf("%s\n", string);
	printf("%d\n",strcmp(str,"abc"));

	printf("%d\n",strcmpi(str,"abc"));

	printf("%d\n",strlen(string));

	string[0] = tolower(string[0]);
	string[1] = toupper(string[1]);
	printf("%s\n", string);
	return 0;
}*/

/*void showmenu(void);
char getchoice(char,char);
float getoperrand(void);
float add(float,float);
float sub(float,float);
float mul(float,float);
float div(float,float);

int main()
{
    char choice;
    int result, operand1, operand2;

    showmenu();
    choice = getchoice('1','4');
    operand1 = getoperrand();
    operand2 = getoperrand();

    switch (choice)
    {
    case '1':
        result = add(operand1,operand2);
        printf("%.2f + %.2f = %.2f\n",operand1,operand2,result);
        break;
    case '2':
        result = sub(operand1,operand2);
        printf("%.2f - %.2f = %.2f\n",operand1,operand2,result);
        break;
    case '3':
        result = mul(operand1,operand2);
        printf("%.2f * %.2f = %.2f\n",operand1,operand2,result);
        break;
    case '4':
        result = div(operand1,operand2);
        printf("%.2f / %.2f = %.2f\n",operand1,operand2,result);
        break;
    default:
        break;
    }
    
    void showmenu(void)
    {
	   printf("Integer calculation\n"
	          "1. Addition\n"
	          "2. Subtraction\n"
	          "3. Multiplication\n"
	          "4. Division\n");
	}
    char getchoice(char min, char max)
    {
	   char ch;
		   do	
	   {
	     printf("Enter your choice (%c-%c): ",min,max);
	     ch = getchar();
	   } while ( ch < min || ch > max );
	
	   return ch;
	 }
	 float getoperand(void)
	 { 
	   float iVal;
	
	   printf("Enter an integer operand: ");
	   scanf("%f", &iVal);
	
        return iVal;
	 }
	 float add(float a, float b) 
	 {
	   return (a + b);
	 }
	 float sub(float a, float b) 
	 {
	   return (a - b);
	 }
	 float mul(float a, float b) 
	 {
	   return (a * b);
	 }
	 float div(float a, float b) 
	 {
	   return (a / b);
	 }

}*/



/*
#include <stdio.h>
void call_by_reference(int *y) {
	printf("Inside call_by_reference y = %d before adding 10.\n", *y);
	(*y) += 10;
	printf("Inside call_by_reference y = %d after adding 10.\n", *y);
}
int main() {
	int b=10;
	printf("b = %d before function call_by_reference.\n", b);
	call_by_reference(&b);
	printf("b = %d after function call_by_reference.\n", b);
	
	return 0;
}*/

/*void call_by_value(int x) 
{
	printf("Inside call_by_value x = %d before adding 10.\n", x);
	x += 10;
	printf("Inside call_by_value x = %d after adding 10.\n", x);

}

int main() 
{
	int a=10;
	printf("a = %d before function call_by_value.\n", a);
    call_by_value(a);
	printf("a = %d after function call_by_value.\n", a);
	return 0;
}*/


/*char my_print(int x);
void main()
{
    char ch;
    ch = my_print(5);
    printf("%c\n",ch);
}
char my_print(int x)
{
 	char lch;
	printf("Enter your character: ");
	scanf("%c", &lch);
	while (x > 0)
	{
		printf("%c",lch);
		x--;
	}
	printf("\n");
	return lch;
}*/


/*int my_func();
void main()
{
    printf("%d",my_func());
}
int my_func()
{
    int a;
    scanf("%d",&a);
    return (a*5);
}*/

/*void my_print(char,int);
void main()
{
    my_print('a',5);
}
void my_print(char ch, int x)
{
    while (x > 0)
    {
        printf("%c",ch);
        x--;
    }
}*/

/*void my_print(int);
void main()
{
    my_print(2);
}
void my_print(int x)
{
    printf("%d",x);
}*/

/*void my_print();
void main()
{
    my_print();
}
void my_print()
{
    printf("Hello world");
}*/

/*{
    int length, i;
    char string[] = "This Is a String";
    length = strlen(string);

    for(i=0; i<length; i++)
      string[i] = toupper(string[i]);
    printf("%s\n",string);

    for(i=0; i<length; i++)
      string[i] = tolower(string[i]);
    printf("%s\n",string);

}*/

/*{

    char buf1[] = "Nanometer",buf2[] = "Nanometer";
    int ptr;
    printf("buffer 1 : \"%s\"\n",buf1);
    printf("buffer 2 : \"%s\"\n",buf2);
    ptr = strcmp(buf1,buf2);

    if(ptr == 0)
    {
      printf("buffer 2 is equal to buffer 1\n");
      printf("Length of buffer 1 : %d\n", strlen(buf1));
    }
}*/
/*{
    char str1[30] = "current Date ";
    char str2[30] = "18 August 2008";
    char str3[30];
    strcpy(str3,str1);
    strcat(str1,str2);
    printf("str1 = %s\n", str1);
	printf("str3 = %s\n", str3);
}*/


/*void main()
{
    printf("squre root 3 =");
    printf("%.2f\n",sqrt(3));
    printf("5 power 3 =");
    printf("%.2f",pow(5,3));
}*/