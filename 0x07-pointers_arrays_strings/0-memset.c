#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 *
 * @s: the address of the memory area
 * @b: constant byte
 * @n: the number of bytes to fill
 *
 * Return: Always 0 (Success)
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
