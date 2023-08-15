#ifndef DOG_h
#define DOG_h
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
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
