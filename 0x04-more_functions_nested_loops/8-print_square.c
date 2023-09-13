#include "main.h"

/**
 * print_square - check for a digit
 * @n : number of _ to be printed
 * Return:void
 */

void print_square(int n)
{

int i = 0, k;

while (i < n && n > 0)
{
	k = 0;
	while (k < n)
	{
		_putchar('#');
		k++;
	}
	_putchar('\n');
	i++;
}
if (i == 0)
	_putchar('\n');
}
