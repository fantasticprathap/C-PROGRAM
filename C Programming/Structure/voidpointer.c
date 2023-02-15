/*
	Name:Prathap 
	Type:void pointer
	Date: 03/02/23 15:09
*/

#include<stdio.h>
main()
{
	void *p;
	int a=7;
	char g='E';
	float c=6.45;
	p=&a;
	printf("\n%d",*(int*)p);                 //type casting
	p=&g;
	printf("\n%c",*(char*)p);
	p=&c;
	printf("\n%f",*(float*)p);	
}
