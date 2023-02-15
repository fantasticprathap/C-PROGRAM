/*
	Name: prtahap 
	Author:pointer
	Date: 28/01/23 10:54
	Description: 2D array multiply in 2*2,only( 2*2 matrix mul) n=always should be 4.
*/
#include<stdio.h>
void mul(int *,int *);
int main()
{
	int i,a[30],b[30],*p,*p1,n;
	printf("Enter your matrix size:");
	scanf("%d",&n);
	printf("Enter your first matrix:");
	for (i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("Enter the second matrix:");
	for(i=0;i<n;i++)
	scanf("%d",&b[i]);
	p=a;
	p1=b;
	mul(&a,&b);
}
void mul(int *m,int *n)
{
	printf("%d ",((*m)*(*n))+((*(1+m))*(*(2+n))));
	printf(" %d\n",((*m)*(*(1+n)))+((*(1+m)))*(*(3+n)));
	printf("%d ",((*(2+m))*(*n))+((*(3+m))*(*(2+n))));
	printf(" %d ",((*(2+m))*(*(1+n)))+((*(3+m))*(*(3+n))));
}


