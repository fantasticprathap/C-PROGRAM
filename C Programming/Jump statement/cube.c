/*#include <stdio.h>
void main()
{
    int i,n;
    printf("Enter the number=");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        printf("%d number cube is %d\n",i,(i*i*i));
    }
}*/


//table
#include<stdio.h>
int main()
{
    int i,n,m;
    printf("Enter the table=");
    scanf("%d",&n);
    for (i=1;i<=10;i++)
    {
        m=i*n;
        printf("%d * %d = %d\n",i,n,m);
    }
}