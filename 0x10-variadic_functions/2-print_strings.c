#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - print strings.
 *
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 *
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);
	i = 0;
	while (i < n)
	{
		const char *str = va_arg(ap, const char*);
		if (str)
			printf("%s", str);
		else
			printf("(nil)");
		if (separator && i != n - 1)
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(ap);
}
