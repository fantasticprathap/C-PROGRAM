/*
	Name:Prathap
	Type:Pointer 
	Date: 01/02/23 14:10
	Description:string [] get print
*/
#include<stdio.h>
char fun1(char []);
char fun2(char*);
char *fun3();
char strf[50];
int main()
{
	int i;
	char *z;
	char str[50],str1[50];
	char(*ptr)(char []);
	printf("Enter the first string=");                            //first string
	gets(str);
	ptr=fun1;
	ptr(str);
	
	
	char(*ptr1)(char*);                                           //second string
	printf("\nEnter the second string=");         
    gets(str1);
    ptr1=fun2;
    ptr1(str1);
    
    
    z=fun3();                                                    // 3 string
    i=0;
    while(z[i]!='\0')
    {
    	printf("%c",*(z+i));
    	i++;
	}
}


char fun1(char s[])
{
    printf("The string is %s",s);                           //First string output
}


char fun2(char *k)
{
	int i;
	while (k[i]!='\0')                                      //using while loop
	{
     	printf("\nThe second string is =%c",*(k+i));
		i++;
	}
//	for (i=0;k[i]!='\0';i++)                                //using for loop
//	{
//		printf("%c",*(k+i));
//	}
}


char *fun3()                                                // 3 function
{
	printf("\nEnter the third string in function=");
	gets(strf);
	return strf;
}


