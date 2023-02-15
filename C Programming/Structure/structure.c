/*
	Name:Prathap  
	Type: structure
	Date: 02/02/23 10:53
	Description: structure program
*/
#include<stdio.h> 
struct institute 
{ 
   char staff_name[50]; 
   int staff_age; 
}manfree;                                           
void main() 
{ 
 //  manfree.staff_name='h';
 //  scanf("%s",&manfree.staff_name);
   gets(manfree.staff_name);
   manfree.staff_age=29;
   printf("staff name is %s \n", manfree.staff_name);
   printf("staff age is %d\n", manfree.staff_age);
   printf("%d\n",sizeof(manfree));
 } 
