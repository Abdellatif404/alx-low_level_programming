#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit;

	digit = 48;
	while (digit <= 57)
		putchar(digit++);
	putchar('\n');
	return (0);
}
