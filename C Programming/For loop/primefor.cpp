//prime number
//prathap
//7/1/2023

#include<stdio.h>
int main()
{
	int n1,n2,i,j;
	printf("Enter the start number=");
	scanf("%d",&n1);
	printf("Enter the End number=");
	scanf("%d",&n2);
	for (i=n1;i<=n2;i++)
	{
	  for (j=1;j<=n2;j++)
	  {
	  	if (i/j==1)
	  	printf("The prime numbers are=%d",i);
	  }
	}
}
