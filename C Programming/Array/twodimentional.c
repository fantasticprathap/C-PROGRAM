//two dimentional arry
//prathap
//1/12/2023

#include<stdio.h>
int main()
{
	int x[100][100],i,j,n;
	printf("Enter the number=");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
	   	for (j=0;j<n;j++)
	   	{
	   		scanf("%d",&x[i][j]);
		   }
	}
	for (i=0;i<n;i++)
	{
	   	for (j=0;j<n;j++)
	   	{
	   		printf("%d\t",x[i][j]);
		   }
		   printf("\n");
	}
}
