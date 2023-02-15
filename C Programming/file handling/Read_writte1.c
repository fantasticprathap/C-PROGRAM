/*
	Name:Prathap
	Type: file handling
	Date: 06/02/23 15:05
	Description: read and write multiple string
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	char college[70],dept[100],stu[100];
	FILE*fptr;
	fptr=fopen("string.txt","w");
	if (fptr==NULL)
	{
		printf("Error!");
		exit(1);
	}
	puts("Enter the college name:");
	gets(college);
	puts("Enter the dept:");
	gets(dept);
	puts("Enter student char:");
	gets(stu);
	fprintf(fptr,"%s\n%s\n%s",college,dept,stu);
	fclose(fptr);
	fptr=fopen("string.txt","r");
	if (fptr==NULL)
	{
		printf("Error!");
		exit(1);
	}
	char ch[100];
	fgets(ch,100,fptr);
	puts(ch);
	fclose(fptr);
}
