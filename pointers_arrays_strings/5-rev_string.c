#include "main.h"
#include <stdio.h>
#include "main.h"
/**
 *rev_string - reverses a string
 *@s: string
 *
 */
void rev_string(char *s)
{
        int length = 0;
        int a = 0;
        int temporary;
        while (s[a++])
        length++;
        for (a = length - 1; a >= length / 2; a--)
{
        temporary = s[a];
        s[a] = s[length - a - 1];
        s[length - a - 1] = temporary;
}
}