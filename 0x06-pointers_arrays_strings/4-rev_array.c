#include "main.h"

/**
 * reverse_array - check the code.
 *
 * Description - 'the program's description'
 * @a: describe the parameter
 * @n: describe the parameter
 *
 * Return: Always 0 (Success)
 */
void reverse_array(int *a, int n)
{
	int i, j, temp;

	i = temp = 0;
	j = n - 1;
	while (i < j)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		i++;
		j--;
	}
}
