#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: the given binary
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int value = 0;

	if (!b)
		return (0);
	i = 0;
	while (b[i])
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		value = value * 2 + (b[i] - '0');
		i++;
	}
	return (value);
}
