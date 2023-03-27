#include "main.h"

/**
 * rev_string - check the code.
 *
 * Description - 'the program's description'
 * @s: describe the parameter
 *
 * Return: Always 0 (Success)
 */
void rev_string(char *s)
{
	int i, len;
	char cpy[200];

	len = i = 0;
	while (s[i])
	{
		cpy[i] = s[i];
		i++;
		len++;
	}
	len -= 1;
	i = 0;
	while (cpy[i])
	{
		s[len] = cpy[i];
		len--;
		i++;
	}
}
