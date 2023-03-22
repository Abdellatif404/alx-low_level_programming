#include "main.h"

/**
 * jack_bauer - check the code.
 *
 * Description - 'the program's description'
 * @: describe the parameter
 *
 * Return: Always 0 (Success)
 */
void jack_bauer(void)
{
	int hours, minutes;

	hours = 0;
	while (hours < 24)
	{
		minutes = 0;
		while (minutes < 60)
		{
			if (hours < 10)
				_putchar('0');
			_putchar(hours + 48);
			_putchar(':');
			if (minutes < 10)
				_putchar('0');
			_putchar(minutes + 48);
			_putchar('\n');
			minutes++;
		}
		hours++;
	}
}
