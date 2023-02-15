/*
	Name:Prathap
	Type:DMA  
	Date: 08/02/23 12:20
	Description:Calloc
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p,i,n;
	printf("Enter the number of elements");
	scanf("%d",&n);
	p=(int*)calloc(n,sizeof(int));
	if(p==NULL)
    {
    	printf("ERROR!");
    	exit(1);
	}
	else
	{
		printf("Memory allocation with calloc:");
		for (i=0;i<n;i++)
		p[i]=i+1;
		printf("Array of elements is:");
		for (i=0;i<n;i++)
		printf("%d ",p[i]);
	}
	free(p);
	p=NULL;
	printf("\n%d",p);
	return 0;
}
