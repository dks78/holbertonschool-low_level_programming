#include "main.h"

/**
 *  Return: 1 if c is lowercase, 0 otherwise
 * _islower - checks if a character is lowercase
 *  @c: The character to be checked
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
