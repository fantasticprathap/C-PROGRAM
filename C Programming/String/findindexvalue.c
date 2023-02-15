// find index value
//prathap
//1/12/2023

#include<stdio.h>
int main()
{
	int num[100],i,n,value;
	printf("Enter the num=");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%d",&num[i]);
	}
	printf("what number to find index number=");
	scanf("%d",&value);
	for (i=0;i<n;i++)
	{
		if (num[i]==value)
		printf("%d",i);
	}
}
