
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
	int result = strcmp(s1, s2);

	if (result == 0) 
	{
		return 0;
    } 
		else if (result < 0) 
	{
		return -15;
   	} 
   	else 
   	{
		return 15;
	}
}
