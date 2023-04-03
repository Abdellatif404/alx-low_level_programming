#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 *
 * @s: the address of the string to search within
 * @accept: the prefix substring
 *
 * Return: the number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int counter;
	int i, j, occurrence;

	i = counter = occurrence = 0;
	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				counter++;
				occurrence = 1;
				break;
			}
			else
				occurrence = 0;
			j++;
		}
		if (occurrence == 0)
			break;
		i++;
	}
	return (counter);
}
