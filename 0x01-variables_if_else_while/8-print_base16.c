#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	n = 48;
	while (n <= 57)
		putchar(n++);
	n = 97;
	while (n <= 102)
		putchar(n++);
	putchar('\n');
	return (0);
}
