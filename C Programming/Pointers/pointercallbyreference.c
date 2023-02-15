/*
	Name: Prathap
	Type: Pointer
	Date: 27/01/23 10:16
	Description: pointer using call by reference
*/

#include<stdio.h>
int add(int*,int*);                    //declartion
int main()
{
	int j=4,i=5,*p,*p1,k;
	p=&j;
	p1=&i;
	k=add(&j,&i);                      //   call by reference
	printf("%d\n",k);
}
add(int*a,int*b)                       //defination
{
	int i,sum=0;
	sum=*a+*b;
	printf("%d\n",sum);
	return sum;
}
