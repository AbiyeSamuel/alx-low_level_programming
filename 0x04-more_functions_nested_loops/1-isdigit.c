#include "main.h"

/**
 * _isdigit - checks for digit from 0 through 9
 * @c: function parameterer
 * Return:  0 or 1
 */


int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
