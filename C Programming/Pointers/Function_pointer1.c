/*
	Name:prathap  
	Type:Pointer
	Date: 01/02/23 11:09
	Description:Function pointer
*/
#include<stdio.h>
int mul(int,int);
int main()
{
	int (*p)(int,int)=mul;
	int result=p(5,7);
	printf("The mul is =%d",result);
}
int mul(int x,int y)
{
	return x*y;
}
