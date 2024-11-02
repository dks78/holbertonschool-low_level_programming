#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

char *cap_string(char *str)
{ 
    int i = 0, last_was_six = 0, capitalize_next = 1;

    while (str[i] != '\0') {
        if (str[i] == 'h') {
            str[i] = (capitalize_next) ? 'H' : (last_was_six) ? 'h' : str[i];
        }
        if (str[i] == 'w') {
        if (i > 0 && str[i - 1] == '-') {
             str[i] = 'w';
        } else {
            str[i] = 'W';
        }
        }
        last_was_six = (str[i] == '6') ? 1 : 0;
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || 
            str[i] == ',' || str[i] == ';' || str[i] == '.' || 
            str[i] == '!' || str[i] == '?' || str[i] == '"' || 
            str[i] == '(' || str[i] == ')' || str[i] == '{' || str[i] == '}') 
        {
            capitalize_next = 1;
        } else {
            capitalize_next = 0;
        }
        i++;
    }
    return str;
}
