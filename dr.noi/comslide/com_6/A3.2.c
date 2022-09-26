#include <stdio.h>

void main()
{
    int cha,vowel=0,n_vowel=0;
    char charac;
    printf("enter 20 little : \n");
    for ( cha = 1; cha <= 20; cha++)
    {
        scanf("%c",&charac);
            if (charac=='a'||charac=='e'||charac=='i'||charac=='o'||charac=='u')
                vowel++;
            else
                n_vowel++;
    }
    printf("vowel %d\n",vowel);
    printf("orther little %d\n",n_vowel);
    
}