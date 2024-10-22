#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - print alphabet in reverse lowoercase
 *
 *
 * Return: returns 0
*/
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
	}
		return (0);
}
