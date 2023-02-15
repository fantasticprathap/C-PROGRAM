/*
	Name:Prathap 
	Type:pointer 
	Date: 29/01/23 11:34
	Description: array to pointer,function using matrix multiply
*/
#include<stdio.h>
int r;                                                  // Function declaration    
int c;                                                  //        ''
int r1;                                                 //        ''
int c1;                                                 //        '' 
void mul(int *[],int *[]);                                  //        ''
int main()                                              // Main function declaration
{
	int i,j,a[30],b[30],*p[30][30],*p1[30][30];
	printf("Enter your first matrix size:");            // First matrix size (row,column)
	scanf("%d%d",&r,&c);
	printf("Enter your second matrix size:");           // Second matrix size (row1,column1)
	scanf("%d%d",&r1,&c1);
	if (c==r1)                                          // Compare (column==row1)
	{
	printf("Enter your first matrix:");
	for (i=0;i<(r*c);i++)                               // 1.Matrix size (Row*Column)
	{
	    scanf("%d",&a[i]);
    }
	printf("Enter the second matrix:");
	for(i=0;i<(r1*c1);i++)                              // 2.Matrix size (Row1*Column1) 
	{		
	scanf("%d",&b[i]);
    }
    for (i=0;i<r;i++)                                   // Pointer *x value move to e[i][j]
	{
		for (j=0;j<c;j++)
		{
			p[i][j]=&a[i];
		}
	}
	for (i=0;i<r1;i++)                                  // Pointer *x value move to e[i][j] 
	{
		for (j=0;j<c1;j++)
		{
			p1[i][j]=&b[i];
		}
	}
	mul(&p,&p1);                                         // Calling function
    }
    else                                                // (Column!=Row1)
    {
    	printf("Enter correct matrix:");
	}
}
void mul(int *x[],int *y[])                                 // Function definiation
{
	int m[30][30],i,j,k;
	for (i=0;i<r;i++)
	{
		for (j=0;j<c1;j++)
		{
			m[i][j]=0;
			for (k=0;k<c;k++)
			{
				m[i][j]=(*x[i][k]*y[k][j]+m[i][j]);
			}
			printf(" %d",m[i][j]);
		}
		printf("\n");
	}
}
