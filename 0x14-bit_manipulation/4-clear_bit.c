#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0.
 * at a given index.
 * @nb: pointer of an unsigned long int.
 * @index: index of the bit.
 *
 * Return: 1 if it worked, -1 if it didn't.
 */
int clear_bit(unsigned long int *nb, unsigned int index)
{
	unsigned int n;

	if (index > 63)
		return (-1);

	n = 1 << index;

	if (*nb & n)
		*nb ^= n;

	return (1);
}
