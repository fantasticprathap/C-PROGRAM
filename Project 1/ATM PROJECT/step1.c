#include<stdio.h>
#include<string.h>
#include "step1.h"
int intro()
{
	char user_name[100],name[100];
	char default_name[]="WELCOME";
	n:
	printf("\n                          ******************  WELCOME TO MANFREE ATM  *****************                                                 ");
	printf("\n                                ************  PLEASE INSERT YOUR CARD ************                                                      ");
	printf("\n                                      ******  ENTER CARD HOLDER NAME  *****                                                             ");
	gets(user_name);
	system("cls");
	int i,k,strc=0,sp=0;
    for(i=0;i<strlen(user_name);i++)
    {
    	if(isalpha(user_name[i]))
    	{
    		strc++;
		}
		if(user_name[i]==' ')
    	{
    	   sp++;	
		}
	}
	strc=strc+sp;
	if(strc==strlen(user_name))
	{
		strupr(user_name);
		sprintf(name,"***  %s  %s  ***",default_name,user_name);
	    printf("\n");
	    printf("                                                                                       %s                                                          ",name);

	}
	else
	{
		printf("\n                                       *****  ENTER YOUR CORRECT NAME  *****\n");
		goto n;
	}	
}
