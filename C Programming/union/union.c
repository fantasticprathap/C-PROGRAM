/*
	Name:Prathap  
	Type:union
	Date: 02/02/23 10:53
	Description: union
*/
#include<stdio.h> 
union institute                                            //only storing  last input
{ 
   int a;
   char c;
}manfree;                                           
void main() 
{ 
   printf("%d\n",sizeof(manfree));
   printf("\nEnter the numb=");
   scanf("%d",&manfree.a);
   getchar();
   printf("\nEnter the char=");
   scanf("%c",&manfree.c);   
   printf("%d",manfree.a);
 } 
