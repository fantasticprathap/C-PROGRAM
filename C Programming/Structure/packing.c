/*
	Name:Prathap
	Author: structure
	Date: 02/02/23 14:23
	Description: packing
*/
#include<stdio.h>
#pragma pack(1)                                //packing using for memory saving
struct abc
{
	int a;
	char b;
	double c;
};
void main()
{
	struct abc pack;
	printf("%d",sizeof(pack));
}
