#include "main.h"

/**
 * print_number - check the code.
 *
 * Description - 'the program's description'
 * @n: describe the parameter
 *
 * Return: Always 0 (Success)
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		print_number(n * -1);
	}
	else if (n < 10)
		_putchar(n + 48);
	else
	{
		print_number(n / 10);
		print_number(n % 10);
	}
}
