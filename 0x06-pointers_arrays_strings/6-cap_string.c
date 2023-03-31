#include "main.h"
#include <stdio.h>

/**
 * cap_string - check the code.
 *
 * Description - 'the program's description'
 * @s: describe the parameter
 *
 * Return: Always 0 (Success)
 */
char *cap_string(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		while (!(s[i] >= 'a' && s[i] <= 'z'))
			i++;
		if (i == 0 || s[i - 1] == ' ' ||
				s[i - 1] == '\t' || s[i - 1] == '\n' ||
				s[i - 1] == ',' || s[i - 1] == ';' ||
				s[i - 1] == '.' || s[i - 1] == '!' ||
				s[i - 1] == '?' || s[i - 1] == '"' ||
				s[i - 1] == '(' || s[i - 1] == ')' ||
				s[i - 1] == '{' || s[i - 1] == '}'
				)
		{
			s[i] -= 32;
			i++;
		}
		i++;
	}
	return (s);
}
