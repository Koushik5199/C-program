/* Vowels using switch Case*/

#include <stdio.h>
int main () 
{
    
    char c;
    printf(" Enter the charachter: \n");
    scanf("%c",&c);
    
    switch (c)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("The charachter is a Vowel");
        break;
        
        default:
            printf(" Ther charachter is a consonant");
    }
    
return 0;
    
    
}


