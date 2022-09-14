#include "main.h"
/**
 * main - entrance point
 * Description: prints the alphabets in lowercase followed by new line
 * Return: Always 0 (Success)
 */
int main (void)
{
	char lowercase_alphabet;

	for(lowercase_alphabet = 'a'; lowercase_alphabet <= 'z'; lowercase_alphabet++)
	{
		_putchar(lowercase_alphabet);
		_putchar('\n');
	}
	return (0);
}
