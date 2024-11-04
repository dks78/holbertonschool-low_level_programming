#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
unsigned int _strspn(char *s, char *accept);

unsigned int _strspn(char *s, char *accept)
{
    int i, len = 0, j;
    len = 0;

    for (i = 0; s[i] != '\0'; i++)
    {
        for (j = 0; accept[j] != '\0'; j++)
        {
            if (s[i] == accept[j])
            {
                len++;
                break;
            }
        }
        if (accept[j] == '\0')
        {
            return len;
        }
    }
    return len;
}


int main(void)
{
    char *s = "hello, world";
    char *f = "oleh";
    unsigned int n;

    n = _strspn(s, f);
    printf("%u\n", n);
    return (0);
}