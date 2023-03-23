#include "main.h"

/**
 * print_most_numbers - check the code.
 *
 * Description - 'the program's description'
 * @: describe the parameter
 *
 * Return: Always 0 (Success)
 */
void print_most_numbers(void)
{
	int i;

	i = 48;
	while (i <= 58)
	{
		if (i == 50 || i == 52)
			continue;
		_putchar(i++);
	}
	_putchar('\n');
}
