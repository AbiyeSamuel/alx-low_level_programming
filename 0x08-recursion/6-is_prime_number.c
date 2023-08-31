#include "main.h"
#include <stdio.h>

int check_prime_number(int n, int i);

/**
 * is_prime_number - function that checks for prime number
 * @n: integer to be checked
 * Return: int 0 or 1
 */

int is_prime_number(int n)
{
	return (check_prime_number(n, 1));
}

/**
 * check_prime_number - checks for prime number
 * @n: int to be checked
 * @i: number of iteration
 * Return: 1 or 0
 */

int check_prime_number(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n % i == 0 && i > 1)
		return (0);
	if ((n / i) < i)
		return (1);
	return (check_prime_number(n, i + 1));
}
