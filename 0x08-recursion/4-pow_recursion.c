#include "main.h"

/**
 * _pow_recursion - functin that return the x raised to power of y
 * @x: first function parameter, integer value
 * @y: second parameter, the power to be  raised to
 * Return: int
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
