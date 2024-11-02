#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 * @dest - varibale
 * Return: Always 0.
*/
char *_strncpy(char *dest, char *src, int n)
{
int i;

    for (i = 0; i < n && src[i] != '\0'; i++)
    {
        dest[i] = src[i];
    }

    for (; i < n; i++)
    {
        dest[i] = '\0';
    }

    return (dest);
}
