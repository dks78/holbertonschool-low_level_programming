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
        if (str[i] == 'w') str[i] = 'W';
        if (str[i] == 't') str[i] = 'T';
        if (str[i] == 'h') {
            str[i] = (capitalize_next) ? 'H' : (last_was_six) ? 'h' : str[i];
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
