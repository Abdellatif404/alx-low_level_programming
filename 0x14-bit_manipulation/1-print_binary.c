#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the given number
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int bit;
	int i, j;

	i = 63;
	while (i >= 0)
	{
		bit = n >> i;
		if (bit & 1)
		{
			_putchar('1');
			j++;
		}
		else if (bit)
			_putchar('0');
		i--;
	}
	if (!bit)
		_putchar('0');
}
