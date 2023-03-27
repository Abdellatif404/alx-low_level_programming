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
	int i, j;
	char c;

	j = 0;
	while (s[j])
		j++;
	j -= 1;
	i = 0;
	while (i != j)
	{
		c = s[i];
		s[i] = s[j];
		s[j] = c;
		i++;
		j--;
	}
}
