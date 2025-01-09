#include "main.h"
#include <stdio.h>
/**
 * more_numbers - Prints numbers from 0 to 14, ten times.
 *
 * Description: This function prints the numbers from 0 to 14 in a sequence,
 * and this sequence is repeated 10 times. Numbers are printed in the format
 * of two digits, e.g., 09 for 9, 10, 11, ..., 14.
 *
 * Return: Nothing (void).
 */
void more_numbers(void)
{

	int i;
	int n;

	for (i = 0; i < 10; i++)
	{

		for (n = 0; n <= 14; n++)

		{

			if (n > 9)

			{

				_putchar('1');

			}
			_putchar((n % 10) + '0');

		}
		_putchar('\n');

	}

}
