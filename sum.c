#include<stdio.h>
#include<conio.h>
void main()
{
    int num,r;
    int count=0;
    int sum=0;
    printf("\n enter num");
    scanf("%d",&num);
    while(num>0)
    {
	r=num%10;
	sum=sum+r;
	num=num/10;
	count=count+1;
    }
    printf("sum is %d",sum);
    printf("no of digits is %d",count);
getch();
}


