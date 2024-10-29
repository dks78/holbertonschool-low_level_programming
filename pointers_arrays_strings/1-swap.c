#include "main.h"
#include <stdio.h>

/**
 * swap_int - check the code
 *
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{   
    int temps;
    temps = *a;
    *a = *b;
    *b = temps;
}