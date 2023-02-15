//armstrong number
//prathap
//5/1/2023

#include<stdio.h>
int main()
{
	int i,n,k,m;
	m=0;
	printf("Enter the 3 digit 0r 4 digit number=");
	scanf("%d",&n);
	if ((n>100)&&(n<999))
	{
	for (i=n;i>0;i/=10)
	{
		k=i%10;
		m=m+(k*k*k);
	}
	if (m==n)
	{
		printf("%d number is armstrong number=",m);
	}
	else
	{
		printf("%d Not an armstrong number",m);
	}
}
    if ((n>1000)&&(n<9999))
    {
     for (i=n;i>0;i/=10)
	 {
	 	k=i%10;
	 	m=m+(k*k*k*k);
	 }
	 if(m==n)
	 {
	 	printf("%d is armstrong number",m);
		 }	
		 else
		 {
		 	printf("%d is not armstrong number",m);
		 }
	}
}

