
#include <stdio.h>
#include "dog.h"
/**
 * init_dog - Initialise une variable de type struct dog
 * @d: Pointeur vers la structure dog à initialiser
 * @name: Le nom du chien
 * @age: L'âge du chien
 * @owner: Le propriétaire du chien
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{

if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
