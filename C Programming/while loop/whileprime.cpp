#include<stdio.h>
int main()
{
	int a[6],b,i,c;
	
	printf("enter the binary value");
	for(i=0;i<=5;i++)
	{
		scanf("%11d",&a[i]);
		
	}
	printf("enter the position");
	scanf("%d",&b);
	c=a[b];
	for(i=0;i<=5;i++)
	{
	
	printf("%d",c+((a[i]-c)));
}
}
