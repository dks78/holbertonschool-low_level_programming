#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_diagsums(int *a, int size)
{
   int sum1 = 0, sum2 = 0;
    int i;

    for (i = 0; i < size; i++) {
        sum1 += a[i * size + i];
    }
       for ( i = 0; i < size; i++) {
        sum2 += a[i * size + (size - i - 1)];
    }


    printf("%d, %d\n", sum1, sum2);
}



