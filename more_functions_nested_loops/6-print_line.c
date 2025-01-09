#include "main.h"
#include <stdio.h>
/**
 * print_line - Prints a line of underscores based on the input.
 * @n: The number of underscores to print.
 *
 * Description: This function prints a line of underscores ('_') for a given
 * number of times, which is specified by the input `n`. If `n` is less than
 * or equal to 0, the function will print nothing. If `n` is positive, the
 * function will print `n` underscores followed by a new line.
 *
 * Return: Nothing (void).
 */
void print_line(int n)
{

int i;

if (n > 0)

{

for (i = 0; i < n; i++)

{

_putchar('_');

}

}

_putchar('\n');

}

