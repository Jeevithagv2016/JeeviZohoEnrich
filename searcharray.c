#include <stdio.h>

int main(void) {
	int a[10],b[10];
	int i,j=0,n,m,count=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);
	}
	scanf("%d",&m);
	for(i=0;i<n;i++)
	{
	    if(a[i]==m)
	    {
	        b[j]=i;
	        j++;
	        count++;
	    }
	}
	for(i=0;i<count;i++)
	{
	    printf("%d ",b[i]);
	}
	
	  return 0;
}

