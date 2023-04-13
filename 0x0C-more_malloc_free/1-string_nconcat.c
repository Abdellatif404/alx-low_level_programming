#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings.
 *
 * @s1: the given string
 * @s2: the given string
 * @n: the number of bytes to be copied
 *
 * Return: a pointer to the concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	char *str;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	i = 0;
	while (s1[i])
		i++;
	while (s2[i])
		i++;
	str = malloc((i + 1) * sizeof(char));
	if (!str)
		return (0);
	i = j = 0;
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j] && j < n)
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	if (n > 0)
		str[i] = '\0';
	return (str);
}
