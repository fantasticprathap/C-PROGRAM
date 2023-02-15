/*
	Name:Prathap
	Date: 21/01/23 14:20
	Description:Using the string functions
*/

#include<stdio.h>
#include<string.h>
int main()
{
	char name[30],name1[20],tem[20];
	printf("Enter the name=");                         //Enter the string
	gets(name);                                        //gets the input
	puts(name);                                        //print the output
//	strlen(name);                                      // find string length
	printf("The length of string=%d\n",strlen(name));  //print the string length
	puts(name);
	strupr(name);                                       //print to upper case
	puts(name);
	strlwr(name);                                       //print to lower case
	puts(name);
	printf("Enter the 2 name\n=");                       //enter the 2 string
	gets(name1);
	if (strcmp(name,name1)==0)                        //compare the 2 string and equal to 0
	printf("These are same\n");                           //true statement
	else                                          
	printf("Not equal\n");                                 //false statement
	puts(name1);
	strcpy(tem,name1);                                  //string copy function
	puts(tem);
	strrev(tem);                                         //string reverse function
	puts(tem);  
	strcat(tem,name);                                   //string concatenation function
	puts(tem);                                      
}
