/*
	Name:prathap
	Type:file handling 
	Date: 06/02/23 18:49
	Description: employee
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	char employee_name[50],employer_name[50];
	int employee_id;
	float employee_salary;
	char employee_lastname;
	FILE*fptr;
	fptr=fopen("Example_A.txt","a+");                //write function
	if(fptr==NULL)
	{
		printf("ERROR!");
		exit(1);
	}
	puts("Enter the employee name:");
	gets(employee_name);
	puts("Enter the employer name:");
	gets(employer_name);
	printf("Enter employee id:");
	scanf("%d",&employee_id);
	printf("Enter the employee salary:");
	scanf("%f",&employee_salary);
	getchar();
	printf("Enter the employee last name:");
	scanf("%c",&employee_lastname);
	fprintf(fptr,"%s\n%s\n%d\n%f\n%c",employee_name,employer_name,employee_id,employee_salary,employee_lastname);
	fclose(fptr);
	
	fptr=fopen("employee_info.txt","a+");
	if(fptr==NULL)
	{
		printf("ERROR!");
		exit(1);
	}	
	char ee[50],ey[50];
	int eid;
	float sa;
	char kq;
	fgets(ee,50,fptr);
	puts(ee);
	fgets(ey,50,fptr);
	puts(ey);
	fscanf(fptr,"%d",&eid);
	printf("%d\n",eid); 
	fscanf(fptr,"%f",&sa);
	printf("%f\n",sa);
    fscanf(fptr," %c",&kq);
	printf("%c",kq);
	fclose(fptr);
}
