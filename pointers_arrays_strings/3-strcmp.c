
#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strcmp - compare two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: difference between the first unmatched characters,
 *         or 0 if both strings are equal.
 */
int _strcmp(char *s1, char *s2)
	{
	while (*s1 && *s2)
	{
	if (*s1 != *s2)
	{
	return (*s1 - *s2);
	}
	s1++;
	s2++;
	}

	return (*s1 - *s2);

}
