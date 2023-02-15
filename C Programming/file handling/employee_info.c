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
	char employee_name[50],employer_name[50],location[50];
	int employee_id;
	float employee_salary;
	char employee_lastname;
	FILE*fptr;
	fptr=fopen("D:\\manfree\\file handling\\employee.txt","w");                //write function
	if(fptr==NULL)
	{
		printf("ERROR!");
		exit(1);
	}
	puts("Enter the employee name:");
	gets(employee_name);
	printf("Enter the employee salary:");
	scanf("%f",&employee_salary);
	getchar();
	puts("Enter the employer name:");
	gets(employer_name);
	printf("Enter employee id:");
	scanf("%d",&employee_id);
	getchar();
	puts("Enter the office location:");
	gets(location);
	printf("Enter the employee last name:");
	scanf("%c",&employee_lastname);
	fprintf(fptr,"%s\n%f\n%s\n%d\n%s\n%c",employee_name,employee_salary,employer_name,employee_id,location,employee_lastname);
	fclose(fptr);
	
	fptr=fopen("D:\\manfree\\file handling\\employee.txt","r");                //reading function
	if(fptr==NULL)
	{
		printf("ERROR!");
		exit(1);
	}	
	char ee[50],ey[50],jk[50];
	int eid;
	float sa;
	char kq;
	fgets(ee,50,fptr);
	puts(ee);
	fscanf(fptr,"%f",&sa);
	printf("%f\n",sa);
	fputc(ey,fptr);
	fgets(ey,50,fptr);
	puts(ey);
	fscanf(fptr,"%d",&eid);
	printf("%d\n",eid); 
    fputc(jk,fptr);
	fgets(jk,50,fptr);
	puts(jk);
    fscanf(fptr," %c",&kq);
	printf("%c",kq);
	fclose(fptr);
}
