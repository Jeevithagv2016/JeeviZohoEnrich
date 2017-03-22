#include <stdio.h>

int main(void) {
    int i,j,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
            for(j=0;j<n;j++)
            {

            if(i%2==0)
            {
                printf("%d",j);
            } 
        
            else
            {
                printf("%d",j);
            }
            printf("\n");
        }
        
    }
	return 0;
}

