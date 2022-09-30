#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins.
 * @argc: number of command line argument and size of argv array
 * @argv: an array of argc
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int num, i, result = 0;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);
	if (num < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5 && num >= 0; i++)
	{
		while (num >= coins[i])
		{
			num = num - coins[i];
			result++;
		}
	}
	printf("%d\n", result);
	return (0);
}
