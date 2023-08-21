#include "main.h"

/**
 * _puts - prints a string followed by a newline
 * @str: function parameter, a pointer
 * Return: void
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
