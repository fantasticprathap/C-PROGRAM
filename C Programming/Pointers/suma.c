/*
	Name:Prathap
	Type:Pointer 
	Date: 01/02/23 14:10
	Description:string [] get print
*/
#include<stdio.h>
char *fun();
char str[50];
int main()
{
	int i;
	char *k;
	k=fun();
	i=0;
	while(k[i]!='\0')
	{
	   printf("%c",*(k+i));	
	   i++;
	}	
}
char *fun()
{
	printf("Enter the string=");
	gets(str);
	return str;
}

	

