#include "main.h"

/**
 * print_last_digit - prints last digit
 * @g: function parameter
 * Return: k
 */
int print_last_digit(int g)
{
	int i;

	i = g % 10;
	if (g < 0)
		i = -i;
	_putchar(i + '0');
	return (i);
}
