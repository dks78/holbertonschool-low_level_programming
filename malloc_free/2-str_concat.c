#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *str_concat(char *s1, char *s2)
{
    int longeur = 0;
    int longuer2 = 0;
    char *result;
    int i;
    if(s1 == NULL)
    {
        return NULL;
    }

    while (s1[longeur ] != '\0') 
    {
        longeur ++;
    }


    while (s2[longuer2] != '\0') 
    {
        longuer2++;
    }

   result = malloc((longeur + longuer2 + 1) * sizeof(char));
    if(result == NULL)
    {
        return NULL;
    }
    
    for ( i = 0; i < longeur ; i++)
    {
        result[i] = s1[i];
    }
    for (i = 0; i < longuer2; i++)
    {
        result[longeur + i] = s2[i];
    }


    result[longeur  + longuer2] = '\0';


    return result;
}