#include <stdarg.h>

/**
 * sum_them_all - calculate the sum of all its parameters.
 *
 * @n: describe the parameter
 *
 * Return: the sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum;
	va_list ap;

	if (n == 0)
		return (0);
	va_start(ap, n);
	i = sum = 0;
	while (i < n)
	{
		sum += va_arg(ap, int);
		i++;
	}
	va_end(ap);
	return (sum);
}
