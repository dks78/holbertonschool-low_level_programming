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
    char  lettre;

    for ( lettre = 'z' ; lettre >= 'a' ; lettre--)
    {
        putchar(lettre);
    } 
    putchar('\n');
    return 0;
}