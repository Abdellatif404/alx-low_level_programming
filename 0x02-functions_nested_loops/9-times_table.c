#include "main.h"

/**
 * times_table - check the code.
 *
 * Description - 'the program's description'
 * @: describe the parameter
 *
 * Return: Always 0 (Success)
 */
void times_table(void)
{
	int v, h, steps;

	v = steps = 0;
	while (v < 10)
	{
		h = 0;
		while (h < 10)
		{
			if (h * steps >= 10)
			{
				_putchar((h * steps / 10) + 48);
				_putchar((h * steps % 10) + 48);
			}
			else
				_putchar(h * steps + 48);
			if (h < 9)
			{
				_putchar(',');
				_putchar(' ');
				if ((h * steps + steps) < 10)
					_putchar(' ');
			}
			h++;
		}
		_putchar('\n');
		steps++;
		v++;
	}
}
