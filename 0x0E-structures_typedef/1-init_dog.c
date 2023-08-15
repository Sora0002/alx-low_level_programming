#include "dog.h"
/**
 * init_dog - init dog infos
 * @d: the struct
 * @name: dog's name
 * @age: dog's name
 * @owner: dog's owner
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
