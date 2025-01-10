#include <stdio.h>
#include "main.h"
#include <stdio.h>

/**
 * leet - Converts certain letters in a string to leet speak.
 * @str: The input string to convert.
 *
 * Return: The converted string.
 */
char *leet(char *str)
{
	char *leet_chars = "43071";
	char *original_chars = "aeotl";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; original_chars[j] != '\0'; j++)
		{
			if (str[i] == original_chars[j] || str[i] == original_chars[j] - 32)
			{
				str[i] = leet_chars[j];
				break;
			}
		}
	}
	return (str);
}
