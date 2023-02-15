/*
	Name:Prathap
	Type:Pointer 
	Date: 27/01/23 18:05
	Description:split the string using pointers
*/
#include<stdio.h>
void string(char*);                              //function declaration in character pointer
void string1(char*);                             //function declaration in character pointer
int main()                                       //main function
{
	int i;
	char array[50],*p;                           //pointer initialization with char
	for (i=0;array[i-1]!=10;i++)                 //enter=10,so we use for breaking the condition
	scanf("%c",&array[i]);
	p=array;
	string(&array);                              //call by reference
	string1(&array);                             //call by reference
}
void string(char *x)                             //function definition 1
{
	while(*x!=32)                                //space value=32,so that we use for break condition
	{
		printf("%c",*x);                         //pointer (*p) value printed
		x++;                                     //pointer address incresed
	}
}
void string1(char *y)                            //function definition 2
{
	while(*y!=32)
	{
		y++;
	}
	while(*y!=10)
	{
		printf("%c",*y);
		y++;
	}
}
