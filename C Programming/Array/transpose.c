//array transpose
//prathap
//1/18/2023

#include<stdio.h>
int main()
{
	int a[10][10];
	int i,j,n;
	printf("Enter the size of matrix");
	scanf("%d",&n);
		for (i=0;i<n;i++)
		{
			for (j=0;j<n;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		for (i=0;i<n;i++)
		{
			for (j=0;j<n;j++)
			{
				printf("\t%d",a[j][i]);
			}
			printf("\n");
		}
}
