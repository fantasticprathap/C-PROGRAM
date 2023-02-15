//arm strong number
//prathap
//6/1/2023
#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,sum,digit,copy;
digit=0;
sum=0;
printf("Enter the number=");
scanf("%d",&n);
copy=n;
for (i=n;i>0;i/=10)
{
    digit++;
}
printf("%d",digit);
while (n>0)
{
    sum=sum+pow(n%10,digit);
    n/=10;
}
if (sum==copy)
printf("arm");
else
printf("Not arm %d",sum);
}

