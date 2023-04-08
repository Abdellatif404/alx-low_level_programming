#include <stdio.h>

/**
 * main - prints the number of arguments.
 *
 * @ac: arguments count
 * @av: arguments vector
 *
 * Return: 0 on success
 */
int main(int ac, char **av)
{
	(void)av;
	printf("%d\n", ac-1);
	return (0);
}
