//do while prime
//prathap
//6/1/2023

#include<stdio.h>
int main()
{
    int i,n,prime=1;
    i=2;
    printf("Enter the number=");
    scanf("%d",&n);
    do
    {
        if (n%i==0)
        prime=0;
        i++;
    }
    while(i<n);
    {
       if (n==1)
       {
        printf("The number is prime");
       }
       else
       {
        if (prime==1)
        {
            printf("The number is prime");
        }
        else
        {
            printf("Not a prime");
        }
       }
    }
}