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
		if ((s[i] >= 'a' && s[i] <= 'z' && i == 0) ||
			s[i] == ' ' || s[i] == '\t' ||
			s[i] == '\n' || s[i] == ',' ||
			s[i] == ';' || s[i] == '.' ||
			s[i] == '!' || s[i] == '?' ||
			s[i] == '"' || s[i] == '(' ||
			s[i] == ')' || s[i] == '{' || s[i] == '}'
				)
		{
			i++;
			if (s[i] >= 97 && s[i] <= 122)
				s[i] -= 32;
		}
		i++;
	}
	return (s);
}
