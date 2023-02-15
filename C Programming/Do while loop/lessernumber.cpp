//lesser number
//5/1/2023
//prathap

#include<stdio.h>
int main()
{
	int i,n,k;
	k=99999;
	printf("Enter any 6 numbers\n");
	for (i=1;i<=6;i++)
	{
		printf("Enter %d number =",i);
		scanf("%d",&n);
		if ((n<k)&&(n<99999))
		k=n;
	}
    printf("\nThe lesser number is =%d",k);
}
