
#include "main.h"
#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
void puts_half(char *str){

 int i;
    for (i = 5; str[i] != '\0'; i ++) {
        _putchar(str[i]);
    }
    _putchar('\n');
}