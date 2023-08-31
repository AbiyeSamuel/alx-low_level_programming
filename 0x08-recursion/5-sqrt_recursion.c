#include "main.h"
#include <stdio.h>

int _square_root(int n, int i);
/**
 * _sqrt_recursion - function tht returns the natural square root of a number
 * @n: input integer
 * Return: integer
 */

int _sqrt_recursion(int n)
{
	return (_square_root(n, 1));
}

/**
 * _square_root - soves natural square root
 * @n: integer to be solved
 * @i: number of iterations
 * Return: int
 */

int _square_root(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);
	if (sqrt == n)
		return (i);
	return (_square_root(n, i + 1));
}
