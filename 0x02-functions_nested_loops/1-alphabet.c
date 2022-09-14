#include "main.h"
/**
 * main - entrance point
 * Description: prints the alphabets in lowercase followed by new line
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char lowercase_alphabet;

	for(lowercase_alphabet = 'a'; lowercase_alphabet <= 'z'; lowercase_alphabet++)
	{
		_putchar(lowercase_alphabet);
		return (0);
	}
_putchar('\n');
}
