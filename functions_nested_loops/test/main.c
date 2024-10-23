#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main(void) 
{ 
    int i;
    char lettre;

    for (i = 0 ; i < 10 ; i++)
    {
         for(lettre = 'a'; lettre <= 'z'; lettre++)
         {
            putchar(lettre);
         }
          putchar('\n');
    }
   
    return (0);
}