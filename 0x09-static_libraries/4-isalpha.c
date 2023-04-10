#include "main.h"

/**
 * _isalpha - check the code.
 *
 * Description - 'the program's description'
 * @c: describe the parameter
 *
 * Return: Always 0 (Success)
 */
int _isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
		return (1);
	return (0);
}
