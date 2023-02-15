//print array
//prathap
//1/11/2023

#include<stdio.h>
int main()
{
	int num[1],i,j,k;
	i=j=k=0;
	float avg [1];
	char name[7];
	printf("enter your details=");
	for (i=0;i<1;i++)
	{
		printf("int");
		scanf("%d",&num[i]);
	}
	for (j=0;j<1;j++)
	{
		printf("\nfloat");
		scanf("\n%f",&avg[j]);
	}
	for (k=0;k<7;k++)
	{
		scanf(" %c",&name[k]);
	}	
	for (k=0;k<7;k++)
	{
	printf("%c",name[k]);
}
	printf("\n%d",num[0]);
	printf("\n%f",avg[0]);
}
