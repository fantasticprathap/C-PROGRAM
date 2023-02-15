// goto keyword
//6/1/2023
//prathap

#include<stdio.h>
int main()
{
    int a,b,i;
    i=0;
    printf("Enter the two numbers=");
    scanf("%d%d",&a,&b);
    label:
    a=a+b;
    if(i<3)
    {
        i++;
        goto label;
    }
    a=a*b;
    printf("The resut is %d",a);
}