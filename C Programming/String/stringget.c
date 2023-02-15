/*
	Name: prathap
	Date: 20/01/23 11:49
	Description: gets the string
*/
#include<stdio.h>
int main()
{
	int i;
	char name[20];
//	char dist[10];
	printf("Enter the your name=");
	for (i=0;name[i-1]!=10;i++)
	{
	scanf("%c",&name[i]);
    }
    name[i-1]='\0';
    puts(name);
}

