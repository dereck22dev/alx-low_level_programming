#include "main.h"

/**
 * *_memset - fills memory with a constant byte.
 * @a: pointer to put the constant
 * @b: constant
 * @c: max bytes to use
 * Return: s
 */


char *_memset(char *a, char b, unsigned int c)
{
unsigned int i;

for (i = 0; c > 0 ; i++, c--)
{
	a[i] = b;
}

return (a);
}
