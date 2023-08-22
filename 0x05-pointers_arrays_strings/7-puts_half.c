#include "main.h"

/**
 * puts_half - prints second half of a string
 * @str: pointer for the function
 * Return: void
 */

void puts_half(char *str)
{
	int i, p;
	int count = 0;

	for (i = 0; str[i] != '\0'; i++)
		count++;
	p = (count - 1) / 2;
	for (i = p + 1; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
