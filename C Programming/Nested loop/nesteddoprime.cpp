// nested do while prime
//prathap
//1/10/2023

#include<stdio.h>
int main()
{
	int i,j,n1,n2;
	printf("Enter the start num=");
	scanf("%d",&n1);
	printf("Enter the stop num=");
	scanf("%d",&n2);
	i=n1;
	do
	{
		j=2;
		do
		{
			if (i%j==0);
			break;
			j++;
		}
		while(j<=i);
		if (i=j)
		printf("%d ",i);
	    i++;
	}
	while(i<n2);
}
