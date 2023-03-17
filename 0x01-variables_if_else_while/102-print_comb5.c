#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, b, c, d;

	a = 48;
	while (a <= 57)
	{
		b = 48;
		while (b <= 57)
		{
			c = a;
			d = b + 1;
			while (c <= 57)
			{
				while (d <= 57)
				{
					putchar(a);
					putchar(b);
					putchar(' ');
					putchar(c);
					putchar(d);
					if (!(a == 57 && b == 56))
					{
						putchar(',');
						putchar(' ');
					}
					d++;
				}
				d = 48;
				c++;
			}
			b++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}
