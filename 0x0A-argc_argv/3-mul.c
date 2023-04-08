#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers.
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
		printf("%d\n", atoi(av[1]) * atoi(av[2]));
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
