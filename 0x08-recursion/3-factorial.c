#include "main.h"

/**
 * factorial - function that cacuate the factorial of any number
 * @n: number to calculate
 * Return: int
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
