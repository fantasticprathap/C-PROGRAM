// 2 student marks avg
//prathap
//1/11/2023

#include<stdio.h>
int main()
{
	char name1[7],name2[7];
	int marks1[5],marks2[5],i,j;
	float sum=0,sum1=0,avg=0,avg1=0;
	printf("Enter 1 students name=");
	for (i=0;i<7;i++)
	{
	   scanf(" %c",&name1[i]);
	}
	printf("Enter 1 student marks=");
	for (j=0;j<5;j++)
	{
		scanf("%d",&marks1[j]);
		sum=sum+marks1[j];
	}
	printf("Enter 2 students name=");
	for (i=0;i<7;i++)
	{
	   scanf(" %c",&name2[i]);
	}
	printf("Enter 2 student marks=");
	for (j=0;j<5;j++)
	{
		scanf("%d",&marks2[j]);
		sum1=sum1+marks2[j];
	}
	avg=sum/5;
	avg1=sum1/5;
	printf("%f",avg);
	printf("\n%f",avg1);
}
