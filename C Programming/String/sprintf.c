/*
	Name:Prathap 
	Type:string
	Date: 07/02/23 12:34
	Description:sprintf
*/
#include<stdio.h>
#include<string.h>
int main()
{
	char man[100];
	char ar[20]="prathap";
	int age=27;
	float salary=2.75;
	char last='p';
	sprintf(man,"%s ""%d ""%f "" %c",ar,age,salary,last);
	printf("%s",man);
}
