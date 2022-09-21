#include "main.h"
/**
 * rot13 - caesers cipher
 * @str: pointer to an array of words
 * Return: str
 */
char *rot13(char *str)
{
	int i, j;
	char input[80] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[80] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 53; j++)
		{
			if (r1[j] == str[i])
			{
				str[i] = r2[j];
				break;
			}
		}
	}
	return (s);
}
