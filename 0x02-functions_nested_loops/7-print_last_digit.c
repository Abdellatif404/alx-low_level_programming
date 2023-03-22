#include "main.h"

/**
 * print_last_digit - check the code.
 *
 * Description - 'the program's description'
 * @n: describe the parameter
 *
 * Return: Always 0 (Success)
 */
int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;
	if (last_digit < 0)
		last_digit *= -1;
	_putchar(last_digit + 48);
	return (last_digit);
}
