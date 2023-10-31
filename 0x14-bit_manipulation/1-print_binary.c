#include "main.h"

/**
 * print_binary - prints the given binary number
 * @n: number of binary printed
 * Return: value of binary printed
 */

void print_binary(unsigned long int n)
{
	int l, s = 0;
	unsigned long int new;

	for (l = 63; l >= 0; l--)
	{
		new = n >> l;
		if (new & 1)
		{
			_putchar('1');
			s++;
		}
		else if (new)
			_putchar('0');
	}
	if (!new)
		_putchar('0');
}
