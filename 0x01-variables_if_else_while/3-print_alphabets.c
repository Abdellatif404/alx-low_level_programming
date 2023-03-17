#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char alphabets[53] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

	i = 0;
	while (alphabets[i] != '\0')
		putchar(alphabets[i++]);
	putchar('\n');
	return (0);
}
