#include "main.h"

/**
 * get_endianness - checks if a number is an endian
 *
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	int a;
	char *s;

	a = 1;
	s = (char *)&a;
	return (*s);
}
