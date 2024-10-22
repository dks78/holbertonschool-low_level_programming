#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point of the program
 *
 * Description: This function prints a specific string
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)

	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
