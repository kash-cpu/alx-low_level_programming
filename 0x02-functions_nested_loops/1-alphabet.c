#include "main.h"
/**
 * main - entrance point
 * Description: print_alphabet - function to print lower case alphabet
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char lowercase;

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
	{
		_putchar(lowercase);
	}
	_putchar('\n');
}
