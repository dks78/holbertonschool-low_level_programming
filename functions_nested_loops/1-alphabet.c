#include "main.h"
/**
 * print_alphabet - Prints the alphabet in lowercase followed by a newline
 *
 * Return: Nothing (void)
*/
void print_alphabet(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
_putchar(letter);
}
_putchar('\n');
}
