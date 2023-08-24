#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @S: the string
 * Return: the encoded string
 */

char *rot13(char *S)
{
	int i, j;
	char *letters1 = {"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"};
	char *letters2 = {"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm"};

	for (i = 0; S[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (S[i] == letters1[j])
			{
				S[i] = letters2[j];
				break;
			}
		}
	}
	return (S);

}
