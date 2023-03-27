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
	char c;

	len = i = 0;
	while (s[i])
	{
		i++;
		len++;
	}
	i = 0;
	while (i < len / 2)
	{
		c = s[i];
		s[i] = s[len - 1];
		s[len - 1] = c;
		len--;
		i++;
	}
}
