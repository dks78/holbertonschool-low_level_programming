#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 * _strcat : fonction
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
char *ptr = dest;

while (*ptr != '\0')
{
ptr++;
}
while (*src != '\0')
{
*ptr = *src;
ptr++;
src++;
}
*ptr = '\0';
return (dest);
}
