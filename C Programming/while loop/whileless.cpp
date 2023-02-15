//while lessor
//prathap
//6/1/2023

#include<stdio.h>
int main()
{
	int i,n,s;
	printf("Enter any five number\n");
	i=1;
	while (i<=5)
	{
		printf("Enter the %d of number=",i);
		scanf("\n%d",&n);
		if(i==1)
		{
			s=n;
		}
		else
		{
		if (n<s)
		{
			s=n;
		}
	}
		i++;
	}
	printf("\n%d",s);
}
