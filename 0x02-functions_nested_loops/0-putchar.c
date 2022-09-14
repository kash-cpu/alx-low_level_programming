#include "main.h"
/**
 * main - entry point
 * Description: prints a function followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char s [] = "_putchar";
	int i = 0;

	while (s [i] != '\0')
	{
		putchar(s [i] );
		i++;
	}
	return (0);
}
