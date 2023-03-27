#include "main.h"

/**
 * puts2 - check the code.
 *
 * Description - 'the program's description'
 * @str: describe the parameter
 *
 * Return: Always 0 (Success)
 */
void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
