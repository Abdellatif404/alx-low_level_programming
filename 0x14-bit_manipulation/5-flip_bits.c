#include "main.h"

/**
 * flip_bits - count the number of bits to flip to from one number to another
 * @n: the first number
 * @m: the second number
 * Return: returns the number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bit, shift = n ^ m;
	int i, c = 0;

	i = 63;
	while (i >= 0)
	{
		bit = shift >> i;
		if (bit & 1)
			c++;
		i--;
	}
	return (c);
}
