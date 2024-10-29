#include "main.h"
#include <stdio.h>

/**
 * _strlen - check the code
 * @s : var
 * Return: Always 0.
 */
int _strlen(char *s)
{

int len = 0;

while (s[len] != '\0')
{
len++;
}
return (len);
}
