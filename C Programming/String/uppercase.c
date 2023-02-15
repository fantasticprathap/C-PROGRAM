/*
	Name:prathap 
	Date: 20/01/23 20:44
	Description:Upper case string
*/

#include<stdio.h>
int main()
{
	int i,tem;
	char a[20];
	printf("Enter the lower case name=");
	for (i=0;a[i-1]!=10;i++)
	{
		scanf("%c",&a[i]);
	}
//	a[i-1]='\0';
//	puts(a);
	for (i=0;a[i]!=10;i++)
	{
		if ((a[i]>=97)&&(a[i]<=122))
		a[i]=(int)a[i]-32;
		printf("%c",a[i]);
	}
//	a[i-1]='\0';
//	puts(tem);
}
