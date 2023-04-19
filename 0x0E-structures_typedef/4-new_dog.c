#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - check the code.
 *
 * Description - 'the program's description'
 * @s: describe the parameter
 *
 * Return: Always 0 (Success)
 */
int _strlen(char *s)
{
	int i, len;

	i = len = 0;
	while (s[i])
	{
		len++;
		i++;
	}
	return (len);
}
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

	d = malloc(sizeof(dog_t));
	if (!d)
		return (0);
	d->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (!d->name)
		return (0);
	d->age = age;
	d->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (!d->owner)
		return (0);
	return (d);
}
