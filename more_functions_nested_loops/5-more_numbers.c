#include "main.h"
#include <stdio.h>
 /**
 *
 *  print_most_numbers - Prints numbers from 0 to 9, excluding 2 and 4.
 *  n: charactere
 *  Return: Nothing (void)
 */
 void more_numbers(void) {
    int i;
    int n;
    for (i = 0; i < 10; i++) {
        for ( n = 0; n <= 14; n++) {
            if (n > 9) {
                _putchar('1');
            }
            _putchar((n % 10) + '0');
        }
        _putchar('\n');
    }
}