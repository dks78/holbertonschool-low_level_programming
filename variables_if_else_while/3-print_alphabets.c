#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - print alphabet in reverse lowerse
 *
 * Return: returns 0
 *
*/
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	for (c = 'A'; c <= 'Z'; c++)
	{
		putchar(c);
	}
		putchar('\n');

	return (0);
}
