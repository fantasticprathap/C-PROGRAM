//nested for loop number
//7/1/2023
//prathap

#include<stdio.h>
int main()
{
	int i,j,m;
	printf("Enter the value =");
	scanf("%d",&m);
	for (i=m;i>=1;i--)
	{
		for (j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
}
