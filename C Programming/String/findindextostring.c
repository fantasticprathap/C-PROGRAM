/*
	Name:prathap 
	Date: 21/01/23 12:20
	Description:count the given letters and find the index 
*/

#include<stdio.h>
int main()
{
	int i,count;
	count=0;
	char input[30],n;
	printf("Enter the string=");
	gets(input);
	puts(input);
	printf("Enter the any letter in your given string=");
	scanf(" %c",&n);
	for (i=0;i<input[i];i++)
	{
		if (input[i]==n)
		{
		count++;
		printf("The index value is %d\n",i);
	    }
	}
	printf("The count is =%d",count);
}
