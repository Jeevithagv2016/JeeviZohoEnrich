#include<stdio.h>
void main()
{
    int a[10];
    int i,count=0;
    int n,m;
    printf("\n enter the number of elements");
    scanf("%d",&n);
    printf("enter array");
    for(i=0;i<n;i++)
    {
         scanf("%d",&a[i]);
     }
     printf("\n enter the element to be found");
     scanf("%d",&m);
     for(i=0;i<n;i++)
     {
          if(m==a[i])
          {
              count++;
           }
        }
        printf("occurence of %d is %d",m,count);
}
