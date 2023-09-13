#include "main.h"
#include <stdio.h>
/**
 * infinite_add - adds two numbers
 * @n1: a first number.
 * @n2: a second two.
 * @r: buffer that the function will use to store the result.
 * @size_r: buffer size:
 * Return: the pointer to destination.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, j = 0, op, l, m, n, sum = 0;

	while (*(n1 + i) != '\0')
		i++;
	while (*(n2 + j) != '\0')
		j++;
	if (i >= j)
		l = i;
	else
		l = j;
	if (size_r <= l + 1)
		return (0);
	r[l + 1] = '\0';
	i--, j--, size_r--;
	m = *(n1 + i) - 48, n = *(n2 + j) - 48;
	while (l >= 0)
	{
		op = m + n + sum;
		if (op >= 10)
			sum = op / 10;
		else
			sum = 0;
		if (op > 0)
		*(r + l) = (op % 10) + 48;
		else
			*(r + l) = '0';
		if (i > 0)
			i--, m = *(n1 + i) - 48;
		else
			m = 0;
		if (j > 0)
			j--, n = *(n2 + j) - 48;
		else
			n = 0;
		l--, size_r--;
	}
	if (*(r) == '0')
		return (r + 1);
	else
		return (r);
}
