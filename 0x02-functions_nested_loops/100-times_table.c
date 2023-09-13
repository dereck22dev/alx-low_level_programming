#include "main.h"

/**
 * print out the digit in the thousand range
 * @sum: Value to scan for thousand range
 *
 * Return: Void
 */
static void print_thousand(int sum)
{
	if (sum / 1000 == 0)
	{
		_putchar(32);
	}
	else
	{
		_putchar('0' + (sum / 1000));
	}
}


/**
 * print out the digit in the hundred range
 * @sum: Value to scan for hundred range
 *
 * Return: Void
 */
static void print_hundred(int sum)
{
	if (sum / 100 == 0)
	{
		_putchar(32);
	}
	else
	{
		_putchar('0' + (sum / 100));
	}
}


/**
 * print out the digit in the tenth range
 * @sum: Value to scan for tenth range
 *
 * Return: Void
 */
static void print_tenth(int sum)
{
	if (sum / 10 == 0)
	{
		_putchar(32);
	}
	else
	{
		if ((sum / 10) > 9)
		{
			_putchar('0' + (sum / 10 % 10));
		}
		else
		{
			_putchar('0' + (sum / 10));
		}
	}
}


/**
 * print out the digit in the base10 range
 * @sum: Value to scan for base10 range
 *
 * Return: Void
 */
static void print_base10(int sum)
{
	if (sum % 10 == 0)
	{
		_putchar('0');
	}
	else
	{
		_putchar('0' + (sum % 10));
	}
}

/**
 * print_times_table - print out the 9 times table
 * @n: Valuse use to generate times tables.
 *
 * Return: void
 */
void print_times_table(int n)
{
	int v, h;

	if (n > 15)
	{
		return;
	}
	for (h = 0 ; h < n + 1 ; h++)
	{
		_putchar('0');
		for (v = 1 ; v < n + 1 ; v++)
		{
			int sum = v * h;

			_putchar(',');
			print_thousand(sum);
			print_hundred(sum);
			print_tenth(sum);
			print_base10(sum);
		}
		_putchar('\n');
	}
}
