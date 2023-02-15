/*
	Name:Prathap		
	type:file handling
	Date: 06/02/23 11:55
	writting
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int age,name[30],college[30];
	FILE*fptr;
	fptr=fopen("sample.txt","w+");
	if(fptr==NULL)
	{
		printf("Error!");
		exit(1);
	}
	printf("Enter the student name:");
	gets(name);
	printf("Enter the student age:");
	scanf("%d",&age);
	getchar();
	printf("Enter the college name:");
	gets(college);
//	fprintf(fptr,"The student name is:%s\nThe student age is:%d\nThe student college name is:%s ",name,age,college);
	fclose(fptr);
	return 0;
}
