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
	int i, sum;

	i = 1;
	sum = 0;
	while (i < ac)
	{
		if (atoi(av[i]) || *av[i] == 48)
			sum += atoi(av[i]);
		else
		{
			printf("Error\n");
			return (1);
		}
		if (sum < 0)
		{
			printf("Error\n");
			return (1);
		}
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
