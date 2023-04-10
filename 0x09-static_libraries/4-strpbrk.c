#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 *
 * @s: the address of the string to search within
 * @accept: the prefix substring
 *
 * Return: a pointer to the found byte
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j, occurrence;

	i = occurrence = 0;
	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				occurrence = 1;
				break;
			}
			j++;
		}
		if (occurrence == 1)
			break;
		i++;
	}
	if (occurrence == 0)
		return (0);
	return (s + i);
}
