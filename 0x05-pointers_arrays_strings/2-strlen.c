#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: argument s
 * Return: string lenght
 */

int _strlen(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		l++;
		s++;
	}
	return (l);
}
