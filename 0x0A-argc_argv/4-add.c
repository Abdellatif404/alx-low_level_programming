#include <stdio.h>
#include <stdlib.h>

/**
 * _isdigit - check the string if it contains only digits.
 *
 * @c: the given string
 *
 * Return: 1 (Success)
 */
int _isdigit(char *c)
{
	int i;

	i = 0;
	while (c[i])
	{
		if (c[i] < 48 || c[i] > 57)
			return (0);
		i++;
	}
	return (1);
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
	long int i, sum;

	i = 1;
	sum = 0;
	while (i < ac)
	{
		if (!_isdigit(av[i]))
		{
			printf("Error\n");
			return (1);
		}
		if ((atoi(av[i]) || *av[i] == 48) && atoi(av[i]) >= 0)
			sum += atoi(av[i]);
		else
		{
			printf("Error\n");
			return (1);
		}
		i++;
	}
	printf("%ld\n", sum);
	return (0);
}
