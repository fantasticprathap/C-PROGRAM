/*
	Name: prathap
	Date: 23/01/23 14:39
	Description: function arithmetic operation using swith case method
*/

/*#include<stdio.h>
void add();                  //without return without argument
void sub(int);           //without return with argument
int mul();                   //with return with argument
int div(int);            //with return without argument
int main()
{
	int i,n,operation,tem;
    label:
	printf("\nEnter the operation\n 1.Addition 2.Subtraction 3.Multiply 4.Division  =");
	scanf("%d",&operation);
switch(operation)                        //switch case
  {
	case 1:
		add();
	//	goto label;
		break;
  }
}
void add()                        //without return without argument
{
	int res,i,n,n1,a[10];
	{	
	printf("\nhow many number=");
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
	printf("%d",res);
    }
    printf("press 1 to continue");
		scanf("%d",&n1);
	 
}
*/
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
/*
	Name:prathap 
	type:function 
	Date: 25/01/23 07:47
	Description: Merging function
*/

/*
	Name:prathap 
	type:function 
	Date: 25/01/23 07:47
	Description: Merging function
*/

 /*#include<stdio.h>
void add();
void sub(int []);
int mul();
int div(int []);
int n;
int main()
{
	int operation;
	label:
	printf("\nEnter the operation\n 1.Addtion 2.Subraction 3.Multiply 4.division\n press 5 or above Exit:");
	scanf("%d",&operation);
	printf("how many number you need:");
	scanf("%d",&n);
	int a[10],i,o,g;
	switch (operation)
	{
		case 1:
		label1:	
		add();
		int z;
		printf("\nPress 1 to condinue addtion press 0 to return to mainmanu:");
		scanf("%d",&z);
		if(z==1)
		{
		goto label1;
	    }
	    system("cls");
	    goto label;
	    break;
		case 2:	
			label2:
		    for (i=0;i<n;i++)
		    scanf("%d",&a[i]);
		    sub(a);
		    int y;
		    printf("\nPress 1 to continue subraction press 0 to mainmanu:");
		    scanf("%d",&y);
		    if(y==1)
		    {
		    	goto label2;
			}
			system("cls");
		    goto label;
		    break;
		case 3:
			label3:
		    printf("%d",mul());
		    int o;
		    printf("\nPress 1 to continue mul or press 0 to mainmanu:");
		    scanf("%d",&o);
		    if(o==1)
		    {
		     goto label3;
			}
			system("cls");
			goto label;
		    break;
		case 4:
			label4:
			for (i=0;i<n;i++)
			scanf("%d",&a[i]);
			printf("%d",div(a));      
			printf("\npress 1 to continue mul or press 0 to mainmanu:");
			scanf("%d",&g);
			if(g==1)
			{
				goto label4;
			}
			system("cls");
			goto label;           
			break;
    }
}
void add()
{
	int i,c[10],res;
	res=0;
	for(i=0;i<n;i++)
	scanf("%d",&c[i]);
	for (i=0;i<n;i++)
	res=res+c[i];
	printf("\n%d",res);
}
void sub(int q[])
{
	int d[10],i,res;
	res=q[0];
	for (i=1;i<n;i++)
	res=res-q[i];
	printf("\n%d",res);
}
int mul()
{
	int i,res,e[10];
	res=1;
	for (i=0;i<n;i++)
	{
	scanf("%d",&e[i]);
	res=res*e[i];
    }
	return res;
}
int div(int b[])
{
	int i,res,f[10];
	res=b[0];
	for (i=1;i<n;i++)
	res=res/b[i];
	return res;
}*/

#include<stdio.h>
int main()
{
   int n=3;
   while(n==2)
   {
  	label:
   	printf("hai");
   	n++;
   }
    goto label;
}


