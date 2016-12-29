#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,t,n,m;
    int r[20];
    printf("enter the number of digits");
    scanf("%d",&n);
    printf("enter the num");
    scanf("%d",&m);
    while(m>0)
    {
        for(i=0;i<n;i++)
        {
            r[i]=m%10;
            m=m/10;
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(r[i]>r[j])
            {
                t=r[i];
                r[i]=r[j];
                r[j]=t;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d",r[i]);
    }
    getch();
}
