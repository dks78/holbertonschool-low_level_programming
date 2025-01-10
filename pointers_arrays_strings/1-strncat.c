
#include "main.h"
#include <stdio.h>
/**
 * _strncat - Concatenates two strings,racters
 *            from the source string to the destinag.
 * @dest: The destination string to which the sourwill be appended.
 * @src: The source string to be appended.
 * @n: The maximum number of characters to appm the source string.
 *
 * Return: A pointer to the resulting destiing (dest).
 */
char *_strncat(char *dest, char *src, int n)
{

char *ptr = dest;
while (*ptr != '\0')
{
ptr++;
}
while (n > 0 && *src != '\0')
{
*ptr = *src;
ptr++;
src++;
n--;
}

*ptr = '\0';

return (dest);

}
