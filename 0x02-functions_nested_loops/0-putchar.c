#include "main.h"
/**
 * main - entry point
 * Description: prints a function followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char string[] = "_putchar\n";
	int count = 0;

	while (string[count] != '\0')
	{
		_putchar(string[count]);
		count++;
	}
	return (0);
}
