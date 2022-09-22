#include "main.h"

/**
 * _strcpy -  copies string
 * @dest: argument char
 * @src: argument char
 * Return: string to stdout
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}