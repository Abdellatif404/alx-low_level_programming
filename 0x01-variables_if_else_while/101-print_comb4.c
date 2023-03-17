#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, b, c;

	a = 48;
	while (a < 57)
	{
		b = a + 1;
		while (b <= 57)
		{
			c = b + 1;
			while (c <= 57)
			{
				putchar(a);
				putchar(b);
				putchar(c);
				if (a < 55)
				{
					putchar(',');
					putchar(' ');
				}
				c += 1;
			}
			b += 1;
		}
		a += 1;
	}
	putchar('\n');
	return (0);
}
