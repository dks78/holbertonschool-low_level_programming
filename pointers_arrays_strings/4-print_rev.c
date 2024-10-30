#include "main.h"
#include <stdio.h>

/**
 * @str: check the code
 * _puts: fonction
 * Return: Always 0.
 */
void print_rev(char *s)
{
int  length = 0;

while (s[length] != '\0')

{
length++;

}
for (length -= 1; length >= 0; length--)
{
_putchar(s[length]);
}
_putchar('\n');
}

