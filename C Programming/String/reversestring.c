/*
	Name: prathap
	Date: 20/01/23 19:04
	Description: reverse string
*/

#include<stdio.h>
int main()
{
	int i;
	char name[60];
	printf("Enter the name=");
	for (i=0;name[i-1]!=10;i++)
	{
		scanf("%c",&name[i]);
	}
//	puts(name);
	for (name[i-1];i>=0;i--)
	{
		printf("%c",name[i-1]);
	}
}
