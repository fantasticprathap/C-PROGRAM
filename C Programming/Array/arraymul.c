//array multiplication
//prathap
//1/16/2023

#include<stdio.h>
int main()
{
	int b[10][10],w[10][10],g[10][10];
	int br,bc,wr,wc,i,j,k;
	printf("Enter the  b matrix row and colum=");
	scanf("%d%d",&br,&bc);
	printf("Enter the w matrix row and colum=");
	scanf("%d%d",&wr,&wc);
	if (bc==wr)
	{
		printf("Enter the first matrix=");
	for (i=0;i<br;++i)
	{
		for (j=0;j<bc;++j)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("Enter the second matrix=");
	for (i=0;i<wr;++i)
	{
		for (j=0;j<wc;++j)
		{
			scanf("%d",&w[i][j]);
		}
	}
	for (i=0;i<br;++i)
	{
		for (j=0;j<wc;++j)
		{
		g[i][j]=0;
		for (k=0;k<wr;++k)
		{
		    g[i][j]=b[i][k]*w[k][j]+g[i][j];	
		}
		printf(" %d",g[i][j]);
		}
		printf("\n");
	}
}
else
{
	printf("Enter correct matrix");
}
}
