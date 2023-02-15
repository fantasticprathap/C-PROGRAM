/*
	Name:prathap 
	type:function 
	Date: 25/01/23 07:47
	Description: Merging function
*/

#include<stdio.h>
void add();                                    // without return without argument
void sub(int []);                              // without return with argument
int mul();                                     // with return without argument
int div(int []);                               // with return with argument
int main()
{
	int operation;
	label:
	printf("\nEnter the operation\n 1.Addtion 2.Subraction 3.Multiply 4.division\n press 5 or above Exit:");
	scanf("%d",&operation);
	switch (operation)
	{
		case 1:
		label1:	
		add();                                 //calling function
		int z;
		printf("\nPress 1 to condinue addtion press 0 to return to mainmanu:");
		scanf("%d",&z);
		if(z==1)
		{
		goto label1;
	    }
	    system("cls");
	    goto label;                          //jump statement
	    system("cls");
	    break;
		case 2:
			label2:
		    printf("How many number to sub=");
		    int a[10],i,n;
		    scanf("%d",&n);
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
		    goto label;
		    system("cls");
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
			goto label;
		    break;
		    system("cls");
		case 4:
			label4:
			printf("\nHow many number to division:"); 
			int b[10],j,m,g;
			scanf("%d",&m);
			for (j=0;j<m;j++)
			scanf("%d",&b[j]);
			printf("%d",div(b));      
			printf("\npress 1 to continue mul or press 0 to mainmanu:");
			scanf("%d",&g);
			if(g==1)
			{
				goto label4;
			}
			goto label; 
			system("cls");            
			break;
    }
}
void add()                                       //  function declaration
{
	int i,n,c[10],res;
	printf("\nEnter how many number to add:");
	scanf("%d",&n);
	res=0;
	for(i=0;i<n;i++)
	scanf("%d",&c[i]);
	for (i=0;i<n;i++)
	res=res+c[i];
	printf("%d",res);
}
void sub(int a[])                                    //function declaration
{
	int d[10],i,n,res;
	printf("how many number to sub:");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	d[i]=a[i];
	res=d[0];
	for (i=1;i<n;i++)
	res=res-d[i];
	printf("%d",res);
}
int mul()                                              //function declaration
{
	int i,res,e[10],n;
	printf("How many number to mul:");
	scanf("%d",&n);
	res=1;
	for (i=0;i<n;i++)
	{
	scanf("%d",&e[i]);
	res=res*e[i];
    }
	return res;                                         //return 
}
int div(int b[])                                        //function declaration
{
	int i,res,f[10],l;
	printf("how many to divide:");
	scanf("%d",&l);
	for (i=0;i<l;i++)
	f[i]=b[i];
	res=f[0];
	for (i=1;i<l;i++)
	res=res/f[i];
	return res;                                        //return
}
