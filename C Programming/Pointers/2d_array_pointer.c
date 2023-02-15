/*
	Name:Prathap 
	Type:Pointer 
	Date: 31/01/23 14:40
	Description: C program to print elements of a 2-D array by scripting a pointer to an array 
*/
/*#include<stdio.h>
 

int main()
{

  int arr[3][4] = { 
               
			        {10, 89, 99, 77}, 

                    {50 34, 54, 65}, 

                    {78, 90, 62, 83} 

                };

  int (*ptr)[4];

  ptr = arr;

  printf("%d %d %d\n", ptr, ptr + 1, ptr + 2);

  printf("%d %d %d\n", *ptr, *(ptr + 1), *(ptr + 2));

  printf("%d %d %d\n", *ptr, **(ptr)+ 1, ((ptr + 2) + 3));

  printf("%d %d %d\n", ptr[0][0],ptr[1][2],ptr[2][3]);

  return 0;
}
*/
/*
	Name:Prathap 
	Type:Pointer 
	Date: 31/01/23 14:40
	Description: C program to print elements of a 2-D array by scripting a pointer to an array 
*/
#include<stdio.h>
 

int main()
{

  int arr[3][4] = { 
               
			        {10, 15, 20, 25}, 

                    {30, 35, 40, 45}, 

                    {50, 55, 60, 65} 

                };

  int (*ptr)[4];

  ptr = arr;

  printf("%d %d %d\n", ptr, ptr + 1, ptr + 2);

  printf("%d %d %d\n", *ptr,*(ptr + 1),*(ptr + 2));

  printf("%d %d %d\n", *ptr,*((ptr + 1) + 2),*((ptr + 2) + 3));

  printf("%d %d %d\n", **ptr,**ptr+1,**ptr+2);
  
  printf("%d %d %d %d\n", *(*ptr),*(*ptr+1),*(*ptr+2),*(*ptr+3));

  return 0;
}
