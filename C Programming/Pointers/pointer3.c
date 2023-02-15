/*
	Name: Prathap
	Type:pointer 
	Date: 26/01/23 15:07
	Description: pointer 
*/
#include<stdio.h>
int main()
{
	int a=1,b=2,c=3;
	int *p;
	p=&a;
	p=&b;
	p=&c;
	printf("The given value are=     %d\t%d\t%d\n",a,b,c);
	printf("The  pointer number are =%d\t%d\t%d\n",*p,*p++,*p++);
	printf("The address of given value are=   %d\t   %d\t    %d\n",&a,&b,&c);
	printf("The pointers value address are=   %d\t   %d\t    %d\n",p,p++,p++);
	printf("The pointers address are =        %d\t               ",&p);
}

