#include "main.h"

/**
 * set_bit - sets the value of a bit to 1.
 * at a given index.
 * @nb: pointer of an unsigned long int.
 * @index: index of the bit.
 *
 * Return: 1 if it worked, -1 if it didn't.
 */
int set_bit(unsigned long int *nb, unsigned int index)
{
	unsigned int n;

	if (index > 63)
		return (-1);

	n = 1 << index;
	*nb = (*nb | n);

	return (1);
}
