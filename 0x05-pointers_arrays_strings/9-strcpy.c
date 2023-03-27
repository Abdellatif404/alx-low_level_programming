#include "main.h"

/**
 * *_strcpy - check the code.
 *
 * Description - 'the program's description'
 * @dest: describe the parameter
 * @src: describe the parameter
 *
 * Return: Always 0 (Success)
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
