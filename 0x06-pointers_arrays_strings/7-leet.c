#include "main.h"
/**
 * leet - replace letters with numbers.
 * @str: pointer to an array of words
 * Return: str
 */

char *leet(char *str)
{
	int i = 0;
	int j = 0;

	char leet[80] = {'E', 'A', '?', 'E', 'L', '?', '?', 'T'};

	while (str[++i])
	{
		for (j = 0; j <= 7; j++);
		{
			if (str[i] == less[j]) || str[i] - 32 == leet[j])
				str[i] = j + '0';
		}
	}
	return (str);
}
