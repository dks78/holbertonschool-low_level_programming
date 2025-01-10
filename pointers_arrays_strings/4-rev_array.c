#include "main.h"
#include <stdio.h>

/**
 * reverse_array - Reverses an array of integers.
 * @a: Pointer to an array of integers.
 * @n: Total number of elements in the array.
 *
 * Return: Nothing.
 */
void reverse_array(int *a, int n)
{
	int temp;
	int i;

for (i = 0; i < n / 2; i++)

{
temp = a[i];
a[i] = a[n - 1 - i];
a[n - 1 - i] = temp;
}
}
