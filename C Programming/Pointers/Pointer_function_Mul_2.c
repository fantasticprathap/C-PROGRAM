/*
	Name:Prathap 
	Type:pointer 
	Date: 29/01/23 11:34
	Description: pointer,function using matrix multiply
*/
#include<stdio.h>
int r;                                                  // Function declaration    
int c;                                                  //        ''
int r1;                                                 //        ''
int c1;                                                 //        '' 
void mul(int *,int *);                                  //        ''
int main()                                              // Main function declaration
{
	int i,a[30],b[30],*p,*p1;
	printf("Enter your first matrix size:");            // First matrix size (row,column)
	scanf("%d%d",&r,&c);
	printf("Enter your second matrix size:");           // Second matrix size (row1,column1)
	scanf("%d%d",&r1,&c1);
	if (c==r1)                                          // Compare (column==row1)
	{
	printf("Enter your first matrix:");
	for (i=0;i<(r*c);i++)                               // 1.Matrix size (Row*Column)
	scanf("%d",&a[i]);
	printf("Enter the second matrix:");
	for(i=0;i<(r1*c1);i++)                              // 2.Matrix size (Row1*Column1) 
	scanf("%d",&b[i]);
	p=a;
	p1=b;
	mul(&a,&b);                                         // Calling function
    }
    else                                                // (Column!=Row1)
    {
    	printf("Enter correct matrix:");
	}
}
void mul(int *x,int *y)                                 // Function definiation
{
	int e[30][30],f[30][30],m[30][30],i,j,k;
	for (i=0;i<r;i++)                                   // Pointer *x value move to e[i][j]
	{
		for (j=0;j<c;j++)
		{
			e[i][j]=*x;
			x++;
		}
	}
	for (i=0;i<r1;i++)                                  // Pointer *x value move to e[i][j] 
	{
		for (j=0;j<c1;j++)
		{
			f[i][j]=*y;
			y++;
		}
	}
	for (i=0;i<r;i++)                                   // Matrix Mul function
	{
		for (j=0;j<c1;j++)
		{
			m[i][j]=0;
			for (k=0;k<c1;k++)
			{
				m[i][j]=e[i][k]*f[k][j]+m[i][j];
			}
			printf(" %d",m[i][j]);
		}
		printf("\n");
	}
}
