#include "main.h"

/**
 * print_numbers - check the code.
 *
 * Description - 'the program's description'
 * @: describe the parameter
 *
 * Return: Always 0 (Success)
 */
void print_numbers(void)
{
	char *numbers = "0123456789\n";
	int i;

	i = 0;
	while (numbers[i])
		_putchar(numbers[i++]);
}
