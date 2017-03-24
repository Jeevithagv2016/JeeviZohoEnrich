#include <stdio.h>
int main(void) {
    int i,j,n,k=1;
    int a[10][10];
    scanf("%d",&n);//no of rows and columns
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            a[i][j]=k;
            k++;
        }
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            for(j=0;j<n;j++)
            {
                printf("%d ",a[i][j]);
            }
        }
        else
        {
            for(j=n-1;j>=0;j--)
            {
                printf("%d ",a[i][j]);
            } 
        }    
        printf("\n");
    }
	return 0;
}


    
