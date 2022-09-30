#include <stdio.h>

/**
 * main - prints the minimum number of coins to make change for an amount of money.
 * @argc: number of command line argument and size of argv array
 * @argv: an array of argc
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int coins = 0, sum = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	sum = atoi(argv[1]);

	if (sum < 0)
	{
		printf("0\n");
		return (0);
	}
	while (sum / 25)
	{
		sum -= 25;
		coins++;
	}
	while (sum / 10)
	{
		sum -= 10;
		coins++;
	}
	while (sum / 5)
	{
		sum -= 5;
		coins++;
	}
	while (sum / 2)
	{
		sum -= 2;
		coins++;
	}
	coins += sum;
	printf("%d\n", coins);
	return (0);
}
