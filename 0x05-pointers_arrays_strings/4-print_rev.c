#include "main.h"

/**
 * print_rev - check the code.
 *
 * Description - 'the program's description'
 * @s: describe the parameter
 *
 * Return: Always 0 (Success)
 */
void print_rev(char *s)
{
	int i, len;

	i = len = 0;
	while (s[i++])
		len++;
	i = len - 1;
	while (i != 0)
		_putchar(s[i--]);
	_putchar('\n');
}
