#include <stdio.h>

int main(void) {
	int a[10];
	int i,n,m;
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
	        printf("%d",i);
	        break;
	    }
	}
	        
	return 0;
}

