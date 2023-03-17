#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabt[25] = "abcdfghijklmnoprstuvwxyz";
	int i;

	i = 0;
	while (alphabt[i] != '\0')
		putchar(alphabt[i++]);
	putchar('\n');
	return (0);
}
