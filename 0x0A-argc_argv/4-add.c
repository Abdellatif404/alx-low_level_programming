#include <stdio.h>
#include <stdlib.h>

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
