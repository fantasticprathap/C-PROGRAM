/*
	Name:prathap 
	Date: 20/01/23 14:25
	Description:count of char
*/
#include<stdio.h>
int main()
{
	int i,count;
	count=0;
	char name[100];
	gets(name);
//	puts(name);
	for (i=0;i<name[i];i++)
	{
		count++;
	}
//	name[i-1]='\0';
    printf("%d",count);
}
