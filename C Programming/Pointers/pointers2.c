/*
	Name: prathap
	type: pointer
	Date: 26/01/23 14:47
	Description: pointer using in array
*/
#include<stdio.h>
int main()
{
	int a[3]={4,5,6,7};
	int *p;
	p=&a[0];
	p++;
	printf(" First increment is =%d\n",*p);
	p++;
	printf("The second increment is =%d\n",*p);
	p--;
	printf("The first decrement is =%d\n",*p);
}

