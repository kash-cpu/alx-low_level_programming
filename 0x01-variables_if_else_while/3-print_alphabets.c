#include <stdio.h>
#include <unistd.h>
/**
 * main - entry point
 * Descriptio: prints alphabet in lowercase then uppercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return(0);
}
