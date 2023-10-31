#include "main.h"

/**
 * clear_bit - clears the given bit
 * @n: pointer to the bit to be changed
 * @index: clears the bit
 * Return: 1 on success and -1 on fail
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (~(1UL << index) & *n);
	return (1);
}
