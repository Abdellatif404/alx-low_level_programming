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
	unsigned int i, j, len1, len2;
	char *str;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	i = len1 = len2 = 0;
	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;
	if (n >= len2)
		n = len2;
	str = malloc(sizeof(char) * (len1 + n + 1));
	if (!str)
		return (NULL);
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
	str[i] = '\0';
	return (str);
}
