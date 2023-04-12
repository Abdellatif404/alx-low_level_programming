#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars,
 *  and intializes it with a specific char.
 *
 * @size: size of the array
 * @c: intializing value
 *
 * Return: a pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	i = 0;
	arr = malloc(size * sizeof(char));
	if (!size || !arr)
		return (0);
	while (i < size)
	{
		arr[i] = c;
		i++;
	}
	return (arr);
}
