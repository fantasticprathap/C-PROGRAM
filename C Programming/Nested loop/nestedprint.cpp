//neted loop print star
//7/1/2023
//prathap

#include<stdio.h>
int main()
{
	int i,j,n;
	printf("Enter the number of row=");
	scanf("%d",&n);
	for (i=n;i>=1;i--)
	{
		for (j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
