//continue
//6/1/2023
//prathap

#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the number");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        if (i==7)
        continue;
        printf("\n%d",i);
    }
}