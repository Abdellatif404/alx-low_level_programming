#include "main.h"

/**
 * _strcmp - check the code.
 *
 * Description - 'the program's description'
 * @s1: describe the parameter
 * @s2: describe the parameter
 *
 * Return: Always 0 (Success)
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] == s2[i])
			i++;
		else
			return (s1[i] - s2[i]);
	}
	return (0);
}
