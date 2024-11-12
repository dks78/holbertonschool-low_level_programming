#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
  
Écrivez une fonction qui crée un tableau de caractères et l'initialise avec un caractère spécifique.

Prototype : char *create_array(unsigned int size, char c);
Retourne NULL si size = 0
Retourne un pointeur vers le tableau ou NULL en cas d'échec
 * Return: Nothing.
 */
int main(void)
{
    char *s;

    s = _strdup("Duplicated");
    if (s == NULL)
    {
        printf("failed to allocate memory\n");
        return (1);
    }
    printf("%s\n", s);
    free(s);
    return (0);
}