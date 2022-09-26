#include <stdio.h>

void main()
{
    float time = 9.28,*p_t,**p2_t;
    printf("ads of time %p\n",time);
    printf("ads of  p_t %p\n",p_t);
    printf("ads of p2_t %p\n",p2_t);
    p_t = &time;
    p2_t = &p_t;
    printf("ads of value that keep by p_t %p\n",*p_t);
    printf("ads of value that keep by p2_t  %p\n",**p2_t);
    float temp1,temp2;
    temp1 = *p_t;
    temp2 = **p2_t;
    printf("value temp1 %.2f\n",temp1);
    printf("value temp2 %.2f\n",temp2); 

}


/*{
    int i,b[] = {10,20,30,40};
    int *b_p = b;

    for ( i = 0 ; i <= 3 ; i++)
    {
        printf("*(b_p[%d]) = %d\n",i,b_p[i]);
    }
}*/


/*{
    int offset,b[] = {10,20,30,40};
    int *b_p = b;

    for ( offset = 0 ; offset <= 3 ; offset++)
    {
        printf("*(b + %d) = %d\n",offset,*(b_p + offset));
    }
}*/


/*{
    int a,b,c,*pa[3];
    a=5;b=10;c=15;
    pa[0]=&a; pa[1]=&b; pa[2]=&c;
    printf("pa 1= %d 2= %d 3=%d",*pa[0],*pa[1],*pa[2]);
}*/


/*{
    int num1 = 113,num2;
    float price1 = 4.85;
    char hint1 ='J',hint2;
    int *p_num;
    float *p_price;
    char *p_hint;
    printf("ads of num1 %p\n",num1);
    printf("ads of num2 %p\n",num2);
    printf("ads of price1 %p\n",price1);
    printf("ads of hint1 %p\n",hint1);
    printf("ads of hint2 %p\n",hint2);
    printf("ads of p_num %p\n",p_num);
    printf("ads of p_price %p\n",p_price);
    printf("ads of p_hint %p\n",p_hint);

    p_num = &num1;
    p_price = &price1;
    p_hint = &hint1;
    num2 = *p_num;
    hint2 = *p_hint;

    printf("\nads of value that keep by p_num %p\n",*p_num);
    printf("ads of value that keep by p_price %p\n",*p_price);
    printf("ads of value that keep by p_hint %p\n",*p_hint);
    printf("ads of num2 that tran by p_num %p\n",num2);
    printf("ads of hint2 that tran by p_hint %p\n",hint2);
    printf("value of num 2 %d\n",num2);
    printf("value of hint 2 %c",hint2);

}*/

/*{
    char letter = 'D';
    int num = 19;
    float point = 26.09;
    char *p_letter;
    int *p_num;
    float *p_point;
    printf("ads of latter %p\n",letter);
    printf("ads of num %p\n",num);
    printf("ads of point %p\n",point);
    printf("ads of p_letter %p\n",p_letter);
    printf("ads of p_num %p\n",p_num);
    printf("ads of p_point %p\n",p_point);

    p_letter = &letter;
    p_num = &num;
    p_point = &point;
    printf("\n---------------------\n");
    printf("ads of *p_letter %p\n",*p_letter);
    printf("ads of *p_num %p\n",*p_num);
    printf("ads of *p_point %p\n",*p_point);
    printf("value that keep by p_letter %c\n",*p_letter);
    printf("value that keep by p_num %d\n",*p_num);
    printf("value that keep by p_point %.2f\n",*p_point);
    return 0;

}*/


/*{
    int x;
    int y = 20;
    int *z;
    printf("ads of x %p\n",x);
    printf("ads of y %p\n",y);
    printf("ads of z %p\n",z);    
    z = &y;
    printf("ads of value that keep by z %p\n",*z);
    printf("value that keep by z %d\n",*z);
    printf("value y = %d\n",y);
    x = *z;
    printf("ads of x %p\n",x);
    printf("value of x %d\n",x);


}*/


/*{
    int *ptr,count = 15,y,z[10];
    printf("ads ptr %p\n",ptr);
    printf("ads count %p\n",count);
    printf("ads y %p\n",y);
    printf("ads z %p\n",z);
    ptr = &count;
    printf("value that keep ptr %p\n",*ptr);

    y = *ptr;
    printf("ads ptr %d\n",y);
    printf("ads ptr %d\n",*ptr);

    *ptr = 0;
    printf("ads ptr %d\n",*ptr);
    printf("ads ptr %d\n",count);

    ptr = &z;
    printf("ads z %p\n",z);
    printf("ads ptr %p\n",ptr);
    printf("ads ptr %p\n",ptr);
}*/


/*{
    int z = 10;
    int *ZPtr;
    ZPtr = &z;

    printf("memory address of count is = %p\n",z);
    printf("memory address of ptr is = %p\n",ZPtr);
    printf("the value that keep by ptr is = %p\n",*ZPtr);
    
}*/



/*void main()
{

int *ptr,count=15;

ptr = &count;
printf("memory address of count is = %p\n",count);
printf("memory address of ptr is = %p\n",ptr);
printf("the value that keep by ptr is = %p\n",*ptr);

}*/