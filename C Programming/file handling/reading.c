/*
	Name:Prathap		
	type:file handling
	Date: 06/02/23 11:55
	reading
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int   age,name;
	FILE*fptr;
	fptr=fopen("age.txt.txt","w");
	if(fptr==NULL)
	{
		printf("Error!");
		exit(1);
	}
	fscanf(fptr,"%c",&name);
	printf("%c",name);
	fscanf(fptr,"%d",&age);
	printf("%d",age);
	fclose(fptr);
	return 0;
}
