#include <stdio.h>

int main(void) {
     int n,i,j=0,k=0,a[10],t;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            a[j]=a[i];
        }
        else
        {
            a[j]=0;
        }
        j++;
    }
    for(i=0;i<n;i++)
    {
        
        if(a[i]!=0)
        {
            a[k]=a[i];
            k++;
        }
    }
    for(i=0;i<k;i++)
    {
        for(j=i+1;j<k;j++)
        {
            if(a[i]<a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    printf("%d",a[1]);
    return 0;
}

