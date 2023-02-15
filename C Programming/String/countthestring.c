/*
	Name: prathap
	Date: 21/01/23 10:30
	Description: count the given string 
*/

#include<stdio.h>
int main()
{
	int i,count,count1,count2;
	count=0;
	count1=0;
	count2=0;
	char given[30];
	gets(given);   //get the input from user
//	puts(given);   // print the input
	for (i=0;i<given[i];i++)
	{
	  if ((given[i]>=65)&&(given[i]<=90))
	  {
	  	count++;
	  }
	 }
	printf("The upper case count is=%d\n",count);
	for (i=0;i<given[i];i++)
	{
	  if ((given[i]>=97)&&(given[i]<=122))
	  {
	  	count1++;
	  }
	 }
	printf("The lower case count is=%d\n",count1);
	for (i=0;i<given[i];i++)
	 if(((given[i]>=32)&&(given[i]<=64))||((given[i]>=91)&&(given[i]<=96))||((given[i]>=123)&&(given[i]<=126)))
	{
		count2++;
	}
	printf("The special letter count is=%d",count2);
}
