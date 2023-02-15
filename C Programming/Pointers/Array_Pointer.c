/*
	Name:Prathap P 
	Type:Pointer 
	Date: 30/01/23 15:20
	Description: Array to pointer
*/

#include<stdio.h>
int main()
{
	int arr[7],*p[7],i,*p1;
	printf("Enter the array value=");
	for (i=0;i<3;i++)
	{
	    scanf("%d",&arr[i]);
    }
    p1=&arr[1];
   for (i=0;i<3;i++)
   {
        p[i]=&arr[i];
        printf(" %d",*p[i]);                   // *p[i]=arr[i]
        printf(" %d",&arr[i]);                 // Array of address value printed
        printf(" %d",p[i]);                    // p[i]=&arr[i]
        printf(" %d",&p[i]);                   // Pointer address value printed
        printf(" %d",*++p[i]);                 // pointer address incresed and print the address of value
        printf(" %d",*--p[i]);                 // pointer address decresed and print the address of value
        printf(" %d",++p[i]);                  // Pointer address incresed and print 
        printf(" %d",--p[i]);                  // pointer address decresed and print
        printf("\n");
    }
 //   printf(" %d",((*p)*(*p1)); 
}
