#include "main.h"

/**
 * get_bit - returns the value of a bit at a given
 * index.
 * @nb: unsigned long int input.
 * @index: index of the bit.
 *
 * Return: value of the bit.
 */
int get_bit(unsigned long int nb, unsigned int index)
{
	unsigned int i;

	if (nb == 0 && index < 64)
		return (0);

	for (i = 0; i <= 63; nb >>= 1, i++)
	{
		if (index == i)
		{
			return (nb & 1);
		}
	}

	return (-1);
}
