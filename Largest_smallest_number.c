/*
Largest and smallest number using global declaration.
*/
int a,b;
#include <stdio.h>

int main ()
{
    printf("Read the values as input");
    printf("\n Read the value of a and b: \n");
    scanf("%d %d",&a,&b);
    printf(" The Value of a is %d and the value of b is %d \n",a,b);
    
    if (a > b)
    {
        printf("a is larger \n");
    }
    
    else if (a < b)
    {
        printf("b is larger \n");
    }
    
    else 
    {
        printf("both are equal \n");
    }
return 0;
}