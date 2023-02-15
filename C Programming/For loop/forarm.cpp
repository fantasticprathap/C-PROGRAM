//arm strong number
//8/1/2023
//prathap

#include<stdio.h>
int main()
{
	int n1,n2,sum,rem,i,temp;
	printf("Enter the start number=");
	scanf("%d",&n1);	
	printf("Enter the stop number=");
	scanf("%d",&n2);
	for (i=n1;i<=n2;i++)
	{   
	temp=i;
		sum=0;
		while(temp!=0)
		{
			rem=temp%10;
			sum=sum+(rem*rem*rem);
			temp=temp/10;
				
		}
		if (sum==i)
			printf("%d ",sum);
	
	}
}
