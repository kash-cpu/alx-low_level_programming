#include <stdio.h>

/**
 * main - print name of program
 * @argc: size of argv array and number of command line arguments
 * @argv: an array of argc
 * Return: 0
 */

nt main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
