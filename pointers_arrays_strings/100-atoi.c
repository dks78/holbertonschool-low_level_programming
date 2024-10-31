#include "main.h"
#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int _atoi(char *s)
{
    int sign = 1;
    unsigned int num = 0;
    int started = 0;

    while (*s)
    {
        if (*s == '-')
            sign *= -1;
        else if (*s >= '0' && *s <= '9')
        {
            num = num * 10 + (*s - '0');
            started = 1;
        }
        else if (started)
            break;
        s++;
    }

    return sign * num;
}