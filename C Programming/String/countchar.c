/*
	Name:prathap 
	Date: 20/01/23 14:25
	Description:count of char
*/

#include<stdio.h>
int main()
{
	int i;
	char name[100];
	printf("Enter the name=");
	for (i=0;name[i-1]!=10;i++)
	{
		scanf("%c",&name[i]);
	}
	name[i-1]='\0';
	puts(name);
	printf("%d",i-1);
}
