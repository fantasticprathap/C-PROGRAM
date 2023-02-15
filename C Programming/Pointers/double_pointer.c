/*
	Name:Prthap 
	Author: Pointer
	Date: 01/02/23 11:48
	Description: double pointer
*/
#include<stdio.h>
int main()
{
	int a=10;
	int *p,**q,*r;
	p=&a;
	q=&p;
	printf("The A original address is            =%d\n",&a);
	printf("The P store address is               =%d\n",p);
    printf("The P original address is            =%d\n",&p);
    printf("The P value is                       =%d\n",*p);
    printf("The q store address is               =%d\n",q);
    printf("The q original address is            =%d\n",&q);
    printf("The q value is                       =%d\n",*q);
	printf("The q value is                       =%d\n",(**q));	
}
