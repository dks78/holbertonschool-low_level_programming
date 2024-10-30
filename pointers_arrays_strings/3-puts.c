#include "main.h"
#include <stdio.h>
/**
 * @str: check the code
 * _puts: fonction
 * Return: Always 0.
 */
void _puts(char *str)
{

while (*str != '\0')
{
_putchar(*str);

str++;

}

_putchar('\n');

}
