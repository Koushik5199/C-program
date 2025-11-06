/* 
write a c program to perform the reverse case of the string.
#include<ctype.h> // to use system defined function islower & toupper
*/

#include <stdio.h>
#include<ctype.h>

int main ()
{
    char alphabet;
    printf(" Read the Alphabet \n");

    alphabet = getchar();
    
    if (islower(alphabet))
    {
        putchar(toupper(alphabet));
    }
    
    else
    {
        putchar(tolower(alphabet));    
    }
    

return 0;
    

}

