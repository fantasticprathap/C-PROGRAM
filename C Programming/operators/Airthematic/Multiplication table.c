//multiplication table
//prathap
//4/1/2023

#include<stdio.h>
int main()
{
    int i,j,k;
    printf("Enter the value of table=");
    scanf("%d",&k);
    printf("Mulitiplication table of 1:%d\n",k);
    for (i=1;i<=10;i++)
    {
        for(j=1;j<=k;j++)
        {
            printf("%d*%d=%d,",i,j,(i*j));
        }
        printf("\n");
    }
}