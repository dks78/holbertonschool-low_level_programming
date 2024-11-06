#include "main.h"
#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
void _print_rev_recursion(char *s){
    int i;
    int len = 0;
    while (s[len] != '\0')
    {
        len++;
    }

    for (i = len - 1; i >= 0; i--)
    {
        _putchar(s[i]);
    }
    _putchar(*s);

}
