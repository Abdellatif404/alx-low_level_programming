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
	int i, j, len;
	char *str;

	i = len = 0;
	while (s1[i])
		i++;
	len = i;
	i = 0;
	while (s2[i])
		i++;
	len += i + 1;
	str = malloc(len * sizeof(char));
	if (!str)
		return (0);
	i = 0;
	j = 0;
	while (s1[i])
		str[j++] = s1[i++];
	i = 0;
	while (s2[i])
		str[j++] = s2[i++];
	str[j] = '\0';
	return (str);
}
