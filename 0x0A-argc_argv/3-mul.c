#include <stdio.h>

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
	if (ac == 3)
	{
		printf("%d\n", (int)(av[1][0] - 48) * (int)(av[2][0] - 48));
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
