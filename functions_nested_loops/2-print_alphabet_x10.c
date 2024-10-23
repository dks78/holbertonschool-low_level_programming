#include "main.h"
/**
 * print_alphabet - Prints the alphabet in lowercase followed by a newline
 *
 * Return: Nothing (void)
*/
void print_alphabet_x10(void)
{
int i;
char lettre;

for (i = 0 ; i < 10 ; i++)
{
for(lettre = 'a'; lettre <= 'z'; lettre++)
{
_putchar(lettre);
}
_putchar('\n');
}
}