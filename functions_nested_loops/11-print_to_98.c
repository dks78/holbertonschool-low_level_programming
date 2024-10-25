#include "main.h"
#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_to_98(int n) {
    int i;
    if (n < 98) {
        for (i = n; i <= 98; i++) {
            if (i < 10) {
                _putchar(i + '0');
            } else {
                _putchar((i / 10) + '0');
                _putchar((i % 10) + '0');
            }
            if (i < 98) {
                _putchar(',');
                _putchar(' ');
            }
        }
    } else {
        for ( i = n; i >= 98; i--) {
            if (i < 10) {
                _putchar(i + '0');
            } else {
                _putchar((i / 10) + '0');
                _putchar((i % 10) + '0');
            }
            if (i > 98) {
                _putchar(',');
                _putchar(' '); 
            }
        }
    }
    _putchar('\n');
}