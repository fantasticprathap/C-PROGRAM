//dimentional array addtion
//prathap
//1/16/2023

#include<stdio.h>
int main()
{
	int x[3][3],y[3][3],z[3][3],i,j,n;
	printf("Enter the num=");
	scanf("%d",&n);
	printf("Enter the first matrix=");
	for (i=0;i<n;i++)
	{
		for (j=0;j<n;j++)
		{
			scanf("%d",&x[i][j]);
		}
	}
	printf("Enter the second matrix=");
	for (i=0;i<n;i++)
	{
		for (j=0;j<n;j++)
		{
			scanf("%d",&y[i][j]);
		}
	}
	for (i=0;i<n;i++)
	{
		for (j=0;j<n;j++)
		{
			z[i][j]=x[i][j]+y[i][j];
		}
	}
	for (i=0;i<n;i++)
	{
		for (j=0;j<n;j++)
		{
			printf("%d  ",z[i][j]);
		}
		printf("\n");
	}
}
