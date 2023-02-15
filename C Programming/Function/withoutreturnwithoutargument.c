/*
	Name: prathap 
	type: function
	Date: 25/01/23 07:04
	Description:without return without argument 
*/

#include<stdio.h>
void add();
int main()
{
	int k;
	label:
	printf("\nPress 1to continue press 0 to exit:");
	scanf("%d",&k);
	while(k==1)
	{	
	add();
	goto label;
    }
}
void add()
{
	int a[10],i,n,k,res;
	{
	printf("\nHow many number to add:");
	scanf("%d",&n);
	res=0;
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		res=res+a[i];
	}
	printf("%d",res);
    }
}
