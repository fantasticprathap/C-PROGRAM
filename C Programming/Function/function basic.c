/*
	Name:prathap
	Date: 23/01/23 11:26
	Description: functions basic
*/

/*#include<stdio.h>
int fun(int,int);           //function with parameter   declaration
int fun1(inty,intx)         //function 1 with argument
{
	return (inty-intx);    //return function
}
int main()
{
	int result,c,result1;        // declaration
	result=fun(5,6);         //calling and holding the data
	printf("%d\n",result);
	result1=fun1(8,5);
	printf("%d\n",result1);
}

int fun(intx,inty)
{
	int c=0;
	c=intx+inty;
	return c;
}*/
/*#include<stdio.h>
int main()
{
    //printf("%d",'a');
    printf(" %c",65);
}*/


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
int n();
int a();
int main()
{
	int i,n,operation,tem;
//	int a[i];
	printf("Enter the operation\n 1.Addition 2.Subtraction 3.Multiplt 4.Division 5.Module =");
	scanf("%d",&operation);
switch(operation)                        //switch case
  {
	case 1:
	//	add();
		tem=add();
		printf("%d",tem);
		break;
	case 2:
		printf("%d",sub());
		break;
	case 3:
	    printf("%d",mul());
	    break;
	case 4:
	    printf("%d",div());
	    break;
	case 5:
	    printf("%d",mod());	
		break;
	default:
	    printf("only enter below five");		   	
  }
}
int n()
{
	int n;
	printf("how many number=");
	scanf("%d",&n);
    return n;
}
int a()
{
	int aa[100],i;
	int num=n();
	for(i=0;i<num;i++)
	{
		scanf("%d",&aa[i]);
	}
	int res=aa[0];
    return aa[0];
}
int add()
{
	
    int num=n();
    int res,i,aa[10];
    int jon[10];
    jon[0]=a();
	for(i=1;i<num;i++)
	{
		res=res+aa[i];
	}
	return res;
}


