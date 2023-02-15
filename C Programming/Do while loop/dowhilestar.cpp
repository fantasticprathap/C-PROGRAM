//nested while print pyramid
//prathap
//9/1/2023

#include<stdio.h>
int main()
{
	int i,j,n,s;
	printf("how many row you want=");
	scanf("%d",&n);
	i=0;
	while (i<n)
	{
		s=0;
		while (s<n-i-1)
		{
			printf(" ");
			s++;
		}
		j=0;
			while(j<i*2+1)
			{
				printf("*");
				j++;
			}
		i++;
		printf("\n");
	}
	
}
