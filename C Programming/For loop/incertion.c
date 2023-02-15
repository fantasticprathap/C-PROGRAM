//array in insertion
//prathap

#include<stdio.h>
int main()
{
    int element,position,num[100],n,i;
    printf("enter your number=");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    printf("Enter your element value and position=");
    scanf("%d%d",&element,&position);
    position=position-1;
    for (i=n-1;i>=position;i--)
    {
        num[i+1]=num[i];
    }
     num[position]=element;
   // printf("%d %d %d",element,position,num[i-position]);
     for (i=0;i<=n;i++)
    {
        printf("%d\n",num[i]);
    }
}
