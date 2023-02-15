/*
	Name:Prathap 
	Type:Pointer 
	Date: 01/02/23 12:03
	Description:Function Pointer with array
*/
#include<stdio.h>
int add(int []);
int mul(int []);
int main()
{
	int a[3]={5,10,15};
	int b[3]={20,25,30};
	int c[3]={35,40,45};
	int(*p[3])(int []);
	p[0]=add;
	p[1]=mul;
	int result=p[0](a);
	printf("\nThe add is =%d",result);
	int result1=p[1](b);
	printf("\nThe mul is =%d",result1);
}
int add (int x[])
{
    return (x[0]+x[1]+x[2]);
}
int mul (int p[])
{
	return (p[0]*p[1]*p[2]);
}
