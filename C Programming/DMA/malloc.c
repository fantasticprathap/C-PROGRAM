/*
	Name:Prathap
	Type:DMA 
	Date: 08/02/23 12:04
	Description:Melloc 
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p,i,n;
	printf("Enter the number elements:");
	scanf("%d",&n);
	p=(int*)malloc(n*sizeof(int));
	if(p==NULL)
	{
		printf("ERROR!");
		exit(1);
	}
	else
	{
		printf("Memory successfully allocated  by malloc\n");
		for(i=0;i<n;i++)
		p[i]=i+1;
		printf("Array of elements\n");
		for (i=0;i<n;i++)
		printf("%d  ",p[i]);
	}
	free(p);
	p=NULL;
	printf("\n%d",p);
	return 0;
}
