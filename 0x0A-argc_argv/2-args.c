#include "main.h"

/**
 * main - prints all arguments it receives.
 *
 * @ac: arguments count
 * @av: arguments vector
 *
 * Return: 0 on success
 */
int main(int ac, char **av)
{
	int i, j;

	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			_putchar(av[i][j]);
			j++;
		}
		_putchar('\n');
		i++;
	}
	return (0);
}
