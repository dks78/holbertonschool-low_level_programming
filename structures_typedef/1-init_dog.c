#include <stdio.h>
#include <string.h>
#include "dog.h"
/**
 * print_dog - Fonction qui affiche les éléments d'une structure dog
 * @d: Pointeur vers la structure dog
 */
void print_dog(struct dog *d){
    if(d == NULL){
        return;
    }
    if(d->name == NULL){
        printf("Name : (nil)");
    }  else{
         printf("Name: %s\n", d->name);
    }
     printf("Age: %f\n", d->age);
    if(d->owner == NULL)
    {
        printf("Owner : (nil)");
    } else {
        printf("Owner: %s\n", d->owner);
    }
}
