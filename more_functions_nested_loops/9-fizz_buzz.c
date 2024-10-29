#include "main.h"
#include <stdio.h>

 /**
 *
 * print_diagonal : Prints numbers from 0 to 9, excluding 2 and 4.
 * n: charactere
 * Return: Nothing (void)
 */
 void print_string(const char *str);
 void print_string(const char *str) {
    while (*str) {
        putchar(*str++);
    }
}
int main (void) 
{
    int nomber;

    for (nomber = 1; nomber <= 100; nomber++) {
        if (nomber % 3 == 0 && nomber % 5 == 0) {
            print_string("FizzBuzz");
        } else if (nomber % 3 == 0) {
            print_string("Fizz");
        } else if (nomber % 5 == 0) {
            print_string("Buzz");
        } else {
        if (nomber >= 10) {
            putchar((nomber / 10) + '0');
            }
            putchar((nomber % 10) + '0');
        }
        if (nomber < 100) {
            putchar(' ');
        }
    }
    putchar('\n');
    return (0);
}
