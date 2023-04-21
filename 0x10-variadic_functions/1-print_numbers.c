#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - print numbers.
 *
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 *
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);
	i = 0;
	while (i < n)
	{
		printf("%d", va_arg(ap, int));
		if (separator && i != n - 1)
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(ap);
}
