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
	int i, j, sum;

	i = 1;
	sum = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			if (av[i][j] == 48)
				break;
			else if (atoi(av[i]))
				sum += atoi(av[i]);
			else
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
