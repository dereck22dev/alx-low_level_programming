#include "main.h"

/**
 * print_number - prints an integer.
 * @n: input integer.
 * Return: no return.
 */
void print_number(int n)
{
unsigned int i, j, total;

if (n < 0)
{
	_putchar(45);
	i = n * -1;
}

else
{
	i = n;
}

j = i;
total = 1;

while (j > 9)
{
	j /= 10;
	total *= 10;
}

for (; total >= 1; total /= 10)
{
	_putchar(((i / total) % 10) + 48);
}

}
