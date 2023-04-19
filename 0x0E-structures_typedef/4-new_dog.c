#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - create a new dog
 *
 * @name: First field
 * @age: Second field
 * @owner: Third field
 *
 * Return: a pointer to the created struct
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	char *name_cpy, *owner_cpy;

	name_cpy = name;
	owner_cpy = owner;
	d = malloc(sizeof(dog_t));
	if (!d)
		return (0);
	if (name)
		d->name = name;
	d->age = age;
	if (owner)
		d->owner = owner;
	return (d);
}
