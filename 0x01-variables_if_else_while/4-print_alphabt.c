#include <stdio.h>
/**
 * main - Prints the alphabet except the letters q and e.
(*
 * Return: 0 on success
 */
int main(void)
{
	char e = 'a';

	while (e <= 'z')
	{
		if (e != 'q' && e != 'e')
		{
			putchar(e);
		}
		e++;
	}
	putchar('\n');
	return (0);
}
