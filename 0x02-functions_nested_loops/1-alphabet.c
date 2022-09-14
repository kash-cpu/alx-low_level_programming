#include "main.h"
/**
 * main - entrance point
 * Description: prints the alphabets in lowercase followed by new line
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char lowercase;

	for(lowercase = 'a'; lowercase <= 'z'; lowercase++)
	{
		_putchar(lowercase);
	}
	_putchar('\n');
}
