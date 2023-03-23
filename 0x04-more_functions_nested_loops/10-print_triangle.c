#include "main.h"

/**
 * print_triangle - check the code.
 *
 * Description - 'the program's description'
 * @size: describe the parameter
 *
 * Return: Always 0 (Success)
 */
void print_triangle(int size)
{
	int i, j, spaces;

	if (size > 0)
	{
		i = 1;
		spaces = size - 1;
		while (i <= size)
		{
			j = 0;
			while (j < spaces)
			{
				_putchar(' ');
				j++;
			}
			spaces--;
			j = 0;
			while (j < i)
			{
				_putchar('#');
				j++;
			}
			_putchar('\n');
			i++;
		}
	}
	else
		_putchar('\n');
}
