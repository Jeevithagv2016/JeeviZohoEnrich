#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10][10];
    int i,j,m,n,k;
    printf("enter n and m");
    scanf("%d%d",&n,&m);
    printf("enter k");
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if((i+j)==k)
            {
                a[i][j]=1;
            }
            else
            {
                a[i][j]=0;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d",a[i][j]);
            printf("\t");
        }
        printf("\n");
    }
    getch();
}
