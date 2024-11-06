#include "main.h"
#include <stdio.h>
/**
 * _pow_recursion - calcule la valeur de x élevé à la puissance y
 * @x: la base
 * @y: l'exposant
 *
 * Return: la valeur de x^y, ou -1 si y est inférieur à 0
 */
int _pow_recursion(int x, int y)
{
    if (y < 0)  /* Si y est négatif, calcule la puissance et prend l'inverse */
        return 1 / _pow_recursion(x, -y);

    if (y == 0)  /* Condition de base : tout nombre élevé à 0 est égal à 1 */
        return 1;

    return x * _pow_recursion(x, y - 1);  /* Appel récursif pour multiplier x à chaque étape */
}
