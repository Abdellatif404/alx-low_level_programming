#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, b;

	a = 48;
	while (a < 57)
	{
		b = a + 1;
		while (b <= 57)
		{
			putchar(a);
			putchar(b);
			if (a < 56)
			{
				putchar(',');
				putchar(' ');
			}
			b += 1;
		}
		a += 1;
	}
	putchar('\n');
	return (0);
}
