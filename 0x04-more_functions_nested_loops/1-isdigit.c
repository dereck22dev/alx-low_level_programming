#include "main.h"
#include <ctype.h>

/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: value to be used checked .
 *
 * Return: 1 if c is a digit 0 otherwise
 */
int _isdigit(int c)
{
if (isdigit(c))
{
	return (1);
}
return (0);
}
