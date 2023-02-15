#include<stdio.h>
int main()
{
	int *p,a[7]={4,5,6,7};
//	*p=10;
//	&p=10;
//  printf("%d",*p);
//  p=10;
//  printf("%d",*p);
    printf("%d\n",sizeof(a[0]));
    printf("%d\n",sizeof(a));
    printf("%d\n",sizeof(&a));
    printf("%d\n",(a[0]));
    printf("%d\n",(a));
    printf("%d\n",(&a));
}
