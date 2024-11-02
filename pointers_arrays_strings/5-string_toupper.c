#include "main.h"
#include <stdio.h>
/**
 * main - check the code
 * string_toupper - fonction to change character minuscule a majuscule
 * @str : pointeur
 *
 *
 *
 *
*/
char *string_toupper(char *str)
{

int i = 0;
while (str[i] != '\0')
{

if (str[i]  >= 97 &&  str[i] <= 122)
str[i] = str[i] - 32;
i++;
}
return (str);
}
