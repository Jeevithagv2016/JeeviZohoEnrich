#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char s1[50];
    char s2[50];
    printf("enter the string");
    gets(s1);
    strcpy(s2,s1);
    strrev(s2);
    if(strcmp(s2,s1)==0)
    {
        printf("\n palindrome");
    }
    else
    {
        printf("\n not palindrome");
    }
    getch();
}
