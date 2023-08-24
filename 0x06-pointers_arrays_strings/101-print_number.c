#include "main.h"
#include <stdio.h>

/**
 * print_number - function that prints an integer
 * @n: number tested
 * Return: Always 0
 */

void print_number(int n)
{
	int i, j, digit, digits, power;
	unsigned int temp, numchar, num;

	digit = 0;

	if (n < 0)
	{
		_putchar('-');
		temp = -n;
	}
	else
	{
		temp = n;
	}

	num = temp;

	while (num >= 10)
	{
		num = num / 10;
		digit++;
	}
	digits = digit + 1;
	power = 1;
	i = 1;

	while (i < digits)
	{
		power = power * 10;
		i++;
	}

	j = power;

	while (j >=  1)
	{
		numchar = (temp / j) % 10;
		_putchar(numchar + '0');
		j = j / 10;
	}
}
