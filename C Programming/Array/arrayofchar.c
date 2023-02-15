// array of character count
//prathap
//1/12/2023

#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter the num=");
	scanf("%d",&n);
    char alpha[100];
	for (i=0;i<n;i++)
	{
	   scanf(" %c",&alpha[i]);
	} 	
	for (i=0;i<n;i++)
	{
		if ((alpha[i]>=65)&&(alpha[i]<=90))
		printf(" %c",alpha[i]);
	}
	for (i=0;i<n;i++)
	{
		if ((alpha[i]>=97)&&(alpha[i]<=122))
		printf("\n %c",alpha[i]);
	}
}
