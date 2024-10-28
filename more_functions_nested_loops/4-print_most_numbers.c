#include "main.h"
 /**
 *
 *  print_most_numbers - Prints numbers from 0 to 9, excluding 2 and 4.
 *  n: charactere
 *  Return: Nothing (void)
 */
void print_most_numbers(void)
{
char n;

for (n = '0' ; n <= '9' ; n++)

if (n != '2' && n != '4')

_putchar(n);

_putchar('\n');

}

