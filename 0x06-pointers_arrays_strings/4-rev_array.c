#include "main.h"
#include <stdio.h>

/**
 * reverse_array - function that reverses the elements of array or integer
 * @a: first function parameter
 * @n: elements of the array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int s, b, e;

	b = 0;
	e = n - 1;

	while (b < e)
	{
		s = *(a + b);
		*(a + b) = *(a + e);
		*(a + e) = s;
		b++;
		e--;
	}
}
