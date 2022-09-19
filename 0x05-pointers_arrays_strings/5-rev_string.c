#include "main.h"
#include <string.h>

/**
 * print_rev - function that reverse a string
 * @s: argument s
 * Return: void
 */

void rev_string(char *s)
{
	char c;
	int l;
	int i;
	l = strlen(s);

	for (i = 0; i<l/2; i++)
	{
		c = s[i];
		s[i] = s[l - 1 - i];
		s[l -1 - i] = c;
	}
	_putchar(s);
	_putchar('\n');
}
