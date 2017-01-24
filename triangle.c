#include <stdio.h>

int main(void) {
	int i,j,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	    for(j=1;j<=i;j++)
	    {
	        if(j==1||j==i)
	        {
	            printf("1");
	        }
	        else
	        {
	        printf("%d",i);
	        }
	    }
	    printf("\n");
	}
	
	return 0;
}
