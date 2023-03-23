#include "main.h"

/**
 * print_line - check the code.
 *
 * Description - 'the program's description'
 * @n: describe the parameter
 *
 * Return: Always 0 (Success)
 */
void print_line(int n)
{
	int i;

	i = 0;
	if (n > 0)
	{
		while (i < n)
		{
			_putchar('_');
			i++;
		}
	}
	_putchar('\n');
}
