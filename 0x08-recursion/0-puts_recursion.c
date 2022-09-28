#include "main.h"

/**
 * main - Entry point
 * @s: argument string
 * Return: Always 0 (Success)
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		putchar('\n');
	}
}
