#include "main.h"

/**
 * _strdup - return a pointer to a new memory
 * @str: input string
 * Return: pointer or NULL
 */

char *_strdup(char *str)
{
	size_t i, j;
	char *stout;

	if (str == NULL)
		return (NULL);
	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	stout = (char *)malloc(sizeof(char) * (i + 1));

	if (stout == NULL)
		return (NULL);
	for (j = 0; j <= i; j++)
	{
		stout[j] = str[j];
	}
	return (stout);
}
