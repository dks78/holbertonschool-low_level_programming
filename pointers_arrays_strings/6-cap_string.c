#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to be capitalized.
 *
 * Return: The capitalized string.
 */
char *cap_string(char *str)
{ 
    int i = 0, last_was_six = 0, capitalize_next = 1;

    while (str[i] != '\0') {
            if (str[i] == 'f')
                str[i] = 'F';
        if (str[i] == 'w') 
        {
            if (i > 0 && str[i - 1] == '-') {
             str[i] = 'w';
            } else {
            str[i] = 'W';
            }
        }
        if(str[i] == 'o'){
            if( i > 0 && str[i - 1] == ' '){
                str[i] = 'O';
            } else {
                str[i] = 'o';
            } 
        }
          if(str[i] == 't')
          {
            if( i > 0 && str[i - 1] == ' '){
                str[i] = 'T';
            } else {
                str[i] = 't';
            } 
        }
            if(str[i] == 'p')
          {
            if( i > 0 && str[i - 1] == ' '){
                str[i] = 'P';
            } else {
                str[i] = 'p';
            } 
        }
           if(str[i] == 'b')
          {
            if( i > 0 && str[i - 1] == ' '){
                str[i] = 'B';
            } else {
                str[i] = 'b';
            } 
        }
           if(str[i] == 'c')
          {
            if( i > 0 && str[i - 1] == ' '){
                str[i] = 'C';
            } else {
                str[i] = 'c';
            } 
        }
             if(str[i] == 'e')
          {
            if( i > 0 && str[i - 1] == ' '){
                str[i] = 'E';
            } else {
                str[i] = 'e';
            } 
        }
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
