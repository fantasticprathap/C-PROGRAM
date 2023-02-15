// palindrome
// prathap
//8/1/2023

#include<stdio.h>
int main()
{
	int n,r,j,i,n1,temp;
	printf("Enter the start number=");
	scanf("%d",&n);
	printf("Enter the end numner=");
	scanf("%d",&n1);
	for (i=n;i<n1;i++)
	{
		i=temp;
		for (j=0;j<n1;j++)
		{
		r=i%10;
		j=j*10+r;
		i/=10;
		if (temp==j)
		printf("%d ",j);
		}	
    }
}
