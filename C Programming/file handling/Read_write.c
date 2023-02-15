/*
	Name:prathap  
	type:file handling
	Date: 06/02/23 14:37
	Description: Read and writing
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	char name[50],college[100];
	int age;
	FILE*fptr;
	char man[100],men[100];
	puts("Enter the user name:");
	gets(man);
	char ar[20]=".txt";
	sprintf(men,"%s%s",man,ar);
	fptr=fopen(men,"w");
	if(fptr==NULL)
	{
		printf("Error!");
		exit(1);
	}
	printf("Enter the student name:");
	getchar();
	gets(name);
	printf("Enter the student age:");
	scanf("%d",&age);
	getchar();
	printf("Enter the college name:");
	gets(college);
	fprintf(fptr,"The student name is:%s\nThe student age is:%d\nThe student college name is:%s ",name,age,college);
	fclose(fptr);	
}
