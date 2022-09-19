#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: argument s
 * Return: string lenght
 */

int _strlen(char *s)
{
	int i;

	while (*s != '\0')
	{
		i++;
		s++;
	}
		return (i);
}
