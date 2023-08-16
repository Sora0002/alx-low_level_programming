#include "dog.h"
/**
 * _strlen - function that return length of string
 * @s: the string
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	return (a);
}
/**
 * _strcpy - function to copy two functions
 * @dest: destination
 * @src: source
 *
 * Return: void
 */
char *_strcpy(char *dest, char *src)
{
	int a = 0;

	while (src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	if (a != 0)
	{
		dest[a] = '\0';
	}
	return (dest);
}
/**
 * new_dog - a function to create a dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *d;

    if (!name || age < 0 || !owner)
        return (NULL);
    d = (dog_t *)malloc(sizeof(dog_t));
    if (d == NULL)
        return (NULL);
    d->name = (char *)malloc(sizeof(char) * (_strlen(name) + 1));
    if (d->name == NULL)
    {
        free(d);
        return (NULL);
    }
    d->owner = (char *)malloc(sizeof(char) * (_strlen(owner) + 1));
    if (d->owner == NULL)
    {
        free(d->name);
        free(d);
        return (NULL);
    }
    d->owner = _strcpy(d->owner, owner);
    d->name = _strcpy(d->name, name);
    d->age = age;
    return (d);
}