#include "main.h"

/**
 * _strlen - check the code.
 *
 * Description - 'the program's description'
 * @s: describe the parameter
 *
 * Return: Always 0 (Success)
 */
int _strlen(char *s)
{
	int i, len;

	i = len = 0;
	while (s[i])
	{
		len++;
		i++;
	}
	return (len);
}
