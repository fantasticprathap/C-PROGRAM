/*
	Name: prathap
	Date: 20/01/23 10:39
	Description: string
*/
#include<stdio.h>
int main()
{
	char name[50];
	char letter[]={'a','b','c','d','e','\0'};
	printf("%s",letter);
	printf("\nEnter the string=");
	gets(name);
	puts(name);
//	letter[4]=getchar();
    putchar(name[2]);
//	puts(letter);
}
