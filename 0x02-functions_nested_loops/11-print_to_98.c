#include "main.h"

/**
 * _putnbr - check the code.
 *
 * Description - 'the program's description'
 * @nb: describe the parameter
 *
 * Return: Always 0 (Success)
 */
void	_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		_putchar('-');
		_putchar('2');
		_putnbr(147483648);
	}
	else if (nb < 0)
	{
		_putchar('-');
		_putnbr(nb * (-1));
	}
	else if (nb <= 9)
		_putchar(nb + 48);
	if (nb >= 10)
	{
		_putnbr(nb / 10);
		_putnbr(nb % 10);
	}
}

/**
 * print_to_98 - check the code.
 *
 * Description - 'the program's description'
 * @n: describe the parameter
 *
 * Return: Always 0 (Success)
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		_putnbr(n);
		_putchar(',');
		_putchar(' ');
		if (n > 98)
			n--;
		else
			n++;
	}
	_putchar('9');
	_putchar('8');
	_putchar('\n');
}
