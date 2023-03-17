#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char alphabet[27] = "abcdefghijklmnopqrstuvwxyz";

	i = 0;
	while (alphabet[i] != '\0')
		putchar(alphabet[i++]);
	putchar('\n');
	return (0);
}
