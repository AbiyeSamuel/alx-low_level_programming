#include "main.h"

/**
 * _abs - checks absolute value
 * @a: function parameter
 * Return: returns a
 */

int _abs(int a)
{
	if (a < 0)
	{
		return (-a);
	}
	else if (a >= 0)
	{
		return (a);
	}

	return (0);
}
