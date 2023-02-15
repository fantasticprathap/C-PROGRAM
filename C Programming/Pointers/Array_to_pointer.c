/*
	Name:Prathap 
	Type:Pointer 
	Date: 31/01/23 11:02
	Description:Array to pointer
*/

#include<stdio.h>
int main()
{
	int i,x={1,2,3},y={4,5,6},z={7,8,9},j;
	int *p[3];
	p[0]=&x;
	p[1]=&y;
	p[2]=&z;
//	for (i=0;i<3;i++)
//	{
//		for(j=0;j<3;j++)
//		{
//	printf(" %d intex value=%d\n",j,*(p[i])+j);
//    printf(" %d intex address=%d\n",j,(p[i])+j);
//		printf("\n");
//	    }	
//	} 
//		printf("\n");	
    printf("%d\n",x);	
	for (i=0;i<3;i++)
	{
		printf("%d\n",x+i);
	}	
	for (i=0;i<3;i++)
	{
		printf("%d\n",*(x+i));
	}
}

