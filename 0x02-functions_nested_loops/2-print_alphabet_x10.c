#include "main.h"
/**
 * print_alphabet_x10 - function to print lowercase alphabet 10 times
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char alphabet;
	int count;

	for (count = 10; count >= 1; count--)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
		}
		_putchar('\n');
	}
}
