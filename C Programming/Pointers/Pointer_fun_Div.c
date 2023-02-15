/*
	Name: Prathap
	Type:Pointer 
	Date: 30/01/23 14:31
	Description:pointer divison 
*/
#include<stdio.h> 
float divison (float a, float b) 
{    
    float k;
    k=a/b;
    return k;
}  
int main() 
{    
    float (*xy)(float ,float)=divison;    
    float result = xy(9.5, 4.5);  
    printf(" Using function pointer we get the result: %f", result);  
  //  return 0; 
} 
