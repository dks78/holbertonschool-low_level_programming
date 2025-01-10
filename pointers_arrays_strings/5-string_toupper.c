#include "main.h"
#include <stdio.h>

/**
 * string_toupper - Convert all lowercase letters in a string to uppercase.
 * @str: Pointer to the string to be converted.
 *
 * Return: Pointer to the converted string.
 */
char *string_toupper(char *str)
{

int i = 0;
while (str[i] != '\0')
{

if (str[i]  >= 97 &&  str[i] <= 122)
str[i] = str[i] - 32;
i++;
}
return (str);
}
