//ascending array
//prathap

#include<stdio.h>
int main()
{
    int n,i,j,num[10],tem;
    tem=0;
    printf("How many num you want=");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    for (i=0;i<n;i++)
    {
        for (j=i+1;j<n;j++)
        {
            if (num[i]>num[j])
            {
                tem=num[j];
                num[j]=num[i];
                num[i]=tem;
            }
        }
    }
    for (i=0;i<n;i++)
    {
        printf("%d ",num[i]);
    }
}
