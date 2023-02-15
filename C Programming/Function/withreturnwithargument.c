/*
	Name:prathap 
	type: function
	Date: 24/01/23 22:27
	Description: with return with argument
*/

#include<stdio.h>
int k;
int num();                                                 //function declaration
int div(int[]);
int main()
{
	int b[10],i,p;
	printf("Enter the value:");
	scanf("%d",&k);
	for (i=0;i<k;i++)
	{
		scanf("%d",&b[i]);
	}
	p=div(b);                                          //result
}
int div(int c[])
{
	int i,res;                                            
    res=c[0];
    for (i=1;i<k;i++)
    res=res/c[i];
    printf("%d",k);
    return res;                                         //return to result
}

