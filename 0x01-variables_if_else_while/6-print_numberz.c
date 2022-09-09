#include <stdio.h>
#include <unistd.h>
/**
 * main - entry point
 * Description: prints char bellow 10
 * Return: Always 0 9Success)
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		putchar(a + '0');
	}
	putchar('\n');
	return (0);
}
