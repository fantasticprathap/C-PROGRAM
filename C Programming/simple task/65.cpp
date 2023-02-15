//print thr abcd in triangle shape
//1/9/2023
//prathap

#include<stdio.h>
int main()
{
	int n1,n2,i,j;
	printf("Enter the start num=");
	scanf("%d",&n1);
	printf("Enter the stop num=");
	scanf("%d",&n2);
	for (i=n1;i<n2;i++)
	{
		for (j=i;j=i+1;j++)
		{
		printf("%c",j);
	    }
	    printf("/n");
		
	}
}

