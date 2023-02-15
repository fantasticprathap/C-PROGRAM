//print marks,student
//prathap
//1/11/2023

#include<stdio.h>
int main()
{
	char name[7];
	int marks[5],i,j;
	float avg,sum;
	sum=i=j=0;
	printf("Enter your name=");
	{
		for (i=0;i<7;i++)
		{
			scanf(" %c",&name[i]);
		}
		for (j=0;j<5;j++)
		{
			printf("Enter your marks=");
			scanf("%d",&marks[j]);
			sum=sum+marks[j];
		}
		avg=sum/5;
	}
	for (i=0;i<7;i++)
	{
	printf("%c",name[i]);
}
	printf("\nResult is=%f",avg);
}
