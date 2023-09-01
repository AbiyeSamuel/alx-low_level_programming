#include "main.h"

/**
 * main - print number of arguments passed to it
 * @argc: arguments
 * @argv: array of arugment
 * Return: void
 */

int main(int argc, char *argv[])
{
	(void) argv;
		printf("%d\n", argc - 1);
		return (0);

}
