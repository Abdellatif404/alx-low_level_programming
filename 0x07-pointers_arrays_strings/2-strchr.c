#include "main.h"

/**
 * _strchr - locates a character in a string.
 *
 * @s: the address of the string to search within
 * @c: the character we are searching for
 *
 * Return: a pointer to the first occurence of the character c
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			break;
		i++;
	}
	if (!s[i])
		return (0);
	return (s + i);
}
