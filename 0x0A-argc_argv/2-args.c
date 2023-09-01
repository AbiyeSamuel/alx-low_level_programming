#include "main.h"

/**
 * main - prints all argument it recieves
 * @argc: number of arugments
 * @argv: array of arugments
 * Return: void
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
