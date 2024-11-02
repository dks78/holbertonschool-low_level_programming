
#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * main - check the code
 *
 * Return: Always 0.
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
