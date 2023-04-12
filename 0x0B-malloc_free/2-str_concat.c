#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings.
 *
 * @s1: the given string
 * @s2: the given string
 *
 * Return: a pointer to the concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int i, len;
	char *str;

	i = 0;
	while (s1[i])
		i++;
	while (s2[i])
		i++;
	len = i + 1;
	str = malloc(len * sizeof(char));
	if (!str)
		return (0);
	i = 0;
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[i])
	{
		str[i] = s2[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
