#include "main.h"

/**
 * _strncpy - check the code.
 *
 * Description - 'the program's description'
 * @dest: describe the parameter
 * @src: describe the parameter
 * @n: describe the parameter
 *
 * Return: Always 0 (Success)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	if (src[i] == '\0')
		dest[i] = '\0';
	return (dest);
}
