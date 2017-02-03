#include <stdio.h>

int main(void) {
	int a[10];
	int i,j=0,n,m,t;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);
	}
	scanf("%d",&m);
	for(i=0;i<n;i++)
	{
	    	for(j=i;j<n;j++)
        	{
	            if(a[j]<a[i])
	            {
	                t=a[j];
	                a[j]=a[i];
	                a[i]=t;
	                
	            }
	        }
	}
	for(i=0;i<n;i++)
	{ 
	    printf("%d ",a[i]);
	    if(a[i]==m)
	    {
	        printf("\n element %d is present in %dth position",m,i);
	        break;
	    }
	}
	
	  return 0;
}

