#include "main.h"
#include <stdio.h>
 /**
 *
 * print_diagonal : Prints numbers from 0 to 9, excluding 2 and 4.
 * n: charactere
 * Return: Nothing (void)
 */
void print_diagonal(int n)
{

int i;
int j;

if (n <= 0)
{
_putchar('\n');

}
else
{
for (i = 0; i < n; i++)

{
for (j = 0; j < i; j++)
{

_putchar(' ');

}

_putchar('\\');

_putchar('\n');

}
}

}
