#include <unist.h>
#include "main.h"

/**
 * _putchar - write char to the stdout
 * @c: char to print
 * Return: 1 on succes and -1 on fail
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
