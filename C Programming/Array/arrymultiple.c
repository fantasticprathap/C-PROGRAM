// multiple array
//prathap
//1/10/2023w

#include<stdio.h>
int main()
{
	int a[5],b[5],c[5],i,j,k;
	for (i=0;i<5;i++)
	{
		printf("Enter a value=");
		scanf("%d",&a[i]);
	}
	for (j=0;j<5;j++)
	{
		printf("Enter the b value=");
		scanf("%d",&b[j]);
	}
	for (k=0;k<5;k++)
	{
		j=k;
		i=k;
		c[k]=a[i]*b[j];
		printf("The output is %d\n",c[k]);
	}
}
