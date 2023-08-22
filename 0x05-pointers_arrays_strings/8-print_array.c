#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 * @a: first pointer for the function
 * @n: second pointer for the function, number of elements
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
