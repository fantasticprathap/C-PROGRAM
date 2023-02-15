//perfect number
//prathap
//6/1/2023

#include<stdio.h>
int main()
{
    int i,k,n;
    i=1;
    k=0;
    printf("Enter the number=");
    scanf("%d",&n);
    do
    {
        if (n%i==0)
        {
            k=k+i;
        }   
            i++;
    
    }
    while(i<n);
    {
        if (k==n)
        printf("The number is perfect");
        else
        printf("Not a perfect number");
    }
}