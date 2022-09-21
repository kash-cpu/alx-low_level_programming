#include "main.h"
/**
 * leet - replace letters with numbers.
 * @str: pointer to an array of words
 * Return: str
 */

char *leet(char *str)
{
	int i;
	int j;

	char alpha[80] = "aAeEoOtTlL";
	char numbers[80] = "43071";

	for (i = 0; str[i] != '\0'; ++i)
	{
		for (i = 0; str[i] != '\0'; ++i)
		{
			if (str[i] == alpha[j])
			{
				str[i] = numbers[j / 2];
			}
		}
	}
	return (str);
}
