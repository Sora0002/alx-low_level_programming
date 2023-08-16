#include "dog.h"
/**
 * free_dog - a function to free a struct
 * @d: the struct
 * Return: void
*/
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
