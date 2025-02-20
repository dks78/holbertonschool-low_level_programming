#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns pointer to a newly allocated space in memory which
 * contains a copy of the string given as a parameter
 * @str: string
 * Return: pointer to allocated space in memory or NULL if str = NULL
 */
char *_strdup(char *str)
{
	char *ar;
	int i;
	int len;

	if (str == NULL)
		return (NULL);

	len = _strlen(str);

	ar = malloc((len * sizeof(char)) + 1);

	if (ar == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		ar[i] = str[i];
	}
	ar[i] = '\0';

	return (ar);
}

/**
 * _strlen - returns the length of a string
 * @s: string to be evaluated
 * Return: length of string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
