#include "main.h"

/**
 * _puts - print a string
 * @str: argument s
 * Return: string to stdout
 */

void _puts(char *str)
{
	char *s[];

	while(*str != '/0')
	{
		_putchar(str);
		s = str;
		s++;
	}
	_putchar('\n');
}
