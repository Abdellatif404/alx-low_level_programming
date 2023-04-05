#include "main.h"

/**
 * _puts_recursion - prints a string.
 *
 * @s: the string we want to print
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (!(*s))
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
