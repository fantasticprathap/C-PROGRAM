//ascending order
//prathap
//1/11/2023

#include<stdio.h>
int main()
{
	int num[10],i,n,j,temp;
	temp=0;
	printf("how many number=");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%d",&num[i]);
    }
    for (i=0;i<n;i++)
    {
    	for (j=i+1;j<n;j++)
    	{
    		if (num[i]<num[j]);
    		{
    		temp=num[j];
    		num[j]=num[i];
    		num[i]=temp;
        	}
		}
	}
	for (i=0;i<n;i++)
	{
		printf("%d",num[i]);
	}
}
