#include <stdio.h>
#include <unistd>
/**
 * main - entry point
 * Description: prints all single digit number
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		printf("%d", a);
	}
	putchar('\n');
	return (0);
}
