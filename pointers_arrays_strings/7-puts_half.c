
#include "main.h"
#include <stdio.h>
/**
 * main - check the code
 * @str: variable
 * puts_half : fonction
 */
void puts_half(char *str)
{

int len = 0;
int i;
int start;
while (str[len] != '\0')
{
len++;
}

start = (len % 2 == 0) ? len / 2 : (len - 1) / 2 + 1;

for (i = start; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
