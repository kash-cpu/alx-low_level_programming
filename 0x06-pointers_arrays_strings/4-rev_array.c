#include "main.h"

/**
 * reverse_array - reverse array.
 * @a: argument char.
 * @n: argument char.
 * Return: int to stdout
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int temp = 0;

	i -= 1;

	while (i <= n)
	{
		temp = a[n];
		a[n--] = a[i];
		a[i++] = temp;
	}
}
