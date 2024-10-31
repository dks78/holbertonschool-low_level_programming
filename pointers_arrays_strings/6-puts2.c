#include "main.h"
#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
void puts2(char *str) {
    int len = 0;
    int i;
    int start;
    
    while (str[len] != '\0') {
        len++;
    }

    if (len % 2 == 0) {
        start = len / 2;
    } else {
        start = (len - 1) / 2 + 1;
    }

    for (i = str; str[i] != '\0'; i+=2) {
        _putchar(str[i]);
    }
    _putchar('\n');
}
