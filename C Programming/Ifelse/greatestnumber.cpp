//greatest number
//prathap
//5/1/2023

#include<stdio.h>
int main()
{
	int i,n,k;
	printf("Enter the any 5 numbers");
	k=0;
	for (i=1;i<=5;i++)
	{
		printf("\nEnter the %d numbers=",i);
		scanf("\n%d",&n);
		if (n>k)
		{
			k=n;
		}
	}
	printf("The greatest number is =%d",k);
}
