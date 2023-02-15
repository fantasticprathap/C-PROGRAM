/*
	Name:Prathap 
	Type:Pointers 
	Date: 01/02/23 10:30
	Description:Function of pointers
*/

#include<stdio.h>
void fun(int);
int main()
{
	int a;
	a=10;
	fun(a);
}
void fun (int k)
{
	printf("\nThe value               :%d",(k));
	printf("\nThe value of address    :%d",(&k));
	printf("\nThe size of value       :%d",sizeof(k));
	printf("\nThe size of address     :%d",sizeof(&k));
	printf("\nThe size of function    :%d",sizeof(fun));
	printf("\nThe size of fun.address :%d",sizeof(&fun));
}

