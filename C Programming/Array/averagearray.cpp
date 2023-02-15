// average of array
// prathap
//1/10/2023

#include<stdio.h>
int main()
{
	int a[5],i,sum;
	sum=0;
	float avg;
	for (i=0;i<5;i++)
	{
		printf("Enter your marks=");
		scanf("%d",&a[i]);
	}
	for (i=0;i<5;i++)
	{
		sum=sum+a[i];
	}
//	sum=a[0]+a[1]+a[2]+a[3]+a[4];
	avg=sum/5;
	printf("The output is =%f",avg);
}
