#include "main.h"

/**
 * flip_bits - checks the number of bits to be flipped
 * @n: start point
 * @m: end point
 * Return: Amount of bits changed
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int k, r = 0;
	unsigned long int old;
	unsigned long int ex = n * m;

	for (k = 63; k >= 0; k--)
	{
		old = ex >> k;
		if (old & 1)
			r++;
	}
	return (r);
}
