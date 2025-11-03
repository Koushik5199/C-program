/*
Write a simple program to take direct input from user for different data types
and print the corresponding values.
*/

#include <stdio.h>

int main ()
{
    int int_value;
    char char_name;
    float float_value;
    double double_value;
    
    printf("Read the int_value: \n");
    scanf(" %d", &int_value);
    
    printf("Read the char_name: \n"); // char_name as a single charachter
    scanf(" %c", &char_name);
    
    printf("Read the char_name: \n"); // char_name as a string
    scanf(" %s", &char_name);
    
    printf("Read the Float_Value: \n");
    scanf("%f",&float_value);
    
    printf("Read the double_value: \n");
    scanf(" %lf",&double_value);
    
    printf("Displaying all the values of %d, %c, %f,%lf",int_value,char_name,float_value,double_value);
    
return 0;
}
