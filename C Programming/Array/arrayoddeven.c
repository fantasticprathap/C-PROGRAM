//array number is odd or even
//prathap
//1/10/2023

#include<stdio.h>
int main()
{
	int a[10],i,n1,n2;
	n1=0;
	n2=0;
	for (i=0;i<10;i++)
	{
		printf("Enter any 10 input=");
		scanf("%d",&a[i]);
	
		(a[i]%2==0)?n1++:n2++;
	}
	printf("Odd %d\teven %d",n2,n1);
}
    
	
