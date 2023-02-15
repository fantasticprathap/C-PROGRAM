/*
	Name:prathap
	Type:Pointers
	Date: 26/01/23 14:23
	Description: Pointer swapping
*/
#include<stdio.h>
int main()
{
	int x=5,y=8,tem;
	int *p,*p1;  
	p=&x;
	p1=&y;
    tem=*p;
	*p=*p1;
	*p1=tem;          
	printf("The swapping two numbers are %d\t%d",x,y);	
}
