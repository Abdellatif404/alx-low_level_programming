#include "main.h"

/**
 * _memcpy - copies memory area to another.
 *
 * @dest: the address of the destination memory area
 * @src: the address of the source memory area
 * @n: the number of bytes to fill
 *
 * Return: Always 0 (Success)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
