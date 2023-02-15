8//desertion
//prathap

#include<stdio.h>
int main()
{
    int num[10],position,i,n;
    printf("Enter the num=");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    printf("Enter the position=");
    scanf("%d",&position);
    position=position-1;
    for (i=position;i<n-1;i++)
    {
        num[i]=num[i+1];
    }
    for (i=0;i<n-1;i++)
    {
        printf("%d\n",num[i]);
    }
}
