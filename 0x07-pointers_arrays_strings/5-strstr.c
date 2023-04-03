#include "main.h"

/**
 * _strstr - locates a substring.
 *
 * @haystack: the address of the string to search within
 * @needle: the address of the substring to search for
 *
 * Return: the number of bytes
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, k, occurrence;
	char *s;

	i = occurrence = 0;
	while (haystack[i])
	{
		j = i;
		k = 0;
		while (needle[j])
		{
			if (haystack[j] != needle[k])
			{
				occurrence = 0;
				break;
			}
			else
			{
				if (occurrence == 0)
					s = haystack + j;
				occurrence = 1;
			}
			j++;
			k++;
		}
		if (occurrence == 0)
			i++;
		else
			break;
	}
	if (occurrence == 0)
		return (0);
	return (s);
}
