#include<stdio.h>
#include<time.h>
#include"step2.h"
int date()
{
	time_t t;
	time(&t);
	printf(" \n                                                                                       %s",ctime(&t));
}
