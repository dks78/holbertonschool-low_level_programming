#include "main.h"
#include <stdio.h>
 /**
 *
 * more_numbers - Prints numbers from 0 to 9, excluding 2 and 4.
 * n: charactere
 * Return: Nothing (void)
 */

void print_line(int n)
{ 
    int i;
    if (n > 0) { 
        for (i = 0; i < n; i++) {
            _putchar('_');
        }
    }
    _putchar('\n');
}