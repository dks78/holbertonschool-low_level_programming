#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 * free_dog - Fonction qui affiche les éléments d'une structure dog
 * @d: Pointeur vers la structure dog
 */
void free_dog(dog_t *d)
{
{
if (d != NULL)

{
free(d->name);
free(d->owner);
free(d);
}
}

}
