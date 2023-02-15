// hollow star while
//prathap
//1/9/2023

#include<stdio.h>
int main()
{
	int i,j,n;
	printf("How many row you want=");
	scanf("%d",&n);
	i=0;
	while (i<n)
	{
		j=0;
		while (j<n)
		{
			if ((i==0)||(i==n-1)||(j==0)||(j==n-1))
			printf("*");
			else
			printf(" ");
			j++;
		}
		i++;
		printf("\n");
	}
}
