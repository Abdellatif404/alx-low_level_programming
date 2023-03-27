#include "main.h"
#include <stdio.h>

/**
 * print_array - check the code.
 *
 * Description - 'the program's description'
 * @a: describe the parameter
 * @n: describe the parameter
 *
 * Return: Always 0 (Success)
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		if (i != n - 1)
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
		i++;
	}
	_putchar('\n');
}
