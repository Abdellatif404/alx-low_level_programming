#include <stdio.h>

void _putchar(char * str)
{
	int i;

	i = 0;
	while (str[i])
		putchar(str[i++]);
}
