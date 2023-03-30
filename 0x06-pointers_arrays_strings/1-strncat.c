#include "main.h"

/**
 * _strncat - check the code.
 *
 * Description - 'the program's description'
 * @dest: describe the parameter
 * @src: describe the parameter
 * @n: describe the parameter
 *
 * Return: Always 0 (Success)
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
