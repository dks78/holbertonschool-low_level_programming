#include "main.h"
#include <stdio.h>
/**
 * main - check the code for
 * @a - variable
 * @b - variable
 * Return: Always 0.
 * print_array : fonction
 */
void print_array(int *a, int n)
{
int i;

for (i = 0; i < n ; i++)

{
printf("%d", a[i]);

if (i < n - 1)

{

printf(", ");
}
}
printf("\n");
}
