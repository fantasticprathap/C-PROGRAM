#include <stdio.h>

int main()
{
  // array declaration and initialization
  int a[5] = {5, 6, 7, 8, 9}, i;
	
  // Valid in case of arrays but not valid in case of single integer values.
  int *ptr = a;
	
  // All representations prints the base address of the array
  printf("ptr : %u, &a[0] : %u, a : %u, &a : %u\n", ptr, &a[0], a, &a);

  for(i = 0; i < 5; i++)
  {
	// printing address values
	printf("[index %d] Address : %u\n", i, (ptr + i));
  }

  printf("\n");

  for (i = 0; i < 5; i++)
  {
	// Accessing array values through pointer 
	// a[i] = *(a + i) = *(ptr + i) = *(i + a) = a[i]
	printf("[index %d] Value : %d %d %d %d\n", i, *(a + i), *(ptr + i), *(i + a), a[i]);
  }

  printf("\n");

  // Gives address of next byte after array's last element
  printf("&a : %u, &a + 1 : %u\n", &a, &a + 1);  

  // Gives the address of the next element
  printf("a : %u, a + 1 : %u\n", a, a + 1);

  // Gives value at index 1
  printf("*(a + 1) : %d\n", *(a + 1)); 
	
  // Gives (value at index 0) + 1
  printf("*a + 1 : %d\n", *a + 1);   
	
  // Gives (value at index 0) / 2, we can't perform *(p / 2) or *(p * 2)
  printf("(*ptr / 2) : %d\n", (*ptr / 2)); 

  return 0;
}
