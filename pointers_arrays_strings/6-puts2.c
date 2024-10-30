#include "main.h"
#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
void puts2(char *str) {
    while (*str) {
        _putchar(*str);
        str += 2;
    }
    _putchar('\n');
}