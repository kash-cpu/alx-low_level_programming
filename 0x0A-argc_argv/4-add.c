#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - program that adds positive number
 * @argc: number of command line argument and size of the argv array
 * @argv: aray of argc
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	if (argc < 0)
	{
		printf("0\n");
	}

	for (i = 1; i < argc; i++)
	{
		sum = sum + atoi(argv[i]);

		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!(isdigit(argv[i][j])))
			{
				printf("Error\n");
				return (0);
			}
		}
	}
	printf("%d\n", sum);
	return (0);
}
