#include "main.h"

/**
 * more_numbers - check the code.
 *
 * Description - 'the program's description'
 * @: describe the parameter
 *
 * Return: Always 0 (Success)
 */
void more_numbers(void)
{
	char *numbers = "01234567891011121314\n";
	int i;

	i = 0;
	while (numbers[i])
		_putchar(numbers[i++]);
}
