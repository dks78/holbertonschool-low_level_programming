#include "main.h"
#include <stdio.h>
/**
 * print_diagonal - Prints a diagonal line of backslashes.
 * @n: The number of lines in the diagonal.
 * Description: This function prints a diagonal line made of backs('\').
 * Each liis preceded by spaces, and the total number of lines printed is
 * equal to tnput value `n`. If `n` is less than equal to 0, the function
 * will print nothing but a new lin
 *
 * Return: Nothing (void).
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
