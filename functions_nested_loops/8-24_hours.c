#include "main.h"

/**
  * jack_bauer - Prints every minute of the day of Jack Bauer
  *
  * Return: ...
  */
void jack_bauer(void)
{
    int hour, minute;

    for (hour = 0; hour < 24; hour++)
    {
        for (minute = 0; minute < 60; minute++)
        {
            _putchar(hour / 10 + '0');   // Premier chiffre de l'heure
            _putchar(hour % 10 + '0');   // Deuxième chiffre de l'heure
            _putchar(':');                // Afficher ':'
            _putchar(minute / 10 + '0'); // Premier chiffre des minutes
            _putchar(minute % 10 + '0'); // Deuxième chiffre des minutes
            _putchar('\n');              // Saut de ligne
        }
    }
}
/*
Variables :

int a, b, c, d; : Quatre variables pour représenter les chiffres des heures et des minutes.
a : Premier chiffre de l'heure (0 ou 1 ou 2).
b : Deuxième chiffre de l'heure (0 à 9).
c : Premier chiffre des minutes (0 à 5).
d : Deuxième chiffre des minutes (0 à 9).
Boucles :

Première boucle (for (a = 0; a <= 2; a++)) : Elle itère sur le premier chiffre de l'heure (a), qui peut être 0, 1 ou 2.
Deuxième boucle (for (b = 0; b <= 9; b++)) : Elle itère sur le deuxième chiffre de l'heure (b), qui peut aller de 0 à 9.
Condition (if ((a <= 1 && b <= 9) || (a <= 2 && b <= 3))) :

Cette condition s'assure que la combinaison de a et b forme une heure valide :
Si a est 0 ou 1, b peut être n'importe quel chiffre de 0 à 9.
Si a est 2, b ne peut être que 0 à 3, car les heures valides sont 20, 21, 22, et 23.
Boucles pour les Minutes :

Troisième boucle (for (c = 0; c <= 5; c++)) : Elle itère sur le premier chiffre des minutes (c), qui peut aller de 0 à 5.
Quatrième boucle (for (d = 0; d <= 9; d++)) : Elle itère sur le deuxième chiffre des minutes (d), qui peut aller de 0 à 9.
Affichage :

_putchar(a + '0'); : Affiche le premier chiffre de l'heure (par exemple, si a vaut 0, cela affiche '0').
_putchar(b + '0'); : Affiche le deuxième chiffre de l'heure.
_putchar(58); : Affiche le caractère ':' (58 est le code ASCII pour ':').
_putchar(c + '0'); : Affiche le premier chiffre des minutes.
_putchar(d + '0'); : Affiche le deuxième chiffre des minutes.
_putchar('\n'); : Insère un saut de ligne pour passer à la prochaine heure.
Résultat
En exécutant jack_bauer, vous obtiendrez une sortie comme suit :  */