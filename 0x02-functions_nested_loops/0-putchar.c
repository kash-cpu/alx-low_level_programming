#include "main.h"
/**
 * main - entrance point
 * Description: prints a function followed by new line
 * Return: Always 0 (Success)
 */
int main()
{
	char s [] = "_putchar\n"
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	return (0);
}
