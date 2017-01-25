#include <stdio.h>

int main(void) {
	int i,j,n,a[10][10];
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	    for(j=1;j<=i;j++)
	    {
	        if(j==1||j==i)
	        {
	            a[i][j]=1;
	            printf("%d",a[i][j]);
	        }
	        else
	        {
	            a[i][j]=a[i-1][j-1]+a[i-1][j];
	            printf("%d",a[i][j]);
	        }
	    }
	    printf("\n");
	}
	return 0;
}

