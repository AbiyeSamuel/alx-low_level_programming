#include "main.h"

/**
 * binary_to_uint - binary can be converted to unsigned int
 * @b: string taking binary numbers
 * Return: numbers converted
 */

unsigned int binary_to_int(const char *b)
{
	int a;
	unsigned int sam = 0;

	if (!b)
		return (0);
	for (a = 0; b[a]; a++)
	{
		if (b[a] < '0' || b[a] > '1')
			return (0);
		sam = 2 * sam + (b[a] - '0');
	}
	return (sam);
}
