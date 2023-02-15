// while palindrome
//prathap
//1/9/2023

#include<stdio.h>
int main()
{
	int i,j,n1,n2,rem,sum,tem;
	printf("Enter the start num=");
	scanf("%d",&n1);
	printf("Enter the stop num=");
	scanf("%d",&n2);
	i=n1;
	while (i<=n2)
	{
		sum=0;
		tem=i;
		j=i;
		while (j>0)
		{
			rem=j%10;
			sum=sum*10+rem;
			j/=10;
		}
		if (tem==sum)
		printf("%d ",sum);
		i++;
	}
	
}
