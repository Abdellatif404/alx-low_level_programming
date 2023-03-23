#include <unistd.h>

/**
 * _putchar - check the code.
 *
 * Description - 'the program's description'
 * @c: describe the parameter
 *
 * Return: Always 0 (Success)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * main - check the code.
 *
 * Description - 'the program's description'
 * @: describe the parameter
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	i = 1;
	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
			write(1, "FizzBuzz", 8);
		else if (i % 3 == 0)
			write(1, "Fizz", 4);
		else if (i % 5 == 0)
			write(1, "Buzz", 4);
		else
		{
			if (i < 10)
				_putchar(i + 48);
			else
			{
				_putchar(i / 10 + 48);
				_putchar(i % 10 + 48);
			}
		}
		if (i != 100)
			_putchar(' ');
		i++;
	}
	_putchar('\n');
	return (0);
}
