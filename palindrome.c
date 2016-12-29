#include<stdio.h>
#include<conio.h>
void main()
{
    int n,m,r;
    int sum=0;
    printf("enter the num");
    scanf("%d",&n);
    m=n;
    while(n>0)
    {
        r=n%10;
        sum=(sum*10)+r;
        n=n/10;
    }
    if (m==sum)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    getch();
}


