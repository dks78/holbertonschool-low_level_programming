#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: minimum value of integer
 * @max: maximum value of integer
 * Return: pointer to array or NULL if malloc fails or min > max
 */
int *array_range(int min, int max)
{
int size;
int i;
int *array;

if (min > max)
{
return (NULL);
}
size = max - min + 1;

array = malloc(size *sizeof(int));

if (array == NULL)
{
return (NULL);
}

for (i = 0; i < size; i++)
{
array[i] = min + i;
}
return (array);
}
