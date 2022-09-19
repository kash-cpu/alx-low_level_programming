#include <stdio.h>
#include "main.h"

/**
 * puts2 - prints every other character
 * @str: argument *str
 * Return: string to stdout
 */

void puts2(char *str)
{
	int len, i;
	len = strlen(str);

	for (i = 0; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
