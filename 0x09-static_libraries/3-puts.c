#include "main.h"
#include <stdio.h>

/**
 * _puts - print a string to the standard output
 * @str: string
 *
 *
 * Return: newline
 */

void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}
