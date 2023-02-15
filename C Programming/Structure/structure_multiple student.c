/*
	Name:Prathap  
	Type: structure
	Date: 02/02/23 10:53
	Description: structure program 3
*/
#include<stdio.h> 
struct college
{
	char student_name[30];
	int student_age;
	char mother_name[30];
};
void main()
{
	int i;
	struct college student[2];
	for (i=0;i<2;i++)
	{
	printf("\nEnter the student name=");
	gets(student[i].student_name);
	printf("\nEnter student age=");
	scanf("%d",&student[i].student_age);
	getchar();
	printf("\nEnter student mother name=");
	gets(student[i].mother_name);
//	printf("\nThe student name is %s",student[i].student_name);
//	printf("\nThe student age is  %d",student[i].student_age);
//	printf("\nThe student Mother name is %s",student[i].mother_name);
   }
   system("cls");
   printf("\nWhat student details you want=");	
    scanf("%d",&i);
   	printf("\nThe student name is %s",student[i].student_name);
	printf("\nThe student age is  %d",student[i].student_age);
	printf("\nThe student Mother name is %s",student[i].mother_name);
}

