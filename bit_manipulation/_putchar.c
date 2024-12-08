#include <unistd.h>

/**
 * _putchar - Affiche un caractère
 * @c: Le caractère à afficher
 *
 * Return: 1 sur succès, -1 sur erreur
 */
int _putchar(char c)
{
    return (write(1, &c, 1));
}