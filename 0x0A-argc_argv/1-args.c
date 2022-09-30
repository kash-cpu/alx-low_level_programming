#include <stdio.h>

/**
 * main - prints the number of argument pass into it
 * @argc: number of command line argument and size of the argv array
 * @argv: an array of size argc
 * Return: 0
 */

int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
