#include "main.h"

/**
 * _strcat - check the code.
 *
 * Description - 'the program's description'
 * @dest: describe the parameter
 * @src: describe the parameter
 *
 * Return: Always 0 (Success)
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
