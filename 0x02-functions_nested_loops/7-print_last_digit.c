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
	if (n < 0)
		return (n % 10 * -1 + 48);
	return (n % 10 + 48);
}
