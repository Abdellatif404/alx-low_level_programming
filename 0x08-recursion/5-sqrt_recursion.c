#include "main.h"

/**
 * _sqrt - calculate the square root of the number.
 *
 * @x: the given number
 * @y: the square root
 *
 * Return: returns the natural square root
 */
int _sqrt(int x, int y)
{
	if (x == 0 || x == 1)
		return (x);
	else if (y > (x / 2) || x < 0)
		return (-1);
	else if (y * y == x)
		return (y);
	return (_sqrt(x, y + 1));
}

/**
 * _sqrt_recursion - calculate the square root of a number.
 *
 * @n: the given number
 *
 * Return: returns the natural square root
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 2));
}
