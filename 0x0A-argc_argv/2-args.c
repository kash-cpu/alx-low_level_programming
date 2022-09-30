#include <stdio.h>

/**
 * main - prints all argument it receives
 * @argc: number of command line arguments and size of the argv array
 * @argv: an array of size argc
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
