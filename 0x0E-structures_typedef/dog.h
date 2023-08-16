#ifndef DOG_h
#define DOG_h
#include <stdio.h>
#include <stdlib.h>
/**
 * struct dog - a dog infos
 * @name: the name
 * @owner: the owner
 * @age: the age
 *
 * Description: rien
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);

#endif
