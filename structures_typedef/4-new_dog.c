#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "dog.h"

dog_t *new_dog(char *name, float age, char *owner) {
    dog_t *dog;
    
    /*Allouer de la mémoire pour le nouveau chien*/
    dog = malloc(sizeof(dog_t));
    if (dog == NULL) {
        return NULL;
    }

    /*Allouer de la mémoire et copier le nom*/
    dog->name = malloc(strlen(name) + 1);
    if (dog->name == NULL) {
        free(dog);
        return NULL;
    }
    strcpy(dog->name, name);

    /* Allouer de la mémoire et copier le propriétaire*/
    dog->owner = malloc(strlen(owner) + 1);
    if (dog->owner == NULL) {
        free(dog->name);
        free(dog);
        return NULL;
    }
    strcpy(dog->owner, owner);

    /*Allouer de la mémoire pour le nouveau chien*/
    dog->age = age;

    return dog;
}
