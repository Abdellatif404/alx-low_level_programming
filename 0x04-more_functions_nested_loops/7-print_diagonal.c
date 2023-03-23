#include "main.h"

/**
 * print_diagonal - check the code.
 *
 * Description - 'the program's description'
 * @n: describe the parameter
 *
 * Return: Always 0 (Success)
 */
void print_diagonal(int n)
{
	int spaces, i;

	spaces = 0;
	if (n > 0)
	{
		while (spaces < n)
		{
			i = 0;
			while (i < spaces)
			{
				_putchar(' ');
				i++;
			}
			spaces++;
			_putchar('\\');
			_putchar('\n');

		}
	}
	else
		_putchar('\n');
}
