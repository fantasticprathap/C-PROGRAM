/*
	Name: prathap 
	Type: function
	Date: 24/01/23 19:27
	Description: with return without argument
*/
#include<stdio.h>
int mul();
int main()
{
	
	int m,k;
	label:
	if(k==1)
	{
		m=mul();
	    printf("%d",m);
		printf("\npress 1 to continue press 0 to Exit");
		scanf("%d",&k);
		goto label;
	}
}
int mul()
{
	int a[10],i,n,res;
	printf("\nHow many number to Mul:");
	scanf("%d",&n);
	res=1;
	for (i=0;i<n;i++)
	scanf("%d",&a[i]);
	for (i=0;i<n;i++)
	res=res*a[i];
	return res;
}
