/*
	Name: prathap
	Date: 23/01/23 14:39
	Description: function arithmetic operation using swith case method
*/

#include<stdio.h>
int add();     //with return without argument
int sub();
int mul();
int div();
int mod();
int main()
{
	int i,n,operation,tem;
//	int a[i];
    label:
	printf("\nEnter the operation\n 1.Addition 2.Subtraction 3.Multiply 4.Division 5.Module =");
	scanf("%d",&operation);
switch(operation)                        //switch case
  {
	case 1:
	//	add();
		tem=add();
		printf("\n%d",tem);
		goto label;
		break;
	case 2:
		printf("\n%d",sub());
			goto label;
		break;
	case 3:
	    printf("\n%d",mul());
	    	goto label;
	    break;
	case 4:
	    printf("\n%d",div());
	    	goto label;
	    break;
	case 5:
	    printf("\n%d",mod());	
	    	goto label;
		break;
	default:
	    printf("\nonly enter below five");	
		//	goto label;	   	
  }
}
int add()
{
	int res,i,n, a[10];
	printf("how many number=");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	res=a[0];
	for (i=1;i<n;i++)
	{
		res=res+a[i];
	}
	return res;
}
int sub()
{
	int diff,i,n,a[10];
	printf("how many number=");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
        scanf("%d",&a[i]);
	}
    diff=a[0];
    for(i=1;i<n;i++)
    {
        diff=diff-a[i];
    }
	 return diff;	
}
int mul()    	
{
	int res,i,n,a[10];
	res=1;
	printf("how many number=");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		res=a[i]*res;
	}
	return res;	
}
int div()
{
	int res,i,n,a[10];
	printf("how many number=");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	res=a[0];
	for (i=1;i<n;i++)
	{
		res=res/a[i];
	}
	return res;	
}
int mod()
{
	int res,i,n,a[10];
	printf("how many number=");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	res=a[0];
	for(i=1;i<n;i++)
	{
		res=res%a[i];
	}
	return res;	
}
