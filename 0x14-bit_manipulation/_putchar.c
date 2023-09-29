#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to the stdout
 * @c: Character to be printed
 * Return: Always 0
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
