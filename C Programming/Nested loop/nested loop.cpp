//neted loop
//7/1/2023
//prathap

#include<stdio.h>
int main()
{
	int i,j,n,m;
	printf("Enter the number of row=");
	scanf("%d",&n);
	printf("Enter the number of colum=");
	scanf("%d",&m);
	for (i=1;i<n;i++)
	{
		for (j=1;j<m;j++)
		{
			printf("*");
	    }
	   printf("\n");
}
	printf("Loop is ended\n");
}
