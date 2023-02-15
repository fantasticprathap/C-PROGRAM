//while armstrong 
//prathap
//1/9/2023

#include<stdio.h>
int main()
{
	int n1,n2,i,j,tem,sum,rem;
	printf("Enter the start num=");
	scanf("%d",&n1);
	printf("Enter the stop num=");
	scanf("%d",&n2);
	i=n1;
	while (i<=n2)
	{
		tem=i;
		sum=0;
		j=i;
		while (j>0)
		{
			rem=j%10;
			sum=sum+rem*rem*rem;
			j/=10;
		}
		if (sum==tem)
		printf("%d ",sum);
		i++;
	}
}
