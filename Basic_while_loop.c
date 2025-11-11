/*
Basic while loop, 
Intialisation, condition , updation
checks condition at the start of the loop.
*/

#include<stdio.h>
int main()
{
    
int num =0; //initialization

while(num < 5) //condition
{
    num= num+1; //updation
 printf("%d is greater than limit, exiting the loop \n ",num);
}

return 0;

}

