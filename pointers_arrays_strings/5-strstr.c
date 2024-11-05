#include "main.h"
#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
char *_strstr(char *haystack, char *needle)
{
                 
    int i,j;

    for (i = 0;  i < haystack[i]; i++){
    for(j = 0; j < needle[j]; i++ )
        if(needle[j] == haystack[i]){
            return needle;
        }
    }
    return NULL;
}