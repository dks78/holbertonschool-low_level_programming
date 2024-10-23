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
int main (void)
{
    char Affiche;
    char lettre;

    for(Affiche = '0' ; Affiche <= '9' ; Affiche++ )
    { 
        putchar(Affiche);
    }
    for(lettre = 'a' ; lettre <= 'f' ; lettre++)
    {
        putchar(lettre);
    }
    putchar('\n');
    return (0);
}