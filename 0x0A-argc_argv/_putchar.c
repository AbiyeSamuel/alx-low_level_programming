#include <unistd.h>

/**
 * _putchar - writes character to the standard output
 * @c: character to print
 * Return: string to stdio
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
