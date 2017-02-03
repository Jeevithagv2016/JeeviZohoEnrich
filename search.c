#include <stdio.h>

int main(void) {
	int a[10];
	int i,n,m;
	scanf("%d",&n); //getting no of elements in an array
	for(i=0;i<n;i++)
	{
	    scanf("%d",&a[i]); //getting the elements
	}
	scanf("%d",&m);
	for(i=0;i<n;i++)
	{
	    if(a[i]==m) //searching the element to be found
	    {
	        printf("%d",i);
	        break; //unique element
	    }
	}
	        
	return 0;
}

