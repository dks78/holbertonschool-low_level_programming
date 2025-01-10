#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Structure représentant un chien
 * @name: Le nom du chien (chaîne de caractères)
 * @age: L'âge du chien (nombre flottant)
 * @owner: Le propriétaire du chien (chaîne de caractères)
 */


typedef struct dog
{
char *name;
float age;
char *owner;
} dog_t;

 void print_dog(struct dog *d);
 void init_dog(struct dog *d, char *name, float age, char *owner);
 dog_t *new_dog(char *name, float age, char *owner);
 void free_dog(dog_t *d);
 char *_strcpy(char *dest, char *src);
 int _strlen(char *s);
#endif
