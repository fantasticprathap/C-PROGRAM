/*
	Name: Prathap 
	Author: pointer
	Date: 27/01/23 10:52
	Description: pointer increment,decrement
*/
 
#include<stdio.h>
int main()
{
	int a[3]={10,2,3,4};
	int *p;
	p=a;
	printf("The first index number value is=%d\n",*p);       // first index value print
	printf("The  post incerment value is   =%d\n",*p++);     // post incerment address increment but not show
	printf("The   incerment value is       =%d\n",*p);       // post increment address increment and also show result
	printf("The  pre increment value is    =%d\n",*++p);     // pre increment adress increment and also show result
    printf("The post decrement value is    =%d\n",*p--);     // address decresed and show the result
    printf("The   decrement value is       =%d\n",*p);       // drcresed value show
    printf("The pre decrement value is     =%d\n",*--p);     // pre decrement address and also show the result
    printf("The increment pointer value is =%d\n",++*p);     // pointer value incresed
    printf("The decrement is pointer value =%d\n",--*p);     // pointer value decresed
}

