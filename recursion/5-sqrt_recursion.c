#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int _sqrt_recursion(int n)
{
int i;
for( i = 0 ; i < n ; i ++)
 
        {
        if( i * i == n)
 
            {
                n = i;
            }
 
        }
    return n;
}
