#include "main.h"

/**
 * whatismyname - prints the program's name.
 *
 * @ac: arguments count
 * @av: arguments vector
 *
 * Return: void
 */
void whatismyname(__attribute__((unused)) int ac, char **av)
{
	int i;

	i = 0;
	while (av[0][i])
	{
		_putchar(av[0][i]);
		i++;
	}
	_putchar('\n');
}
/**
 * main - prints the program's name.
 *
 * @ac: arguments count
 * @av: arguments vector
 *
 * Return: 0 on success
 */
int main(int ac, char **av)
{
	whatismyname(ac, av);
	return (0);
}
