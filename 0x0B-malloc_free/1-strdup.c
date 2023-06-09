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
	if (str == NULL)
		return (0);
	len = _strlen(str);
	dup = malloc((len + 1) * sizeof(char));
	if (!dup)
		return (0);
	while (str[i])
	{
		dup[i] = str[i];
		i++;
	}
	return (dup);
}
