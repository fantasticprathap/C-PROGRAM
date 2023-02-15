/*
	Name: prathap
	Date: 20/01/23 22:31
	Description: Lower case string
*/

#include<stdio.h>
int main()
{
	int i,tem;
	char x[30];
	printf("Enter the string in upper case=");
	for (i=0;x[i-1]!=10;i++)
	{
		scanf("%c",&x[i]);
	}
//	x[i-1]='\0';
//	puts(x);
    for (i=0;x[i]!=10;i++)
    {
    	if ((x[i]>=65)&&(x[i]<=90))
    	x[i]=(int)x[i]+32;
    	printf("%c",x[i]);
	}
}
