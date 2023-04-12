#include <stdlib.h>
#include "main.h"

/**
 * _strlen - count the length of string
 *
 * @s: pointer to char that takes string input
 *
 * Return: string length
*/
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0';)
		i++;
	return (i);
}

/**
 * _strdup - allocate and fill a duplicate of a string.
 *
 * @str: the given string
 *
 * Return: a pointer to the newly allocated space
 */
char *_strdup(char *str)
{
	int i, len;
	char *dup;

	i = 0;
	len = _strlen(str) + 1;
	dup = malloc(len * sizeof(char));
	if (!dup || !str)
		return (0);
	while (i < len)
	{
		dup[i] = str[i];
		i++;
	}
	return (dup);
}
