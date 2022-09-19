#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_rev - function that prints string, in reverse, followed by a new line
 * @s: argument s
 * Return: reverse string
 */

void print_rev(char *s)
{
	int length = strlen(s);

	while (length--)
	{
		_putchar(*(s + length));
	}
	_putchar('\n');
}
