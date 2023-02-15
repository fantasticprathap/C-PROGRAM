#include<stdio.h>  
  
#define MARKS 50  
  
int main()  
{  
    #if(MARKS <= 100 && MARKS >= 80)  
        printf("GRADE A\n");  
    #elif(MARKS <= 79 && MARKS >= 60)  
        printf("GRADE B\n");  
    #elif(MARKS <= 59 && MARKS >= 40)  
        printf("GRADE C\n");  
    #elif(MARKS <= 39 && MARKS >= 30)  
        printf("GRADE D\n");  
    #else  
        printf("Please retake the test!\n");  
    #endif // MARKS  
  
    printf("Your Result\n");  
  
    return 0;  
}
