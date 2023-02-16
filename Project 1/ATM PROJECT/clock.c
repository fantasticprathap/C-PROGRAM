#include<stdio.h>
#include<time.h>
#include"clock.h"
int date()
{
	time_t t;
	time(&t);
	printf(" \n                                                                                       %s",ctime(&t));
}
