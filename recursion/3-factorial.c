#include "main.h"
#include <stdio.h>
/**
 * factorial - Calcule le factoriel d'un nombre entier non négatif
 * @n: Le nombre entier pour lequel le factoriel est calculé
 *
 * Description: Cette fonction calcule le factoriel d'un nombre entier positif.
 * Si le nombre est négatif, la fonction retourne -1 pour indiquer une erreur,
 * car le factoriel n'est pas défini pour les entiers négatifs.
 *
 * Return: Le factoriel de n si n >= 0, sinon -1 pour indiquer une erreur
 */
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
if (n == 0 || n == 1)
{
return (1);
}
return (n * factorial(n - 1));
}
