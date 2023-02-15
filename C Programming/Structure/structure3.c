/*
	Name:Prathap  
	Type: structure
	Date: 02/02/23 10:53
	Description: structure program 2
*/
#include<stdio.h> 
struct college
{
	char student_name[30];
	int student_age;
}student1,student2;
void main()
{
	printf("Enter the student name=");
	gets(student1.student_name);
	printf("Enter student age=");
	scanf("%d",&student1.student_age);
	printf("\nThe student name is %s",student1.student_name);
	printf("\nThe student age is  %d",student1.student_age);
	printf("\nEnter the student name=");
	getchar();
	gets(student2.student_name);
	printf("\nEnter student age=");
	scanf("%d",&student2.student_age);
	printf("\nThe student name is %s",student2.student_name);
	printf("\nThe student age is  %d",student2.student_age);
}

