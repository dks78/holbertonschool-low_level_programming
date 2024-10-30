#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * @str: check the code
 * _puts: fonction
 * Return: Always 0.
 */   


void print_rev(char *s)
{
    char M[100];
    strncpy(M, s, sizeof(M) - 1);
    M[sizeof(M) - 1] = '\0';

    reverse_str(M);

    printf("%s\n", M);
} 
