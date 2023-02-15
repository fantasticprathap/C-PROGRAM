/*
	Name:Prathap
	Type:Pointer
	Date: 27/01/23 12:25
	Description: call by reference using pointers
*/
#include<stdio.h>
#include<string.h>
void string(char*);                           //char pointer declaration
int main()                                    //main function
{
	char*p;                                   //char pointer initalization
	int i;
	char array[100];                          //get char array
	for (i=0;array[i-1]!=10;i++)              //conditon = enter value is 10,so we using to break,
	scanf("%c",&array[i]);
	p=array;                                  //array move to pointer
	string(&array);                           //function call(reference)
}
void string(char *m)
{
	for (;*m;m++)                             //pointer address increment
	printf("%c",*m);                          //Result
}

