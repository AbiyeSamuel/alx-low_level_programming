#include "main.h"

/**
 * string_toupper - function that changes lowercase to uppercase
 * @S: string
 * Return: string changed to uppercase
 */

char *string_toupper(char *S)
{
	int i = 0;

	while (*(S + i) != '\0')
	{
		if (*(S + i) >= 'a' && *(S + i) <= 'z')
			*(S + i) = *(S + i) - 32;
		i++;
	}
	return (S);
}
