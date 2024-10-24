#include "main.h"
#include <stdlib.h>
/**
 * print_last_digit - check sign.i
 * @number: integer.
 * Return: Always 0.
*/
int print_last_digit(int number)
{
	int last_digit = number % 10;

	if (last_digit < 0)

	{
		last_digit = -last_digit;
	}

	_putchar('0' + last_digit);

	return (last_digit);
}
