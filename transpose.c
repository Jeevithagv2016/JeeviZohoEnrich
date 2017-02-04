#include <stdio.h>

int main(void) {
    int a[3][3]={1,2,3},{4,5,6},{7,8,9};
    int i,j;
    int b[3][3];
	display();
	transpose();
	result();
}
return 0;
int display()
{
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",a[i]);
        }
        printf("\n");
    }
    return 0;
}
int transpose()
{
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            b[i][j]=a[j][i];
        }
    }
    return 0;
}
int result()
{
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }
    return 0;
}
