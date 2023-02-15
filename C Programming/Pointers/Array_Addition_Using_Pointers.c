/*
	Name:Prathap 
	Type:Pointers 
	Date: 27/01/23 20:50
	Description:Array addtion using pointers
*/
#include<stdio.h>
int main()
{
	int i,g[30],h[30],*p,*p1,n;                                
	printf("How many number using in array:");
	scanf("%d",&n);
	printf("Enter the first array:");
	for (i=0;i<n;i++)
	scanf("%d",&g[i]);
	p=g;                                              //array of g moving to pointer
	printf("Enter the second array:");
	for (i=0;i<n;i++)
	scanf("%d",&h[i]);
	p1=h;                                             //array of h moving to pointer 1
	for (i=0;i<n;i++)
	{
		printf("%d ",*p+*p1);
		p++;                                
		p1++;
	}
}
