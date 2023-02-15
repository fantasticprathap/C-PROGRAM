/*
	Name: Prathap
	Type: Pointer 
	Date: 26/01/23 11:40
	Description: Pointer using sample program
*/

#include<stdio.h>
int main()
{
	int a=4,b=5,c=6,sum,diff,mul,adds,adda;              //variable declartion
	int *p,*p1,*p2;                            //pointers declartion
	p=&a;                                      //a varible address move to p  
	p1=&b;      
	p2=&c;
	printf("%d\n%d\n%d",p,p1,p2);
	adds=p-p2;
	printf("\nThe address sub is =%d",adds);
//	adda=p+p2;                               in pointers address cannot be worked
//	printf("\nThe address of add is =%d",adda);           need to clarify
	sum=*p+*p1;
	printf("\nThe sum is =%d\n",sum);
	diff=*p2-*p;
	printf("%d\t%d",*p2,*p);
	printf("\nThe diff is =%d",diff);     //Need to clarify
	p1++;
	printf("\n%d\t%d",*p1,p1);
	p--;
	printf("\n%d\t%d",p,*p);
	
}
