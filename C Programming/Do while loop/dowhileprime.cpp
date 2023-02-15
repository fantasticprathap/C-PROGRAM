//while prime
//prathap
//9/1/2023

#include<stdio.h>
int main()
{
	int i,j,n1,n2;
	printf("Enter the start num=");
	scanf("%d",&n1);
	printf("Enter the stop num=");
	scanf("%d",&n2);
	i=n1;
	while (i<=n2)
	{
		j=2;
		while(j<=i)
		{
		   if (i%j==0)
		   j++;
		   break;
		}
		i++;
		if (i==j)
		printf("%d",i);
	}
}
