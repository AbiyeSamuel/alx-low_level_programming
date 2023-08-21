#include "main.h"

/**
 * swap_int - swaps the value of 2 integers
 * @a: first pointer
 * @b: second pointer in function
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
