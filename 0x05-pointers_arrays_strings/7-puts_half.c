#include "main.h"

/**
 * puts_half - check the code.
 *
 * Description - 'the program's description'
 * @str: describe the parameter
 *
 * Return: Always 0 (Success)
 */
void puts_half(char *str)
{
	int i, len;

	i = len = 0;
	while (str[len])
		len++;
	if (len % 2 != 0)
		i = len / 2 + 1;
	else
		i = len / 2;
	while (str[i])
		_putchar(str[i++]);
	_putchar('\n');
}
