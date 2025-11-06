/*
Swapping of two numbers in c.
*/

#include<stdio.h>

int main ()
{
   int a =106;
   int b = 50;
    
    a =a+b;
   // printf("a = %d  \n",a);
    b =a-b;
    printf("b = %d \n",b);
    a =a-b;
    printf("a= %d \n",a);
    
return 0;
}