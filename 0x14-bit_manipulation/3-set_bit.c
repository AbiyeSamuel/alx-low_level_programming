#include "main.h"

/**
 * set_bit - sets a bit
 * @n: pointer to change a bit
 * @index: sets a bit 1
 * Return: 1 on success and -1 on fail
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = ((1UL << index) | *n);
	return (1);
}
