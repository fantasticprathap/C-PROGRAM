/*
	Name:Prathap
	Type:string
	Date: 07/02/23 12:20
	Description:sscanf 
*/
#include<stdio.h>
#include<string.h>
int main()
{
	char man[100]="king 4.5 k 1234";                   
	char ar[20];
	float f;
	char c;
	int d;
	sscanf(man,"%s %f %c %d",&ar,&f,&c,&d);
	printf("%s\n",ar);
	printf("%f\n",f);
	printf("%c\n",c);
	printf("%d",d);
}
