#include "main.h"

/**
 * is_prime - check if the input integer is a prime number.
 *
 * @x: the given number
 * @y: a number start from 2
 *
 * Return: returns 1 if it's a prime number, otherwise return 0
 */
int is_prime(int x, int y)
{
	if (x <= 1)
		return (0);
	else if (y > (x / 2))
		return (1);
	else if (x % y == 0)
		return (0);
	return (is_prime(x, y + 1));
}

/**
 * is_prime_number - check if the input integer is a prime number.
 *
 * @n: the given number
 *
 * Return: returns 1 if it's a prime number, otherwise return 0
 */
int is_prime_number(int n)
{
	return (is_prime(n, 2));
}
