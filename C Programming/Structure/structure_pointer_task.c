/*
	Name:Prathap
	Type:structure
	Date: 04/02/23 18:40
	Description:structure pointer task
*/
#include<stdio.h>
struct vcet
{
	char student_name[30];
	int student_age;
	int roll_no;
	char male[30];
}s[5],*p[5];
void main()
{
	int i,n;
	for (i=0;i<5;i++)
	{
		puts("\nEnter the student name:");
		gets(s[i].student_name);
		puts("\nEnter the student age:");
		scanf("%d",&s[i].student_age);
		puts("\nEnter the roll number:");
		scanf("%d",&s[i].roll_no);
		getchar();
		puts("\nEnter the student sex:");
		gets(s[i].male);
		p[i]=&s[i];
	}
	label:
	puts("\nWhat student details you want:");
	scanf("%d",&n);
	if((n>=0)&&(n<5))
	{
		for(i=n;i==n;i++)
		{
			printf("\nStudent name is          :%s",p[i]->student_name);    //  (*P[i]).==p[i]->  student name 2method
			printf("\nStudent age is           :%d",p[i]->student_age);
			printf("\nStudent roll number is   :%d",p[i]->roll_no);
			printf("\nStudent sex is           :%s",p[i]->male);
		}
	}
	else
	{
		puts("\nYour enter student id is wrong\nEnter correct id:");
		goto label;
	}
}
