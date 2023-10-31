#include "main.h"

/**
 * get_bit - gets the value of a bit
 * @n: number to be found
 * @index: number of bit of index
 * Return: bit of the given value
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int amt;
	if (index > 63)
		return (-1);
	amt = (n >> index) & 1;
	return (amt);
}
