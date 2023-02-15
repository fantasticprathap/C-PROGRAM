/*
	Name: prathap
	Type:structure pointer 
	Date: 03/02/23 14:24
*/
#include<stdio.h>
struct abc
{
	int a;
	char b;
	float c;
}s={45,'g',6.24};
main()
{
	//struct abc s={45,'g',6.24};
	struct abc *val=&s;
	printf("%d\t%c\t%f",val->a,val->b,val->c);
}
