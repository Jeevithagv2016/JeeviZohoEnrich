#include <stdio.h>

int main(void) {
	int i,j,n,k,m=0;
	scanf("%d",&n);
	for(i=1;i<=(n/2)+2;i++)
	{
	    for(j=1;j<=n-i;j++)
	    {
	        printf(" ");
	    }
	    while(m!=(2*i)-1)
	    {
	        if(m%2!=0)
	        {
	        printf("*");
	        }
	        else
	        {
	            printf(" ");
	        }
	        m++;
	    }
	    m=0;
	    printf("\n");
	}
	return 0;
}
