/*
	Name: prathap
	Type: function
	Date: 24/01/23 18:49
	Description: without return with argument
*/

#include<stdio.h>
int num();
void sub(int[]);
int main()
{
	int a[10],i,k;
	k=num();
	//printf("\n%d",k);
	for (i=0;i<k;i++)
	scanf("%d",&a[i]);
	sub(&a[0]);                            //calling arry with address
}
int num()
{
	int n;
	printf("\nHow many number to sub=");
	scanf("%d",&n);
	return n;
}
void sub(int*a)                             //using pointer
{
	int i,m,res,x[10];
	m=num();
	for (i=0;i<m;i++)
	{
	  x[i]=a[i];
	}
	res=x[0];
	for (i=1;i<m;i++)
	res=res-x[i];
	printf("%d",res);
}

