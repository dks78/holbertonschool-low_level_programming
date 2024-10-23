#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - print to variable 
 *
 *
 * Return: 0 Always (Success)
 *
 *
*/
int main(void)
{
	int i;
	for( i = 0 ; i < 10 ; i++)
	{
		putchar(i + '0');

	}
	putchar('\n');
	
	return (0);
}
