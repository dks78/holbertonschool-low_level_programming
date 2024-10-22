#include <stdio.h>
#include <stdlib.h>
#include <time.h>

 /**
  *  main - Entry point of the program
  *
  *
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
    putchar('\n'); // Pour ajouter un retour à la ligne après l'alphabet
    return 0;
}
