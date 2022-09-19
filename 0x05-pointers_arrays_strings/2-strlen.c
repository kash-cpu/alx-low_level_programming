#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: argument s
 * Return: string lenght
 */

int _strlen(char *s)
{
	int length;

	while (*s != '\0')
	{
		length += 1;
		*s += 1;
	}
	return (length);
}
