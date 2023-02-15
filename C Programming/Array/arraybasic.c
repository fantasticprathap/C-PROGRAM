//array basic
//prathap
//1/14/2022

#include<stdio.h>
int main()
{
	int i,n;
	int arr[6];
	n=sizeof(arr)/sizeof(arr[0]);
	printf("Enter the element value=\n");
	for (i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("The array is =\n");
	for (i=0;i<n;i++)
	{
		printf("arr[%d]=%d\tarr[%d]=%d\n",i,&arr[i],i,arr[i]);
	}
}
