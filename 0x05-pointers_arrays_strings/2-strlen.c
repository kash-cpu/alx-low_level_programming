#include "main.h"
#include <string.h>

/**
 * _strlen - returns the length of a string
 * @s: argument s
 * Return: string lenght
 */

int _strlen(char *s)
{
	int length;

	for (; *s != '\0'; s++)
	{
		length++;
	}
	return (length);
}
