#include "main.h"
#include <stdio.h>

/**
 * cap_string - function that capitalizes all words of a string
 * @str: string
 * Return: strings in all caps
 */

char *cap_string(char *Str)
{
	int i, j;

	int a[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	i = 0;

	while (*(Str + i) != '\0')
	{
		if (*(Str + i) >= 'a' && *(Str + i) <= 'z')
		{
			if (i == 0)
			{
				*(Str + i) = *(Str + i) - 32;
			}
			else
			{
				for (j = 0; j <= 12; j++)
				{
					if (a[j] == *(Str + i - 1))
						*(Str + i) = *(Str + i) - 32;
				}
			}
		}
	i++;
	}
	return (Str);
}
